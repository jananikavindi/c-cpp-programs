#include<iostream>
using namespace std;
int main(){
float basicsalary,hra,da,grosssalary;
cout<<" enter the basic salary:";
cin>>basicsalary;
if (basicsalary <= 10,000)
{
hra=basicsalary*0.20;
da=basicsalary*0.80;
}
else if (basicsalary<=20,000)
{
hra=basicsalary*0.25;
da=basicsalary*0.90;
}
else
{

hra=basicsalary*0.30;
da=basicsalary*0.95;
}
grosssalary=basicsalary+hra+da;
cout<<" basic salary=" <<basicsalary <<endl;
cout<<"hra="<<hra <<endl;
cout<<"da="<<da<<endl;
cout<<"gross salary="<<grosssalary<<endl;

return 0;
}

