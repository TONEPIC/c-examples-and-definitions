#include <iostream>
using namespace std;
int main(){

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
//system("pause")

}

