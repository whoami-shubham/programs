#include<iostream>
#include<cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d){
    int max;
    max=a>b?a>c?(a>d?a:d):(c>d?c:d):b>c?(b>d?b:d):(c>d?c:d);
    return max;
}
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a,b,c,d);
    cout<<ans<<endl;
    return 0;
}
