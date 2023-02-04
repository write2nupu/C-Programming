#include<stdio.h>
/*void main(){
    int neg,pos,z,n,i,c1=0,c2=0,c3=0;
    int a[10];
    
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for (i=0;i<n;i++){
        if(a[i]<0)
        {
            neg=++c1;
        }
    }
    printf("NEGATIVE COUNT %d \n",neg);

    for (i=0;i<n;i++){
        if(a[i]>0)
        {
            pos=++c2;
        }
    }
    printf("POSTIVIE COUNT %d \n",pos);

    for (i=0;i<n;i++){
        if(a[i]==0)
        {
            z=++c3;
        }
    }
    printf("ZERO COUNT %d",z);
}*/

/*#include<stdio.h>
void main(){
    int n,r,comb,perm;
    printf("ENTER n and r ");
    scanf("%d %d",&n,&r);
    comb = fact(n) / (fact(r) * fact(n-r));
    perm = fact(n) / fact(n-r);
    printf("The combination is %d \n",comb);
    printf("The permutation is %d",perm);
}

void fact(int x){
    int f=1,i;
    for(i=x;i>=1;i--)
    {
        f=f*i;
    }
    return f;
}*/

#include<stdio.h>
void main(){
    int x,k=0,n,i;
    int a[10];
    
    printf("enter size of array ");
    scanf("%d",&n);
    printf("enter elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("WHAT TO FIND ");
    scanf("%d",&x);
    for(i=0;i<=n;i++){
    if(x==a[i]){
        k=1;
        break;
        }
    }
    if(k==1){
        printf("FOUND");
    }
    else
    printf("NOT FOUND");
}