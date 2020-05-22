#include <cstdlib> //for rand
#include <iostream>
#include <iomanip>
using namespace std;

const int LISTLEN = 10;

float avg (int SumArray[], int NumElements);
int main()
{
int List[LISTLEN];
float SumAvg;
/*CREATE lIST */
for(int i=0; i< LISTLEN; i++) List[i]=rand()%LISTLEN;

cout<<"UNSORTED LIST: ";
for (int i=0; i<LISTLEN; i++) cout << setw(2) << List[i];
cout <<endl;

SumAvg = avg(List, LISTLEN);
cout<< SumAvg<< endl;
} /*end main*/

float avg(int SumArray[], int NumElements)
{
    float Sumator=0;
    float Average=0;
    for (int i=0; i<NumElements; i++)
    {
            Sumator = Sumator + SumArray[i];
    } 
    Average = Sumator / NumElements;

    return Average;
}
