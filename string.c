#include<stdio.h>
#include<stdlib.h>
int main() {
	char name[50];
	int age,height,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("ABC.txt","w"));
	for (i=0;i<n;++i) {
		printf("Entry %d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter Age: ");
		scanf("%d",&age);
        printf("Enter Height(in cm): ");
		scanf("%d",&height);
		fprintf(fptr,"\nName: %s \nage=%d \nHeight=%d",name,age,height);
	}
	fclose(fptr);
	return 0;
}