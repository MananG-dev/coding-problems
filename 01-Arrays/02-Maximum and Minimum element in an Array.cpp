#include <iostream>
#include <climits>
using namespace std;

//2. Maximum and minimum of an array using minimum number of comparisons

pair<int, int> maxAndminElement(int arr[], int n)   {
    int maxele=INT_MIN, minele=INT_MAX;
    for(int i=0;i<n;i++)    {
        maxele = max(maxele, arr[i]);
        minele = min(minele, arr[i]);
    }

    return make_pair(maxele, minele);
}
int main()  {
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++)    {
        cin>>arr[i];
    }

    pair<int, int> p = maxAndminElement(arr,n);
    cout<<"Maximum: "<<p.first<<" and Minimum: "<<p.second<<endl;

    return 0;
}