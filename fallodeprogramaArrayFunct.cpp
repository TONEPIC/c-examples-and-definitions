#include <iostream>
using namespace std;
float user_array[5]{ 2, 4, 6, 91, 10};

float avg(float avg_array[5]) {
int i;
float total=0;
float avg = 0;
for (i = 0; i < 5; i++)
total = total + avg_array[i];
avg = total / 5;
return avg;
}
int main() {
cout << "The average is: " << avg(user_array);
}