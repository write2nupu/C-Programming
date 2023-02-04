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
    if(per>=80){
}
