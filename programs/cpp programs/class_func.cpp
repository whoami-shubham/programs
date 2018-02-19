#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Dog{
int weight;
int height;
string name,honour;
public:
void setall(int x,int y,string ch,string n){
weight = x;
height = y;
name=ch;
honour=n;
}
void printall(){
cout<< name <<" is "<< height << "cm long . "<<"it's weight is "<<weight<< "kg .And it's honour is "<< honour <<endl;
}
};
int main(){
int a,b;
string d,e;
cout<<"enter and height ,weight of a dog :"<<endl;
cin>>a>>b;
cout<<"enter name of dog"<<endl;
fflush(stdin);
getline(cin,d);
cout<<"enter honour's name"<<endl;
fflush(stdin);
getline(cin,e);
Dog dog;
dog.setall(b,a,d,e);
dog.printall();
return 0;
}
