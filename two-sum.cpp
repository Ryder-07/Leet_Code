//This is the solution to one of the leetcode problems (easy)
//https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count=0,i,j=0 ;
        vector<int> res(2);
        while(count!=1){
           int d=target-nums[j];
           res[0]=j;
        for( i=j+1;i<nums.size();i++){
             if(nums[i]==d){
                 count++;
                 res[1]=i;
                 break;
             }
        }
        j++;
        }
       return res;
    }
    
};
