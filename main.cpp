#include<iostream>
using namespace std;
namespace first{
int main(){
cout<<"first main\n";
return 0;
}
}
namespace second{
int main(){
cout<<"2nd main \n";
return 0;
}
}
int main(){
cout<<"Main \n";
first::main();
second::main();
return 0;
}
