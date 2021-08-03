#include<iostream>
using namespace std;

//01. Count the number of set bits of a given number....... By using Bit Masking..

int main()  {
    int n;
    cout<<"Enter the number: "; cin>>n;

    int ans=0;
    while(n>0)  {
        if(n&1) {
            ans++;
        }
        n=n>>1;
    }

    cout<<"No. of set bits: "<<ans<<endl;
    return 0;
}