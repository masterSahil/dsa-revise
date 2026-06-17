// large and 2nd large
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Please Enter the Elements of Array: " << endl;
    for(int i=0; i<n; i++)
    {   
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i=0; i<n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int max2 = arr[0];
    for(int i=0; i<n; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
            cout << "arr: " << arr[i] << endl;
        }
    }

    cout << "Max :" << max << endl;
    cout << "Max2 :" << max2 << endl;
}