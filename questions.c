#include<stdio.h>
/*void main(){
    float s,p=3600,r=5.5,t=2;
    s=(p*r*t)/100;
    printf("Simple Interest is %d",s);
}*/


void main(){
    int p,c,m,ev,h,en,a,b,c;
    char n;
    printf("Enter physics marks ");
    scanf("%d",&p);
    printf("Enter Chemistry marks ");
    scanf("%d",&c);
    printf("Enter Maths marks ");
    scanf("%d",&m);
    printf("Enter EVS marks ");
    scanf("%d",&ev);
    printf("Enter Hindi marks ");
    scanf("%d",&h);
    printf("Enter English marks ");
    scanf("%d",&en);

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