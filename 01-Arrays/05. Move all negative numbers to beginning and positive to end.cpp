#include<iostream>
#include<algorithm>
using namespace std;

// 05. Move all negative numbers to beginning and positive to end with constant extra space

int main()  {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
    }

    int j=0;
    for(int i=0;i<n;i++)    {
        if(arr[i]<0)    {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0;i<n;i++)    {
        cout<<arr[i]<<" ";
    }

    return 0;
}