#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,r1,r2,j,t,r;
    printf("Enter the value of a ,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    printf("\n if d is positive than enter 1 ");
    scanf("%d",&j);
    switch(j)
    {
        case 1: printf("\n roots of eq are real");
        r1=-b+sqrt(d);
        r2=-b-sqrt(d);
        printf("the roots of quadratic equations are : %d %d",r1,r2);
        break;
        default: printf ("roots does not exist");
        break;
    }
    return 0;

}
