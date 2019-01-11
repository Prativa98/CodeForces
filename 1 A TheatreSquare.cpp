#include<iostream>
using namespace std;
int main(){
long long int m,n,a,c,d;
cin>>n>>m>>a;
if(a>m&&a>n){
    cout<<"1";
}
else{
if(n%a!=0)
c=(n/a)+1;
else
c=(n/a);
if(m%a!=0)
d=(m/a)+1;
else
d=(m/a);
long long sum=c*d;
cout<<sum<<endl;
}
return 0;
}
