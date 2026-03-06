class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        int longest = 1; 
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
        for (auto it : st) {
            if (st.find(it - 1) == st.end()) { // 1-1=0 not in set so enter if loop
// 1 exists in set, so this is not a sequence start, and the block is skipped.
                int cnt = 1; //1
                int x = it; //1 //100
                while (st.find(x + 1) != st.end()) { //3  4. 5
                    x = x + 1; //2 , 3, 4 no
                    cnt = cnt + 1; //2  , 3 , 4
                }
                longest = max(longest, cnt);// 1,4=4 // 4,1=4 
            }
        }
        return longest;
    }
};
//          0  1. 2. 3.4 5
// nums = [100,4,200,1,3,2]  longest=1
// st = {1,2,3,4,100,200}
//                   it

