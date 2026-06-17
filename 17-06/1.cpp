#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the number of Array size: ";
    cin >> n;
    
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Array[" << i << "]: " << " : ";
        cin >> arr[i];
    }

    cout << "\nArray: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Array[" << i << "]: " << arr[i] << endl;
    }
}