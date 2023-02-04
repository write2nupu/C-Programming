#include<stdio.h>
void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }    
    printf("\n");  
    }  
}

#include<stdio.h>
void main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf(" ");
        }    
    
    for(int j=1;j<=i;j++){
        printf(j+"");
    }
    printf("\n");  
    }  
}