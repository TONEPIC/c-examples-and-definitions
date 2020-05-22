#include <iostream>
#include <iomanip>
using namespace std;
int pow(int base, unsigned int exp);
float divi(float opposite, float hypotenuse);
int main(){
	int Function=1;
	int base1=1;
	unsigned int exp1=1;
	float opposite1=1.00;
	float hypotenuse1=1.00;

cout<<"Function 1 Enter 1 Enter or Function 2 Enter 2 Enter"<<endl;
cin>>Function;
	if(Function==1){
		cout<<"Enter base"<<endl;
		cin>>base1;
		cout<<"Enter exponent"<<endl;
		cin>>exp1;
		if(exp1 == 0){
//			cout<<"Return 1"<<endl;
			return 1;
			
		}else{
				int result1 = pow(base1,exp1);
//				cout << result1 << endl; 
				return result1;
		}
		}else if(Function==2){
				cout<<"Enter Opposite length"<<endl;
				cin>>opposite1;
				cout<<"Enter Hypotenuse length"<<endl;
				cin>>hypotenuse1;
				float result2 = divi(opposite1,hypotenuse1);			
				cout<<setprecision(16);
				cout<<result2<<endl;
				return result2;
		}else{
				return 0;
		}

}
float divi(float opposite, float hypotenuse)
{
	float sin=(opposite/hypotenuse);
	return sin;
}
int pow( int base, unsigned int exp)
{
	int acc = base;
	for(int i = 0; i < (exp-1); i++)
	{
		acc=acc*base;
	}
	return acc;
} 
