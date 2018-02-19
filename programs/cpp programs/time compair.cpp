#include <bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

string timeCompare(string t1, string t2){
    int hh1,hh2,mm1,mm2;
    string  shh1,shh2,smm1,smm2;
    string T1,T2,ans;
    T1=t1.assign(t1,5,7);
    T2=t2.assign(t2,5,7);
    shh1=t1.assign(t1,0,2);
     shh2=t2.assign(t2,0,2);
     smm1=t1.assign(t1,3,5);
     smm2=t2.assign(t2,3,5);
      hh1=stoi(shh1);
     hh2=stoi(shh2);
     mm1=stoi(smm1);
     mm2=stoi(smm2);
     if (T1== T2){
        if (hh1>hh2){
            ans="Second";
            return ans;
        }
         else if  (hh1==hh2){
                 if (mm1>mm2){
                     ans="Second";
                     return ans;
            }
                       else {
                           ans="First";
                        return ans;
            }
         }
     }
        else if (T1=="AM"&& T2=="PM"){
            ans="First";
            return ans;
        }
            else {
                ans="Second";
                return ans;
        }
}

int main() {
    int q,a0;
    cin >> q;
    for( a0 = 0; a0 < q; a0++){
        string t1;
        string t2;
        getline(cin,t1);
        getline(cin,t2);
        string result = timeCompare(t1, t2);
        cout << result << endl;
    }
    return 0;
}
