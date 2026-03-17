class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=1;i<=n;i++){
            j ^= i;    
        }
        for(int i=0;i<n;i++){
            j ^= nums[i];    
        }
        return j;
    }
};