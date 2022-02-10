#include<iostream>
using namespace std;
int main()
{
	
	int days;
	int fine;
	cout<< "Enter days you are late: " ;
	cin>> days;
	if (days<=5){
	fine= 50 ;
	cout<<fine;
	}
	else if(days>5 && days<11)
	{
	fine=1.0;
	cout<<fine;
	}
	else if(days>10 && days<31){
	fine=5.0;
	cout<<fine;
	}
	else if(days>30){
		cout<<"Your library membership has been cancelled";
	}
	return 0;
}
