#include <stdio.h>
void main(){
    int a;
    printf("Enter your age ");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("Eligible for voting");
    }
    else
    printf("NOT ELIGIBLE");
}