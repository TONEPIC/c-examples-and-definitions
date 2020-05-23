#include <iostream>
#include <iomanip>


using namespace std;

void passByValue(int);
void passByRef(int &num1);
int main()
{

	int num =3; // a simple variable holding value 3
	int *pNum = &num;// a pointer holdingthe address of num
	int &refNum = num; // 

	cout << pNum << endl;
	
	const int* pTum = &num;
	cout << pNum << endl;

	cout << *pNum << endl;
	
	*pNum = 45;
	
	cout << *pNum << endl;

	cout << num << endl;

	cout << &num << endl;


	int &refNum = num;
	cout<<refNum<<endl;
	refNum++;
	cout<<"num contains"<< num << endl;
	cout<< "refNum contains"<< refNum<<endl;
	cout<<"refNum is located at"<<&refNum<<"and num is located at"<<&num<<endl;

	cout << "num contains " << num << endl;
	cout << "refNum contains "<< refNum << endl;
	refNum++;
	cout << "num contains " << num << endl;
	cout << "refNum contains " << refNum << endl;
	num++;
	cout << "num contains "<< num << endl; 
	cout << "refNum contains" << refNum << endl;


	//passByValue(num);
	passByRef(num);

	cout << "Back in main and the value of num is "<< num << endl;

	return 0;

}

void passByValue (int num1)
{

cout << "In passByValue()"<< endl;
cout << "Value of num1 is " << num1 << endl;

// modify num1 won't impact num
num1++;

cout <<"num1 is now" << num1 << endl;
}

void passByRef(int &num1)
{

cout << "In passByRef()" << endl;
cout << "Value of num1 is "<< num1<<endl;

num1++;

cout << "num1 is now "<< num1 <<endl;
}
