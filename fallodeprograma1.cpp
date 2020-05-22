#include <iostream>
using namespace std;
int user_base = 0;
int user_e = 0;
int user_opp = 0;
int user_hyp = 0;
int pow(int base, int e) {
int result = 1;
if (e < 0)
return 1;
for (int i = 1; i <= e; i++)
result *= base;
return result;
}
int sine(int opp, int hyp) {
int sin=0;
sin = opp / hyp;
return sin;
}
int main()
{
cout << "Introduce base: " << endl;
cin >> user_base;
cout << "Introduce exponent: " << endl;
cin >> user_e;
cout<<"The pow result is: "<<pow(user_base,user_e)<<endl;
cout << "Introduce opposite: " << endl;
cin >> user_opp;
cout << "Introduce hypotenuse: " << endl;
cin >> user_hyp;
cout << "The sine result is: " << sine(user_opp, user_hyp)<<endl;

}