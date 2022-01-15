/*
    int isPalindrome(string S)
	{
	    // Your code goes here
	    int a = 0, b = S.size()-1;
	    int c = 0;
	    while(a<=b) {
	        if(S[a] == S[b])    {
	            a++;
	            b--;
	            c = 1;
	        }
	        else    {
	            c = 0;
	            break;
	        }
	    }
	    return c;
	}
*/

#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string S){
	 // Your code goes here
    int a = 0, b = S.size()-1;
    int c = 0;
    while(a<=b) {
        if(S[a] == S[b])    {
            a++;
            b--;
            c = 1;
        }
        else    {
            c = 0;
            break;
        }
    }
    return c;
}

int main()  {
    string s;
    cout<<"Enter: ";
    cin>>s;

    cout<<isPalindrome(s)<<endl;
}