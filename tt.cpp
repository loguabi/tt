#include<iostream>
using namespace std;
long int t=0;
int n(long int s)
{
if(s<3)
return s;
if(s<5&&s>=3)
return n(s%3)+s/3;
if(s>=5)
return n(s%5)+s/5;
}
int main(void)
{
long int s;
cin>>s;
cout<<n(s)<<endl;
return 0;
}
