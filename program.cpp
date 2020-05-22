#include <iostream>
using namespace std;
int main(){
/*
char variable=0;
cin>>variable;

switch(variable)
{
case 'y' : cout << "You choose" <<endl;
break;
case 'Y' : cout << "You choose"<<endl;
break;
default : cout<< "tampoco no es eso"<<endl;
break;
}
//system("pause");

*/
int base = 0;
int exp = 0;
int result = 0;
	cout<<"Enter base"<<endl;
	cin>>base;
	cout<<"Enter exponent"<<endl;
	cin>>exp;
	result=base;
	for(int i = 0; i < (exp-1); i++)
	{
	result=result*base;
	}
	cout << result  << endl;





/*
int i=1, j=2, x=1, y=2;

i = j++;
x = ++y;
cout<<i<<endl;
cout<<x<<endl;

string response;
do
{
	cout<< "Enter" << endl << "More" << endl << "Quit" << endl;
	cin >> response;
}while(response != "Quit");
*/



//		int Marcos[10]={1,0,7,3,0,0,0,0,0,7};
//		enum Month {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
//		double dayy = sizeof (Day);
//		cout << dayy;
//union numericUnion
//{
//int intValue;
//long longValue;
//double doubleValue;
//};
//numericUnion myUnion;
//myUnion.intValue = 3;
//cout << myUnion.intValue << endl;
//myUnion.doubleValue = 4.5;
//cout << myUnion.doubleValue << endl;
//cout << myUnion.intValue;
//cout << endl;
}

