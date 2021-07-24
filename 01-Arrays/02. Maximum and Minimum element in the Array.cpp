#include <iostream>
#include <algorithm>
using namespace std;

//2. Maximum and minimum of an array using minimum number of comparisons

int main()  {
    int n;
    cin>>n;

    int arr[n];
    int maximumElement = INT_MIN, minimumElement = INT_MAX;
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
        maximumElement = max(maximumElement, arr[i]);
        minimumElement = min(minimumElement, arr[i]);
    }

    cout<<"The Maximum Element in the Array: "<<maximumElement<<endl;
    cout<<"The Minimum Element in the Array: "<<minimumElement<<endl;

    return 0;
}
