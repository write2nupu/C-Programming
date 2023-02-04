#include<stdio.h>
void main(){
    int even,odd,n,i;
    int a[10];
    
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    even=a[0];
    for (i=0;i<n;i++){
        if(even%a[i]==0)
        {
            even=a[i];
            printf("%d \n",a[i]);
        }
    }

    odd=a[0];
    for (i=0;i<n;i++){
        if(odd%a[i]!=0)
        {
            odd=a[i];
            printf("%d \n",a[i]);
        }
    }
}