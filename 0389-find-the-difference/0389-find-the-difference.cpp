class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++)   {
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++)   {
            if(mp.find(t[i])!=mp.end() && mp[t[i]]!=0)  {
                mp[t[i]]--;
            }
            else    {return t[i];}
        }
        return '-1';
    }
};