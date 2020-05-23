#include <iomanip>
#include <iostream>

using namespace std;
void PassByValue(int num);
void PassByReference(int &numb);

class Person
{
public:

string name;
int age;
float heigh;
float weight;

void ModifyPerson(Person PersonX);

};


void Person::ModifyPerson(Person PersonX)
{
 name = "Toni";
 cout << name << endl;
}


int main()
{

int num1, num2=0;

int &PNum = num2;

double *pDouble = new double;

Person Person1;
Person1.name = "Antonio";
Person1.age = 40;
Person1.heigh = 191.02;
Person1.weight = 72.40;

num1 = 3;

PNum = 5;

*pDouble = 5.9;

PassByValue(num1);
cout << "the new value of num1 is " << num1 << endl;

PassByReference(PNum);
cout << "the value of PNum is " << PNum << endl;

PassByValue(&PNum);
cout << "the new value of PNum is " << PNum << endl;

cout << *pDouble << endl;
 
delete pDouble;

cout << *pDouble << endl;

// working with objetcs and class

cout << "name "<< Person1.name << "age " << Person1.age <<"heigh " << Person1.heigh << "Weight " << Person1.weight << endl;

Person1.ModifyPerson(Person1);

cout << "name "<< Person1.name << "age " << Person1.age <<"heigh " << Person1.heigh << "Weight " << Person1.weight << endl;

return 0;
}

void PassByValue ( int num){
cout << "We're in PassByValue function" << endl;
num++;
cout << "output of new value" << endl;
cout << num << endl;
}

void PassByReference (int &numb){
cout<<"we're in PassByReference"<<endl;
numb=50;
cout<<"the new value of num is "<<numb<<endl;
} 

void ModifyPerson (int age){
 
}
