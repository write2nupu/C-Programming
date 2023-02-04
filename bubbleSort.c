/*void main(){
    int a,b;
    swap(&a,&b);
}
void swap(int *p,int *q)
{

}*/

#include<stdio.h>
void main(){
    int i,j,k,t;
    int a[5];
    
    printf("enter array ");

    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<=3;j++){
        for(i=0;i<=3;i++){
            if(a[i]>a[i+1])
            {
                t=a[i+1];
                a[i+1]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<=4;i++){
    printf("%d \n ",a[i]);
    }
}