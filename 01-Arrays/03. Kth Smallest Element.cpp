#include <iostream>
#include <algorithm>
using namespace std;

//03. Task is to find the Kth smallest element...

int kthSmallestElement(int arr[], int n, int k)    {
    //Step-1: Sort the array: 
    //An inbuilt function for sorting can also be used which is efficient in time complexity...... sort(arr, arr+n);
    for(int i=0;i<n-1;i++)  {
        for(int j=0;j<i;j++)    {
            if(arr[j]>arr[i])   {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[k-1];
}
int main()  {
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the position key: ";
    cin>>k;

    cout<<"The "<<k<<" smallest element is: "<<kthSmallestElement(arr, n, k)<<endl;
    return 0;
}