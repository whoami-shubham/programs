#include<bits/stdc++.h>
using namespace std;
string dtob(int n){
    string binary="";
    char temp;
    while(n>0){
        binary=binary + char('0' + n%2);
        n=n/2;
    }
    int i=0,j=binary.length()-1;
    while(i<j){
        temp=binary[i];
        binary[i]=binary[j];
        binary[j]=temp;
    }
    cout<<"decimal to binary converted ";
    return binary;
}
int diff(string a,string b){
    int dif=0;
    if(a.length()!=b.length()){
        cout<<"inside 1st if of diff  "; 
        if(a.length()>b.length()){
            for(int i=0;i<b.length();i++){
                if(a[i]!=b[i]){
                    cout<<" if dif is calculating.... ";
                    dif=dif+1;
                }
            }
            return a.length()-b.length()+dif;
        }
        else{
            cout<<"inside else of diff  ";
            for(int i=0;i<a.length();i++){
                if(a[i]!=b[i]){
                    cout<<" else dif is calculating.... ";
                    dif=dif+1;
                }
            }
            return b.length()-a.length()+dif;
        }
    }
    else{
        for(int i=0;i<a.length();i++){
                if(a[i]!=b[i]){
                    dif=dif+1;
                }
            }
    }
    return dif;
}
int hammingDistance(const vector<int> &A) {
    cout<<" inside hammingDistance ";
    int sum=0,i,j;
    string s1,s2;
    if(A.size()>0){
    for(i=0;i<A.size();i++){
        for(j=i+1;j<A.size();j++){
            cout<<" sum is being calculated .... ";
             s1= dtob(A[i]);
             s2=dtob(A[j]);
             cout<<" s1: "<<s1<<" s2 : "<<s2;
                sum=sum+diff(s1,s2);
            
        }
    }
    }
    return sum;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v.size()==n){
            break;
    }
    }
    cout<<hammingDistance(v);
    return 0;
}
