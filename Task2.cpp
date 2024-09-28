#include<iostream>
using namespace std;
void reverse(string input);
int main()
{
	string input;
	cout<<"Enter true or false: ";
	cin>>input;
	reverse(input);
}
void reverse(string input)
{
	if(input == "true" )
	{
		cout<<"false"<<endl;
	}
	else
	{
		cout<<"true"<<endl;
	}
}
