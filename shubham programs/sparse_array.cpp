#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<fstream>
using namespace std;
int main() {
    int n,i,q,j,count=0;
    string *A,*B;
    cin>>n;
    A=new string [n];
    for(i=0;i<n;i++){
        getline(cin,A[i]);
       cout<<i  <<"string " <<A[i]<<endl;
    }
    cin>>q;
B=new string [q];
    for(i=0;i<q;i++){
        getline(cin,B[i]);
    }
    for(i=0;i<q;i++){
        for(j=0;j<n;j++){
            if(A[j]==B[i]){
                count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
