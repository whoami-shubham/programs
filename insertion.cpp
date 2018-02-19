#include<iostream>
using namespace std;
int main(){
int n,i,j,temp;
int *A;
cin>>n;
A= new int[n];
for(i=0;i<n;i++){
cin>>A[i];
}
for(i=0;i<n-1;i++){
j=i+1;
while(i>=0&&A[j]<A[i]){
temp=A[i];
A[i]=A[j];
A[j]=temp;
i--;
j--;
}
}
for(i=0;i<n;i++){
cout<<A[i]<<" ";

}
return 0;
}
