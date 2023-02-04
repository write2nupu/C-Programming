#include<stdio.h>
int main(){
    int a,b,c;
    char n;
    printf("Enter 1st numbers ");
    scanf("%d",&a);
    printf("Enter 2nd numbers ");
    scanf("%d",&b);

    printf("Press a addition \n Press b subtraction \n Press c multiplication \n Press d Division \n");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':c=a+b; 
                break;
        case 'b':c=a-b; 
                break;
        case 'c':c=a*b; 
                break;
        case 'd':c=a/b; 
                break;
        default: printf("Wrong input");
                break;
    }
    printf("value is %d",&c);
    return 0;
}