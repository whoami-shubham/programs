#include <iostream>
using namespace std;

int main()
{char c;
string s,a="";
cin>>s;
for(int i=0;i<s.length();i++){
    if(s[i]>=65 && s[i]<=90){
        c = 'a' + s[i]-65;
      a=a+c;
    }
    else{
        c='A' +s[i]-97;
       a=a+c;
    }
}
cout<<a;
    return 0;
}

