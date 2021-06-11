#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("Elements are-\n");
    for ( i = 0; i <arr.length; i++)
    {
        printf(" %d",arr.A[i]);
    } 
}

void append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }

}

void insert(struct Array *arr,int index, int x){
    int i;
    if(index>=0 && index<=arr->length){
        for ( i = arr->length; i>index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int delete(struct Array *arr, int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=index; i<arr->length-1; i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }

    return 0;
}
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
    printf("%d\n",delete(&arr,5));
    Display(arr);


}