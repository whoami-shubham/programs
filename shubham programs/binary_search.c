#include<stdio.h>
int Binary_search(int arr[],int low,int high,int element);
void Bubble_sort(int arr[],int size);
void Insertion_sort(int arr[],int size);
void main(){
int A[100],i,n,element;
char method;
printf("size of array:\n");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("please enter your choice . if you want sorting by Bubble sort then give input 'b' otherwise 'i' for Insertion sort\n");
scanf("%c",&method);
if(method=='b')
{
Bubble_sort(A,n);
}
else{
Insertion_sort(A,n);
}
printf("\nenter the element you want to find in this array:");
scanf("%d",&element);
Binary_search(A,0,n,element);
}
void Bubble_sort(int A[],int size){
int i,j,temp;
for(j=0;j<size;j++){
for(i=0;i<size-j;i++){
if(A[i]>A[i+1]){
temp=A[i];
A[i]=A[i+1];
A[i+1]=temp;
}
}
}
}
void Insertion_sort(int A[],int size){
int key,i,j;
for(j=1;j<size;j++){
        i=j-1;
key=A[j];
while(key<A[i]&&i>=0){
A[i+1]=A[i];
--i;
}
A[i+1]=key;

}
}
int Binary_search(int A[],int low,int high,int element){
int mid;
while(high>=low){
mid=(high+low)/2;
if(A[mid]==element){
printf("element is at %d index",mid);
break;
}
else if(A[mid]>element){
high=mid-1;
}
else if(A[mid]<element){
low=mid+1;
}
else{
printf("element does not exist in array");
}
}
return (mid);
}
