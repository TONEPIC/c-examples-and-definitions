#include <iostream>
using namespace std;
int main(){

int i=1, j=2, x=1, y=2;

i = j++;
x = ++y;

cout << i << endl;
cout << x << endl;

string response;
do
{
	cout<< "Enter" << endl << "More" << endl << "Quit" << endl;
	cin >> response;
}while(response != "Quit");

cout << (i>j?i:j)<<"is greater." << endl;
}
