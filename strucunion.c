#include<stdio.h>
struct student{
int rollNo;
char name[50];
char address[50];
int age;
float average;
};

void display(struct student s[]){
int i;
for(i=0;i<12;i++){
printf("\nRoll No.: %d\nName: %s\nAddress: %s\nAge: %d\nAverage Marks: %f\n",
s[i].rollNo, s[i].name, s[i].address, s[i].age, s[i].average);
}
}

int main(){
int i;
struct student s[12];
for(i=0;i<12;i++){
printf("Enter details of student %d: \n", i+1);
printf("Enter Roll No.: ");
scanf("%d", &s[i].rollNo);
printf("Enter Name: ");
scanf("%s", s[i].name);
printf("Enter Address: ");
scanf("%s", s[i].address);
printf("Enter Age: ");
scanf("%d", &s[i].age);
printf("Enter Average Marks: ");
scanf("%f", &s[i].average);
}
display(s);
return 0;
}
