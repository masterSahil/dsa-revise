// large element
#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter the Size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Please Enter the Array Elements: \n";
    for(int i=0; i<n; i++)
    {
        cout << "Array [" << i << "]: ";
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

    cout << "Max Element is " << max;
}