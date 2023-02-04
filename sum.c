#include<stdio.h>
void main(){
    float p,c,m,e,h,sum,per;
    printf("Enter Physics marks: ");
    scanf("%f",&p);
    printf("Enter Chemistry marks: ");
    scanf("%f",&c);
    printf("Enter Maths marks: ");
    scanf("%f",&m);
    printf("Enter English marks: ");
    scanf("%f",&e);
    printf("Enter Hindi marks: ");
    scanf("%f",&h);
    sum=p+c+m+e+h;
    per=(sum*100)/500;
    if(per>=80 && per<=100)
    {
        printf("GRADE A");
    }
    else if (per>=65 && per<80)
    {
        printf("GRADE B");
    }
    else if (per>=50 && per<65)
    {
        printf("GRADE C");
    }
    else if (per>=33 && per<50)
    {
        printf("GRADE D");
    }
    else
    printf("FAILED");
}