#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter numbers ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("A IS THE LARGEST");
    }
    else if (b>a && b>c){
        printf("B IS THE LARGEST");
    }
    else
    printf("C LARGEST");
    return 0;
}