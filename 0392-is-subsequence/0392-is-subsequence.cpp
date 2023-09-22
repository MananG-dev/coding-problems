class Solution {
public:
    bool isSubsequence(string t, string s) {
        int pt = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == t[pt])   {
                pt++;
            }
        }

        return pt==t.size();
    }
};