#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,N,d,d2,i,j,count=0;
  double sum=0.0,y;
    cin>>n;
    N=n;
         while(n){
            d=n%10;
            sum=sum+d*d;
            n=n/10;
        }
        cout<<sum<<endl;
      y=float(sqrt(sum));
      cout<<y<<endl;
       d2=(y*10);
        if(d2%10==0){
            count++;
        }
        sum=0;

    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
