#include<stdio.h>
void main(){
    int a[3][3],i,j,sum;
    printf("Enter matrix ");
    
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(i!=j){
                if(i==0 && j==0){
                    printf("Yes it is");
                }
            }
        }
    }
}
//Q2 : transpose of a given matrix 
//Q3 : sum of diagonal elements
//addition of 2 matrix
// to find whether given matrix is identity matrix or not