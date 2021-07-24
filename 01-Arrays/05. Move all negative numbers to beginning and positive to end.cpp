#include <iostream>
using namespace std;

//5. Move all negative numbers to beginning and positive to end

void function(int arr[], int n) {
    int j=0;
    for(int i=0;i<n;i++)    {
        if(arr[i]<0)    {
            swap(arr[i], arr[j]);
            j++;
        }
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

    function(arr, n);
    for(int i=0;i<n;i++)    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
