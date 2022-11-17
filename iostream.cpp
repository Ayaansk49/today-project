#include<iostream>
using namespace std;
int main()
{
	int basic, net_salary, alw;
	
	cout<<"enter the basic salary:\n";
	cin>>basic;
	
	alw =(120*basic)/100;
	if(basic>15000)
	{
		net_salary = basic + alw;
	}
	else
	{
		net_salary = (basic+7000);
	}
	
	cout<<"the total salary is"<<net_salary;
	
	return 0;
}
