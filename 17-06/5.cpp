#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter Size of Array:";
    cin >> n;

    int array[n];
    for(int i=0; i<n; i++)
    {
        cout << "Array[" << i <<"]: ";
        cin >> n;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (array[i] == array[j])
            {
                cout << "Array same elements: " << array[i] << endl;
            }
        }
    }
}