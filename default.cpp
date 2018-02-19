#include<iostream>
using namespace std;
class student
{
int roll_no;
string name;
public:
student(string name,int n);
void display();
};
int main(){
student s1("shubham",90);
student s2;
s1.display();
return 0;
}
void student :: display(){
cout<<"student is  "<<name<<" and roll no of this student is "<<roll_no<<"\n";
}
student::student(string name,int n){
roll_no=n;
this->name = name;
}

