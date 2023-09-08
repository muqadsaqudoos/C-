#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	char ch;
	cout<<("Enter a character:");
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		cout<<("Vowel\n");
	else
		cout<<("Consonant\n");
	system("pause");
	return 0;
}
