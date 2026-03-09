class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]) cnt++;
        }
        if(nums[n-1] > nums[0]) cnt++;
        return cnt <= 1;
    }
};
//          i
// [3,4,5,1,2]
// 3>4 
// 4>5
// 5>1 yes cnt =1
// 1>2
// 2>3 n0
// cnt =0t 1f  
// [2,1,3,4].    4 2 1
// 2>1 cnt=1
//  1>3
//  3>4
//  4>2  cnt =2 
//                 1. 0 
// 678912345
