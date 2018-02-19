#include<iostream>
#include<string>
using namespace std;
bool isMatch(string s, string p) {
        int j=0,k,count=0,a=0;
        for(int i=0;i<p.length();i++){
          cout<<i<<" th ieration"<<'\n';
            k=i;
            while((p[k]==s[j] || p[k]=='.' || p[k]=='*' )&& j<s.length() && count<=1 && k<p.length()){
            if( p[k]=='.' ){
                count++;
            }
              cout<<a<<".in while loop  j"<<" = "<<j<<" k "<<" = "<<k<<'\n';
                k++;
                j++;
                a++;
            }
            if(count>1){
                j=j-1;
            }
            if(j==s.length()){
              std::cout << "j = " <<j<< '\n';
                return true;
            }

            count=0;
            j=0;

        }
        return false;
        }
int main(){
string s,p;
cin>>s;
cin>>p;
cout<<isMatch(s,p)<<'\n';
return 0;
}
