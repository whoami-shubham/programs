#include<vector>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
//void display(vector<student> S,int n);
class student{
    public:
    int Roll_no;
    int Attendence_sum;
    map<string,int>data;
    
    void set_attendence(string date,int atten);
    void sum(int n);
    void get_attendence(string date);
     void n_attendence();
    student(){};
    student(int Roll_no);
};
//void max_attendence(student *s);
//void min_attendence(student *s);
student::student(int Roll_no){
    this->Roll_no=Roll_no;
    Attendence_sum=0;
}
void student::set_attendence(string date,int atten){
    data[date]=atten;
}
    void student::sum(int n){
        
            Attendence_sum+=n;
        
        
    }
   void max_attendence(vector<student> S,int n){
        map<int,int>A;
       vector<int>v;
       for(int i=1;i<=n;i++){
           A[i]=S[i].Attendence_sum;
           v.push_back(S[i].Attendence_sum);
       }
       sort(v.begin(),v.end());
       map<int,int>::iterator it=A.begin();
       cout<<"student having maximum Attendence :\n";
       for(;it!=A.end();it++){
           if(it->second==v[v.size()-1]){
           cout<<" Roll_no "<<it->first<<" has "<<it->second<<" Attendence\n";
           }
       }
    }
   void min_attendence(vector<student> S,int n){
        map<int,int>A;
       vector<int>v;
       for(int i=1;i<=n;i++){
           A[i]=S[i].Attendence_sum;
           v.push_back(S[i].Attendence_sum);
       }
       sort(v.begin(),v.end());
       map<int,int>::iterator it=A.begin();
       cout<<"student having minimum Attendence :\n";
       for(;it!=A.end();it++){
           if(it->second==v[0]){
           cout<<" Roll_no "<<it->first<<" has "<<it->second<<" Attendence\n";
           }
           
       }
       
   } 
     void student::n_attendence(){}
    void  student::get_attendence(string date){
        if(data[date]==1){
            cout<<"Present\n";
        }
        else{
            cout<<"Absent\n";
        }
    }
void display(vector<student> S,int n){
    cout<<"\n";
    for(int i=1;i<S.size();i++){
        if(S[i].Attendence_sum>=n){
            cout<<"Roll_No : "<<i<<"  have  " <<S[i].Attendence_sum<<"  Attendence\n";
        }
    }
}

