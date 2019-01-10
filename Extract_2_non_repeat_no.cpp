/*Given an array of numbers nums, in which exactly two elements appear 
only once and all the other elements appear exactly twice. Find the two elements that appear only once.
Input:  [1,2,1,3,2,5]
Output: [3,5]
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?

https://leetcode.com/problems/single-number-iii/
*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int s=0;
        vector < int > v(2,0);
        for(int i = 0 ; i < (int)nums.size() ; i++)
            s^=nums[i];
        int c=s&-s;
        for(int i = 0 ; i < (int)nums.size() ; i++)
        {
            if(nums[i]&c)
                v[0]^=nums[i];
            else
                v[1]^=nums[i];
        }
        return v; 
    }
   
};
