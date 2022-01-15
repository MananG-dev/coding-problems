/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++)   {
            swap(s[i], s[s.size()-1-i]);
        }
    }
};
*/

#include <iostream>
#include <string>
using namespace std;

string reverse(string s) {
    string str;
    for(int i=s.size()-1;i>=0;i--)  {
        /*
            str = str+s[i];

            DO NOT USE THIS WAY;
            The reasons are:
                1. Addition of char(s[i]) is not a good approach.
                2. Time complexity increases.
        */

       str.push_back(s[i]);
    }

    return str;
}
int main()  {
    string s;
    cout<<"Enter: ";
    getline(cin, s);

    cout<<"The reverse order: "<<reverse(s)<<endl;
}