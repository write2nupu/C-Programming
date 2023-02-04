#include<stdio.h>
void main(){
    float p,c,m,ev,h,en,a,b;
    char n;
    printf("Enter physics marks ");
    scanf("%f",&p);
    printf("Enter Chemistry marks ");
    scanf("%f",&c);
    printf("Enter Maths marks ");
    scanf("%f",&m);
    printf("Enter EVS marks ");
    scanf("%f",&ev);
    printf("Enter Hindi marks ");
    scanf("%f",&h);
    printf("Enter English marks ");
    scanf("%f",&en);
    a=((p+c+m+ev+h+en)*100)/600;
    printf("PERCENTILE %f \n",a);
    if (a>80){
        printf("A GRADE");
    }
    else if (a>60 && 80>a){
        printf("B GRADE");}

    else if (a>50 && 60>a){
        printf("C GRADE");}

    else if (a>30 && 50>a){
        printf("D GRADE");
    }
    else
    printf("E GRADE");
}