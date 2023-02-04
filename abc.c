/*#include<stdio.h>
void main(){

int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);
}*/

/*#include<stdio.h>
void main(){
    int o,e,n,i,c1=0,c2=0;
    int a[10];
    
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        if(a[i]%2==0)
        {
            e=++c1;
        }
        else
        o=++c2;
    }
    printf("EVEN COUNT %d \n",e);
    printf("ODD COUNT %d",o);
}*/
/*#include<stdio.h>
void main(){
    int a[3][3],i,j,k,c=0,t=0;
    printf("Enter matrix - ");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    
    printf("count which number - ");
    scanf("%d",&k);
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            if(a[i][j]==k){
            c=++t;
            }
        }
    }
         printf("COUNT %d",c);
    }*/

#include <stdio.h>
int g = 10;
void fun(){
int l = 20;
static int s = 30;
printf("\n g = %d", g);
printf("\n l = %d", l);
printf("\n s = %d", s);
g++;
l++;
s++;
}

int main(){
    int i;
    for(i=0; i<10; i++)
    fun();
return 0;
}
