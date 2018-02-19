#include<stdio.h>
struct student
{
char name[20];
int age;
float marks;
};
void main(){
struct student std1[5];
int i,n;
printf("enter number of students out of 5 :");
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",std1[i].name);
scanf("%d",&std1[i].age);
scanf("%f",&std1[i].marks);
}
for(i=0;i<n;i++){
printf("name=%s\n",std1[i].name);
printf("age=%d\n",std1[i].age);
printf("marks=%f\n",std1[i].marks);
}
}