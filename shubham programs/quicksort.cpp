#include<iostream>
#include<cstdlib>
using namespace std;
void quicksort(int *A,int p,int q);
int partition(int *A,int p,int q);
int main(){
int *A,n,i,j;
cout<<"enter size of Array :";
cin>>n;
A=(int *)malloc(n*sizeof(int));
cout<<"enter "<<n <<" elements :"<<endl;
for(j=0;j<n;j++){
cin>>A[j];
}
quicksort(A,0,10);
for(i=0;i<n;i++){
cout<<A[i] <<'\t';
}
cout<<'\n';
return 0;
}
void quicksort(int *A,int p,int q){
int pI;
if(q>p){
 pI=partition(A,p,q);
quicksort(A,p,pI-1);
quicksort(A,pI+1,q);
}
}
int partition(int *A,int p,int q){
int i=0,j,temp,t;
for(j=0;j<q;j++){
if(A[j]<=A[q]){
temp=A[j];
A[j]=A[i];
A[i]=temp;
i++; 
}
 }
t=A[q];
A[q]=A[i];
A[i]=t;
return i;
}
