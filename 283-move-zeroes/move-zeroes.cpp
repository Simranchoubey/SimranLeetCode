class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int change = 0;
        for(int i=0; i<nums.size(); i++){ 
            if(nums[i]!=0){ 
                int temp = nums[i];
                nums[i] = nums[change];
                nums[change] = temp;
                change++;
            }
        }
    }
};
// nums = [0,1,0,3,12]