#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int i,j,key,n,*A;
cout<<"enter size of array :";
cin>>n;
A=(int *)malloc(n*sizeof(int));
cout<<"enter "<<n <<" elements :"<<endl;
for(i=0;i<n;i++){
cin>>A[i];
}
for(i=1;i<n;i++){
key=A[i];
j=i-1;
while(key<A[j]&&j>=0){
A[j+1]=A[j];
j--;
A[j+1]=key;
}
}
for(i=0;i<n;i++){
cout<<A[i] <<'\t';
}
return 0;
}
