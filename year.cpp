#include<iostream>
using namespace std;
int main(){
	int year;
	int seconds=31556952;
	int minuts=525949;
	
	cout<<"enter year or years :";
	cin>>year;
	
	int sec=year*seconds;
	
	cout<<"in enterd year is :"<<sec<<"sec"<<endl;
	
	int	min=year*minuts;
	
	cout<<"in enterd year is :"<<min<<"mint";
	
	return 0;
}
