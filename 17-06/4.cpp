#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Array [" << i <<"]: ";
        cin >> arr[i];
    }

    float sum = 0, average = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];        
    }
    average = sum / n;

    cout << "Sum of Array is: " << sum << endl;
    cout << "Average of Array is: " << average;
}