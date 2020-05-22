#include <iostream>
using namespace std;
int main(){

		int Marcos[10]={1,0,7,3,0,0,0,0,0,7};
		enum Month {Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
		//double day = sizeof (day);
		//cout << day;
union numericUnion
{
int intValue;
long longValue;
double doubleValue;
};
numericUnion myUnion;
myUnion.intValue = 3;
cout << myUnion.intValue << endl;
myUnion.doubleValue = 4.5;
cout << myUnion.doubleValue << endl;
cout << myUnion.intValue;
cout << endl;
}

