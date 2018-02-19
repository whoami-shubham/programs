#include<iostream>
using namespace std;
int main(){
string str1, str="shubham";
cout<<"enter a key"<<endl;
int key,i;
cin>>key;
while(str[i]!='\0'){
str1[i]=str[i]^key;
}
cout<<str1;
return 0;
}
