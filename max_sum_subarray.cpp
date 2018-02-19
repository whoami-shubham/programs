#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int maxSubArray(vector<int>& nums) {
        if(nums.size()>0){
            int i,j,k,l,sum=0,max=0,m=1;
            cout<<'\n';
              for(k=0,l=nums.size()-1;l>=k;l=l-1){
            for(i=l;i>=k;i--){
                sum=sum+nums[i];
            }
            cout<<sum<<'\t';
                   if(m==1){
                    max=sum;
                    m=0;
                }
                if(sum>max){
                    max=sum;
                }
                sum=0;
                if(l==k){
                   k=k+1;
                   l=nums.size();
               }
            }
            cout<<'\n';
            return max;
        }
       return 0;

    }
   int main(){
     vector<int> v;
     int n,e,i,j;
     cout << "enter size of vector : " << '\n';
     cin>>n;
     cout<<"enter "<<n<<" elements :";
     for(i=0;i<n;i++){
       cin>>e;
       v.push_back(e);
     }
     cout<<maxSubArray(v);
     //cout<<j<<'\n';
     return 0;

   }
