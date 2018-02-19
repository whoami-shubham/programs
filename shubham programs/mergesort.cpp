#include<iostream>
#include<cstdlib>
using namespace std;
void mergesort(int *A,int p,int r);
void merge(int *A,int p,int q,int r);
int main(){
int i,A[10]={5,6,2,1,8,9,4,3,0,7};
mergesort(A,0,9);
for(i=0;i<10;i++){
cout<<A[i] <<'\t';
}
return 0;
}
void mergesort(int *A,int p,int r){
int q;
if(r>p){
q=p+(r-p)/2;
mergesort(A,p,q);
mergesort(A,q+1,r);
merge(A,p,q,r);
}
}
void merge(int *A,int p,int q,int r){
int n1,n2,i,j,k;
n1=q-p+1;
n2=r-q;
int L[n1],R[n2];
for(i=0;i<n1;i++){
L[i]=A[i+p];
}
for(j=0;j<n2;j++){
R[j]=A[i+j];
}
i=0;
j=0;
k=p;
while(i<n1&&j<n2){
if(R[j]<L[i]){
A[k]=R[j];
j++;
}
else{
A[k]=L[i];
i++;
}
k++;
}
while(i<n1){
A[k]=L[i];
i++;
k++;
}
while(j<n2){
A[k]=R[j];
j++;
k++;
}
}
