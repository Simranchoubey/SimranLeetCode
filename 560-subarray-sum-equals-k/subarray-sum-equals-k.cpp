class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        
        for (int i = 0; i< n;i++) {
            int sum = 0;
            for (int j = i; j< n;j++) {
                sum += nums[j];
                if (sum == k) {
                    count++;
                }
            }
        } 
        return count;
    }
};

// nums = [1,2,3], k = 3
// [1,2]=3
// [3]=3. 
// total ans = 1+1=2