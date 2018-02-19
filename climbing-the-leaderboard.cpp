#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
     long n,pos=1,j=0,i,alice_i,scores_i,m;
    cin >> n;
    vector<long long> scores(n);
    for( scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
    }
    sort(scores.begin(),scores.end());
    cin >> m;
    vector<long long> alice(m);
    for( alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    vector<long long>score;
    score.push_back(scores[0]);
    for( i=1;i<n;i++){
        if(scores[i]!=score[j]){
            score.push_back(scores[i]);
            j++;
        }

    }
    reverse(score.begin(), score.end());
    vector<long long>a;
    for(i=0;i<alice.size();i++){
        for(j=0;j<score.size();j++){
            if(score[j]>alice[i]){
                 if (j==score.size()-1){
                    pos=j+2;
                    break;
                }
                pos=j+1;
            }
           else if(score[j]<alice[i]){
                   pos=j+1;
                   break;
           }
            else {
                pos=j+1;
                break;
            }

        }
        a.push_back(pos);
        pos=0;
    }
    for(i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

    // your code goes here
    return 0;
}
