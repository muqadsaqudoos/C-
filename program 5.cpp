#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	float salary,tax_deduction;
	cout<<"Enter your salary:";
	cin>>salary;
	if(salary>100000)
		tax_deduction=(10.0/100)*salary;
	else
		tax_deduction=((5.0/100)*salary);
	cout<<"net ssalary:"<<salary-tax_deduction<<"\n";
	system("pause");
	return 0;
}
	
