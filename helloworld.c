#include<stdio.h>

double taylor(int x , int n){
    static double p=1,q=1;
    double r;
    if(n==0)
        return 1;
    else{
        r=taylor(x , n-1);
        p=p*x;
        q=q*n;
        return r+p/q;
    }
}

int main(){
   printf("%lf",taylor(4,20));
}
