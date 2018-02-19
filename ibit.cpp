#include<iostream>
using namespace std;
int main(){
int A;
cin>>A;
  int i,j,k,a=A,b=A,c=0,r=0;
	  for(i=0;i<A;i++){
	      b=A;
	      for(j=0;j<A-a;j++){
	          cout<<b--<<" ";
	          
	      }
	      for(k=0;k<2*a-1;k++){
	          cout<<a<<" ";
	      }
	      for(j=0;j<A-a;j++){
	          cout<<++b<<" ";
	      }
	      a--;
             cout<<"\n";
	  }
	  a=2;
	  for(i=0;i<A-1;i++){
	      b=A;
	      for(j=0;j<A-a;j++){
	         cout<<b--<<" ";
	      }
	      for(k=0;k<2*a-1;k++){
	          cout<<a<<" ";
	      }
	      for(j=0;j<A-a;j++){
	          cout<<++b<<" ";
	          
	      }
	      a++;
              cout<<"\n";
	      
	  }
	  return 0;
}
