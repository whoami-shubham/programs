#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string str1,str2;
cout<<"enter a string"<<endl;
getline(cin,str1);
str2=str1^80;
cout<<"encrypted string "<<str2<<endl;
str2=str2^80;
cout<<"decrypted string "<<str2<<endl;
return 0;
}

