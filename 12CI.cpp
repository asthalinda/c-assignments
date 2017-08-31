#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double P,T,R;
double c,d, CI;
cout<<"enter P";
cin>>P;
cout<<"enter T";
cin>>T;
cout<<"enter R";
cin>>R;
d=1.+R/100;
c=P*pow(d,T);
CI=c-P;
cout<<"CI="<<CI;
return 0;
}

