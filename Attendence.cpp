#include<iostream>
#include"header.h"
using namespace std;
int main(){
    int n,i,value,roll_no,min;
    char quit;
    string val,date;
    cout<<"How many students are in 3rd sem of IT : ";
    cin>>n;
    vector<student>s(n+1);
    for(i=1;i<=n;i++){
        s[i] = student(i);
    }
    do{
        cout<<"-------------------------------------------------------------------------------------------\n";
        cout<<"-------------------------------------------------------------------------------------------\n";
        cout<<"         -: Enter your choice  for various Operations :-                                   \n";
        cout<<"1.for Take Attendence of Whole class                                                       \n";
        cout<<"2.for Modify attendence of a specific student at a paricular date                          \n";
        cout<<"3.for check student having Maximum attendence                                              \n";
        cout<<"4.for check student having minimum attendence                                              \n";
        cout<<"5.for check Attendence of student at particular date                                       \n";
        cout<<"6.for display Roll number of all students having Attendence less than or greater to a value\n";
        cout<<"-------------------------------------------------------------------------------------------\n";
        cout<<"-------------------------------------------------------------------------------------------\n";
        //cout<<""
        cin>>value;
        switch(value){
            case 1:
                cout<<"\n enter date .  please enter date in ddmmyyyy format :\n";
                cin>>date;
                for(i=1;i<=n;i++){
                cout<<"Roll no "<< i <<" is present ? if yes enter y otherwise enter n \n";
                cin>>val;
                s[i].data[date]= (val[0]=='y'||val[0]=='Y')?1:0;
                    s[i].sum(s[i].data[date]);
                }
                cout<<"Attendence Done !\n";
                break;
            case 2:
                cout<<"\n enter the roll number of student ";
                cin>>roll_no;
                cout<<"\n enter date .  please enter date in ddmmyyyy format :";
                cin>>date;
                if((roll_no>=1 && roll_no<=n)&&(s[roll_no].data.find(date)!=s[roll_no].data.end())){
                cout<<"\n enter your choice 'A' for absent and 'p' for present \n";
                cin>>val;
                s[roll_no].data[date]= (val[0]=='P'||val[0]=='p')?1:0;
                s[roll_no].sum(s[roll_no].data[date]);
                
                cout<<"Attendence changed Sucessfully !\n";
                }
                else{
                cout<<" please enter correct roll number or next time \n";
                }
                break;
            case 3:
                  max_attendence(s,n);
                  break;
            case 4:
                  min_attendence(s,n);
                  break;
            
            case 5:
                cout<<"enter roll number of student \n";
                cin>>roll_no;
                cout<<"\n enter date .  please enter date in ddmmyyyy format :";
                cin>>date;
                if((roll_no>=1 && roll_no<=n)&&(s[roll_no].data.find(date)!=s[roll_no].data.end())){
                    cout<<" Roll number "<<roll_no<<" Was ";s[roll_no].get_attendence(date);
                    
                }
                else{
                cout<<" please enter correct roll number or date next time \n";
                }
                break;
            case 6:
                cout<<"enter that value :\n";
                cin>>min;
                display(s,min);
                break;
            
            default:
                cout<<" please enter correct choice next time \n";
                
        }
                cout<<" do you want to Quit ? if yes enter y otherwise enter n \n";
                cin>>quit;
        
    }while(quit!='y' && quit!='Y');
    
    return 0;
}
