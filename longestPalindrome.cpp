#include<iostream>
#include<string>
using namespace std;
string longestPalindrome(string s) {
        string ans,temp1="",ab="";
        int a=0,k;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                temp1=temp1 + s[j];
                cout<<a<<"."<<temp1<<'\n';
                a++;
            for(k=temp1.length()-1;k>=0;k--){
                ab=ab+temp1[k];
            }
            cout<<a<<"."<<ab<<"\n";
            a++;
          if(ab==temp1 && temp1!="") {
               if (ans.length()<temp1.length()){
                   ans=temp1;
               }
           }
                ab="";
            }
            temp1="";

        }
        return ans;
    }
    int main(){
    string s;
    getline(cin,s);
    longestPalindrome(s);
cout<<longestPalindrome(s)<<'\n';
return 0;
    }
