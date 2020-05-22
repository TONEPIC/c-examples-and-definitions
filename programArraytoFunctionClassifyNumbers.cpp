#include <cstdlib> //for rand
#include <iostream>
#include <iomanip>
using namespace std;

const int LISTLEN = 10;

void BubbleSort (int SortArray[], int NumElements);
int avg (int SumArray[], int NumElements);
int main()
{
int List[LISTLEN];
int SumAvg;
/*CREATE lIST */
for(int i=0; i< LISTLEN; i++) List[i]=rand()%LISTLEN;

cout<<"UNSORTED LIST: ";
for (int i=0; i<LISTLEN; i++) cout << setw(2) << List[i];
cout <<endl;

BubbleSort(List, LISTLEN);

cout << "\n SORTED LIST: ";
for (int i=0; i<LISTLEN; i++) cout << setw(3) << List[i];
cout<<endl;

SumAvg = avg(List, LISTLEN);
cout<< SumAvg<< endl;

system("pause");
} /*end main*/
int avg(int SumArray[], int NumElements)
{
    int Sumator=0, Average=0;
    for (int i=0; i<NumElements; i++)
    {
            Sumator = Sumator + SumArray[i];
    } 
    Average = Sumator / NumElements;

    return Average;
}
void BubbleSort(int SortArray[], int NumElements)
{
    int i,j,Temp;
    for(i=NumElements-1; i >= 0; i--)
    {
        for (j=0; j<i; j++)
        {
            if(SortArray[j]>SortArray[j+1])
            {
                    Temp=SortArray[j];
                    SortArray[j]=SortArray[j+1];
                    SortArray[j+1]=Temp;
            } // end if
        } // end for j
    } // end for i
}
