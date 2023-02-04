#include<stdio.h>
void main(){
    int n,f=1,i;
    printf("Enter  number ");
    scanf("%d",&n);
    for(i=n;i>=1;n--)
    {
        f=f*i;
    }
    printf("Factorial %d",f);
}