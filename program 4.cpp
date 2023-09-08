#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	string user_name1="MuqadsaQudoos", password1="Muqadsa3424";
	string user_name2, password2;
	cout<<("Enter username:");
	cin>>user_name2;
	cout<<("Enter Password:");
	cin>>password2;
	if(user_name1 == user_name2 && password1 == password2)
		cout<<("you are logged in\n");
	else
		cout<<("you are not logged in\n");
	system("pause");
	return 0;
}
