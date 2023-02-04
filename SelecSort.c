#include<stdio.h>
void main(){
    int a[10],i,j,k,t,x;
    printf("Enter array ");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<=8;j++){
        for(i=j;i<=8;i++){
            if(a[j]>a[i+1]){
                t=a[i+1];
                a[i+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("what to find ");
    scanf("%d",&x);
    
    for(k=0;k<=9;k++){
    if(x=a[i]){
        printf("FOUND");
        break;
    }
    }
    if(x!=a[i]){
        printf("NOT FOUND");
    }

    /*for(i=0;i<=9;i++){
        printf("%d ",a[i]);
    }*/
}