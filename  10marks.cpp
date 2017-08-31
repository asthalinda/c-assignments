#include<iostream>
using namespace std;
int main()
{
int s1,s2,s3,s4,s5;
float total,avg,percentage;
cout<<"mark for s1";
cin>>s1;
cout<<"mark for s2";
cin>>s2;
cout<<"mark for s3";
cin>>s3;
cout<<"mark for s4";
cin>>s4;
cout<<"mark for s5";
cin>>s5;
total=s1+s2+s3+s4+s5;
avg=total/5;
percentage=total/500*100;
cout<<"total="<<total<<endl;
cout<<"avg="<<avg<<endl;
cout<<"percentage="<<percentage<<endl;
return 0;
}

