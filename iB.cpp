	#include<iostream>
	using namespace std;
	int main(){
	int n,i,j,k,a,b,c,d;
        cout<<"give the size of rectangle \n";
	cin>>n;
        cout<<"\n";
	for(i=0;i<n;i++){
	a=n;
	b=i;
	c=i;
        d=2*n-1-2*i;
        
	while(b>0){
        if(a<10){
         cout<<" ";
         }
	cout<<a--<<" ";
	b--;
	}
	while(d>0){
	d=d-1;
         if(a<10){
         cout<<" ";
         }
        cout<<a<<" ";
	}

	while(c>0){
            if(a<10){
         cout<<" ";
         }

	cout<<++a<<" ";
	c=c-1;
	}
	cout<<"\n";
         
	}
       for(i=n-2;i>=0;i--){
          a=n;
        b=i;
        c=i;
        d=2*n-1-2*i;

        while(b>0){
          if(a<10){
         cout<<" ";
         }

        cout<<a--<<" ";
        b--;
        }
        while(d>0){
          if(a<10){
         cout<<" ";
         }

        d=d-1;
        cout<<a<<" ";
        }

        while(c>0){
         if(a<10){
         cout<<" ";
         }

        cout<<++a<<" ";
        c=c-1;
        }
        cout<<"\n";

        
           }

	return 0;
	}
