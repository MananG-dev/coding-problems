// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
       // vector<int> v;
        int x=0;
        for(int i=0;i<nums.size();i++)  {
            x=(x^nums[i]);
        }
        
        int temp=x, position=0;
        while((temp&1)==0)   {
            temp=temp>>1;
            position++;
        }
        
        int mask=(1<<position);
        int a=0, b=0;
        for(int i=0;i<nums.size();i++) {
            if((mask&nums[i])>0)  {
                a=a^nums[i];
            }
        }
        b=x^a;
        
        if(a<b) {return{a,b};}
        else {return{b, a};}
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends