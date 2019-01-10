/*Given an array of numbers nums, in which exactly two elements appear 
only once and all the other elements appear exactly twice. Find the two elements that appear only once.
Input:  [1,2,1,3,2,5]
Output: [3,5]
Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?

https://leetcode.com/problems/single-number-iii/
*/
//Explanation for custom input
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int s=0;
        vector < int > v(2,0);
        for(int i = 0 ; i < (int)nums.size() ; i++)
            s^=nums[i];         //Taking xor of all 3^5 remains
        int c=s&-s; //Set bit from right here value is here 1 ( if s=12 then c is 4)
        // If we get that set bit we can make sure that one of the numbers bit at that position is 0 and the other is 1
        for(int i = 0 ; i < (int)nums.size() ; i++)
        {
            if(nums[i]&c)   // If this turns to be true that is there exists any set bit it puts to if part else ,moves to else part
                v[0]^=nums[i];
            else
                v[1]^=nums[i];
        }
        return v; 
    }
   
};
// Also available in geeksforgeeks
