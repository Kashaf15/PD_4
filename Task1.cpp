#include<iostream>
using namespace std;
void evaluation(int number_1, int number_2);
int main()
{
	int number_1, number_2;
	cout<<"Enter your 1st number: ";
	cin>>number_1;
	cout<<"Enter your 2nd number: ";
	cin>>number_2;
	evaluation(numb1, numb2);
}
void evaluation(int number_1, int number_2)
{
	if(number_1 == number_2)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}
