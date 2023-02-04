#include<stdio.h>

int main(){
    int a;
    int b;
    printf("enter first no ");
    scanf("%d",&a);
    printf("enter sec num ");
    scanf("%d",&b);

    int sum=a+b;
    printf("%d  \n" , sum);
    a += b;
    printf("%d  \n" , a);
    return 0 ; 
}