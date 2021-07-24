#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallestElement(int arr[], int n, int k)    {
    sort(arr, arr+n);
    return arr[k-1];
}
int main()  {
    int n, k;
    cout<<"Enter the Size of the Array: ";
    cin>>n;
    cout<<"Enter the kth element: ";
    cin>>k;
    cout<<"Enter the elements in array: ";
    int arr[n];
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
    }

    cout<<kthSmallestElement(arr, n, k)<<endl;
    return 0;
}
