#include<stdio.h>//two array have similar elements and some element are repeating we have to print the elements which are not present in small array or the element which frequency is less than from big array//
void main(){
int m[10],n[10],i,j,k,temp;//n array is permutation of elements of m array n is less than or equal to m//
printf("enter 10 elements:");
for(i=0;i<10;i++){
scanf("%d",&m[i]);
}
printf("enter 7 elements:");
for(i=0;i<7;i++){
scanf("%d",&n[i]);
}//now sort elements of both array using bubble sort//
for(j=0;j<10;j++){
for(i=0;i<10-j;i++){
if(m[i]>m[i+1]){
temp=m[i];
m[i]=m[i+1];
m[i+1]=temp;
i++;
}
}
}
for(j=0;j<7;j++){
for(i=0;i<7-j;i++){
if(n[i]>n[i+1]){
temp=n[i];
n[i]=n[i+1];
n[i+1]=temp;
i++;
}
}
}//now delete the elements from m array which is present in n array and we keeping remaing elements in m array //
for(i=0;i<7;i++){
for(j=0;j<10;j++){
if(n[i]==m[j]){
for(k=j;k<10;k++){
m[k]=m[k+1];
}
k--;
}
break;
}
}

for(i=0;i<10;i++){
printf("%d\n",m[i]);
}
}
