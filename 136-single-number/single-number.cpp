class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for(int i=0;i<nums.size();i++){
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};
//         0 1 2
// nums = [2,2,1]

// i=0, xor=0^2=2
// i=1, xor=2^2=0
// i=2, xor=0^1=1
// return xor=1
