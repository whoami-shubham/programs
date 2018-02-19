/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<iostream>
using namespace std;
int main(){
    int N,i,j,countd2=0,countd1=0,flag1=1,flag2=1;
    string s,d1="",d2="",temp="";
    cin>>N;
    for(i=0;i<N;i++){
       cin.ignore();
       getline(cin,s);
       cout<<s<<"\n";
        for(j=0;j<s.length();j++){
//	cout<<" inside 2nd for loop \n";
            if(s[0]=='G' && (s[i]>=48 &&s[i]<=57) && i+1<s.length()){
	cout<<" inside 1st if \n";

                temp=s[i]+s[i+1];
                if(flag1>0){
                d1=s[i]+s[i+1];
                flag1=0;
		cout<<d1<<"\n";
                }
                 if(flag2>0){
                d2=s[i]+s[i+1];
                flag2=0;
		cout<<d2<<"\n";
                }
                if(temp==d1){
                    countd1+=2;
                }
                else{
                    countd2+=2;
                }
            }
            if(s[0]=='M' && s[i]>=48 &&s[i]<=57  && i+1<s.length() ){
	cout<<" inside 2nd if \n";

                temp=s[i]+s[i+1];
                 if(flag2>0){
                d2=s[i]+s[i+1];
                flag2=0;
		 cout<<d2<<"\n";
                }
                 if(flag1>0){
                d1=s[i]+s[i+1];
                flag1=0;
		 cout<<d1<<"\n";
                }
                                if(temp==d1){
                    countd1++;
                }
                else{
                    countd2++;
                }
            }
        }
	s="";
    }
    if(countd1==countd2 || d1!="19" || d1!="20" ||d2!="19"||d2!="20"){
     //   cout<<"No Date\n";
    }
    else{
      //  cout<<"Date\n";
    }
    cout<<d1<<" "<<d2<<" ";
    return 0;
}

