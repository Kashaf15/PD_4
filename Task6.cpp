#include<iostream>
using namespace std;
void longestDuration(int hour, int min);
int main()
{	
	int hour,min;
	cout<<"Enter the value in hr: ";
	cin>>hour;
	cout<<"Enter the value in min: ";
	cin>>min;
	longestDuration(hour, min);
}
void longestDuration(int hour, int min)
{
	int minToHr;
	minToHr=min/60;
	if(minToHr > hour)
		cout<<minToHr;
	else
		cout<<hour;
}