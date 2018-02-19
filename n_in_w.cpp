#include<iostream>
using namespace std;
int func5(int n){
  int number=0,D=0,b=n,m=1;
  while(b>0){
    b=b/10;
    D++;
    m=m*10;
  }
  m=m/10;
  if(n>=10000){
    if(n<100000){
      m=m/10;
    }
    else{
      m=m/100;
    }
  }
    number=n%m;
  return number;
}
int func2(int n){
  int counter=0,mf=1,a=n;
  while(a>0){
    a=a/10;
    counter++;
    mf=mf*10;
  }
  mf= mf/10;
  return mf;
}
int func3(int n){
  int b=n;
  if(n<=9999){
  while(b>0){
  if (b>=10){
    b=b/10;
  }
  else{
    return b;
  }
}
}
else if(n>=10000 && n<1000000){
  return n%1000;
}
else{
  return n%1000000;
}
}
string func(int a);
string func4(int n);
int main(){
  int n,a;
  cout<<"enter a number";
  cin>>n;
  cout<<func4(n);
  cout<<'\n';
  a=func5(n);
  return 0;
}
string func(int a) {
  string ans="";
  switch (a) {
    case 1000000:
    ans=ans+"million";
    break;
    case 10000:
    ans=ans+"thousand";
    break;
    case 1000:
    ans=ans+"thousand";
    break;
    case 100:
    ans=ans+"hundred";
    break;
    case 90:
    ans=ans+"ninety";
    break;
    case 80:
    ans=ans+"eighty";
    break;
    case 70:
    ans=ans+"seventy";
    break;
    case 60:
    ans=ans+"sixty";
    break;
    case 50:
    ans=ans+"fifty";
    break;
    case 40:
    ans=ans+"fourty";
    break;
    case 30:
    ans=ans+"thirty";
    break;
    case 20:
    ans=ans+"twenty";
    break;
    case 19:
    ans=ans+"nineteen";
    break;
    case 18:
    ans=ans+"eighteen";
    break;
    case 17:
    ans=ans+"seventeen";
    break;
    case 16:
    ans=ans+"sixteen";
    break;
    case 15:
    ans=ans+"fifteen";
    break;
    case 14:
    ans=ans+"fourteen";
    break;
    case 13:
    ans=ans+"thirteen";
    break;
    case 12:
    ans=ans+"twelfth";
    break;
    case 11:
    ans=ans+"eleven";
    break;
    case 10:
    ans=ans+"ten";
    break;
    case 9:
    ans=ans+"nine";
    break;
    case 8:
    ans=ans+"eight";
    break;
    case 7:
    ans=ans+"seven";
    break;
    case 6:
    ans=ans+"six";
    break;
    case 5:
    ans=ans+"five";
    break;
    case 4:
    ans=ans+"four";
    break;
    case 3:
    ans=ans+"three";
    break;
    case 2:
    ans=ans+"two";
    break;
    case 1:
    ans=ans+"one";
    break;
    case 0:
    ans=ans+"";
    break;
  }

  return ans;
}
string func4(int n){
  string words="";
  int temp;
  while(n>=0){

/*if(n>9999){
words=words+" "+func4(func3(n));
} */
  if(n>=100){
    if(func3(n)>20){
      temp=func3(n);
      while(temp){
        if(temp>=100){
         words=words + " "+func(func3(temp));
         words=words + " "+func(func2(temp));
         temp=func5(temp);
       }
       else if(temp>20 && temp<100){
         words=words + " "+ func(func3(temp)*func2(temp));
         temp=func5(temp);
       }
       else{
       words=words + " " +func(temp);
       break;
     }

      }
    }
    else{
    words=words + " "+func(func3(n));
  }
    words=words + " "+func(func2(n));
    n=func5(n);
  }
  else if(n>20 && n<100){
    words=words + " "+ func(func3(n)*func2(n));
    n=func5(n);
  }
  else{
  words=words + " " +func(n);
  return words;
}
}
}
