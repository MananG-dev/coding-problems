class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> a(nums.size());
        int s=0, e=nums.size()-1;

        for(int i=0;i<nums.size();i++)  {
            if(nums[i]%2!=0)    {
                a[e] = nums[i];
                e--;
            }
            else    {
                a[s] = nums[i];
                s++;
            }
        }

        return a;
    }
};