#include<iostream>
using namespace std;
int main()
{
int d;
float y,w,dl;
cout<<"enter days";
cin>>d;
y=d/365;
w=d/7;
dl=d%365;
cout<<"years="<<y<<endl;
cout<<"weeks="<<w<<endl;
cout<<"days left="<<dl<<endl;
return 0;
}

