#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int n,count=0,i,j,k,l;
    cin>>n;
//cin.ignore();
 string s,str;
cin>>s;
cout<<s<<endl;
    if(n>=4){
   cout<<"inside 1st if \n";
        for(i=0;i<n;i++){
            str="";
            for(j=s.length()-2;j>0;j--){
                str=str+s[j+1];
		cout<<"str = "<<str<<"\n";
                if(s[j]==s[i]){
                    for(k=i+1;k<j;k++){
                        for(l=0;l<str.length();l++){
                            if(s[k]==str[l]){
                                count++;
                            }
                        }
                    }
                    
                }
            }
        }
    }
    cout<<count;
    
    return 0;
}
