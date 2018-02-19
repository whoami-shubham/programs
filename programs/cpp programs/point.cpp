#include<iostream>
using namespace std;
class point{
private:
int x,y;
public:
void getx(int a){
x=a;
}
void gety(int b){
y=b;
}
void printxy(){
cout<<"x = "<<x<<"\n"<<"y = "<<y<<endl;
}
int getcoordinate(int x,int y){
if(x>=0&&y>=0){
return 1;
}
else if(x<0&&y>=0){
return 2;
}
else if(x<0&&y<0){
return 3;
}
else{
return 4;
}
}
};
void main()
{
    int a,b;
    cout<<"enter x and y co_ordinate of a point :"<<endl;
    cin>>a>>b;
point p;
p.getx(a);
p.gety(b);
p.printxy();
cout<<"points is in "<<p.getcoordinate(a,b)<<" co-ordinate"<<endl;
}
