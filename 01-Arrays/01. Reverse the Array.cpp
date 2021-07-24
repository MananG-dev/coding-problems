#include <iostream>
#include <algorithm>
using namespace std;

//1. Given an array, the task is to reverse the array

void reverse_array(int arr[], int n)    {
    for(int i=0;i<n/2;i++)  {
        //-> AN INBUILT FUNCTION IN C++ TO SWAP THE ELEMENTS...
        swap(arr[i], arr[n-i-1]);
        /*
            int temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-1-i] = temp;
        */
    }
    return;
}

int main()  {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
    }

    reverse_array(arr, n);
    /*
    -> AN INBUILT FUNCTION IN C++ TO REVERSE THE ARRAY...
    reverse(arr, arr+n);
    */

    for(int i=0;i<n;i++)    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
