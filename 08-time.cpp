#include <iostream>
#include <time.h>
using namespace std;

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    double Diff;
    time_t Time1, Time2;

    Time1=time(NULL);
    //cout<<Time1<<endl;


    //Bubble Sort
    int arr[] = {5, 2, 9, 1, 5, 6, 4, 4, 3, 6, 1, 2, 3, 5, 1, 5, 1, 5, 2, 6, 8, 5, 3, 1, 6, 2, 1, 5, 5, 1, 5, 7, 3};
    //cout<<sizeof(arr[0])<<endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    Time2=time(NULL);
    //cout<<Time2<<endl;
    Diff=difftime(Time2,Time1);

    cout<<endl<<"el arreglo tardo: "<<Diff<<"s"<<endl;
    return 0;
}