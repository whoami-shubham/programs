#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1,v2;
    int T,n,i,j,k,q;
    cin>>T;
    for(k=0;k<T;k++){
        int n,num,count=0;
        cin>>n;
    for(j=0;j<n;j++){
        cin>>q;
        v1.push_back(q);
    }
    for(j=0;j<n;j++){
        cin>>q;
        v2.push_back(q);
    }
    if(n>=2){
        for(i=0;i<v1.size()-1;i++){
            if(v1[i]>v2[i]){
                num=v1[i]-v2[i];
                v1[i]=v1[i]-num;
                v1[i+1]=v1[i+1]+num;
            }
            else if(v2[i]>v1[i]){
                num=v2[i]-v1[i];
                v1[i+1]=v1[i+1]-num;
                v1[i]=v1[i]+num;
            }
            else{
                num=0;
            }
        }
        for(i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                count++;
                cout<<"NO\n";
                break;
            }
        }
    }
        if(count==0){
            cout<<"YES\n";
        }
        if(n==1){
            if(v1[i]==v2[i]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        count=0;
}
    return 0;
}
