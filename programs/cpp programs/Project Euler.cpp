#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,N,d,d2,i,j,count=0;
  double sum=0.0,y,x;
    cin>>n;
    N=n;
    for(i=1;i<=N;i++){
            j=i;
        while(j){
            d=j%10;
            sum=sum+d*d;
            j=j/10;
        }
        cout<<sum<<endl;
      y=float(sqrt(sum));
    cout<<y<<endl;
       d2=(y*100);
        if(d2%10==0&&d2%100==0){
            count++;
        }
        sum=0;
    }
    cout<<"total = "<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
