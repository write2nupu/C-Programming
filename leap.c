#include <stdio.h>
int main(){
    int year;
    printf("Enter numbers ");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0){
        printf("YEAR IS LEAP YEAR");
    }
    else
    printf("NOT A LEAP YEAR");
    return 0;
}