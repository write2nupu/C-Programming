//way-1
/*#include<stdio.h>
void main()
{
    sum();
}
void sum()
{
    int a,b;
    printf("Enter first ");
    scanf("%d",&a);
    printf("Enter second ");
    scanf("%d",&b);
    printf("Sum is %d",a+b);
}*/


//way-2
/*#include<stdio.h>
void main()
{
    int num;
    num=add();
    printf("sum %d ",num);
}
void add()
{
    int a,b;
    printf("Enter first ");
    scanf("%d",&a);
    printf("Enter second ");
    scanf("%d",&b);
    printf("Sum is %d",a+b);
}*/


//way-3
/*#include<stdio.h>
void main(){
    int a,b;
    printf("Enter first ");
    scanf("%d",&a);
    printf("Enter second ");
    scanf("%d",&b);
    add(a,b);
}

void add(int x,int y){
    printf("sum is %d",x+y);
}*/

//way-4
void main(){
    int a,b,sum;
    printf("Enter first ");
    scanf("%d",&a);
    printf("Enter second ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("sum %d ",sum);
}
int add(int x,int y){
    return(x+y);
}