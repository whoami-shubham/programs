#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int *A,i,j,n,k,min,temp;
cout<<"enter size of array :";
cin>>n;
A=(int *)malloc(n*sizeof(int));
cout<<"enter "<<n <<" elements :"<<endl;
for(i=0;i<n;i++){
cin>>A[i];
}
for(i=0;i<n;i++){
min=A[i];
for(j=i;j<n;j++){
if(min>A[j]){
min=A[j];
k=j;
}
}
temp=A[i];
A[i]=A[k];
A[k]=temp;
}
for(i=0;i<n;i++){
cout<<A[i] <<'\t';
}
return 0;
}
