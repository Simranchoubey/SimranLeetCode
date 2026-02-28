class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

// nums = [1,2,3,4,5,6,7], k = 3
// k = k % n;--3%7=3. --> k=3
// [7 6 5 4 3 2 1]
// [5 6 7 4 3 2 1]
// [5 6 7 1 2 3 4]--> final answer


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %= n; //1
//         for (int i = 0; i < k; i++) {
//             int last = nums[n - 1];
//             for (int j = n - 1; j > 0; j--) {
//                 nums[j] = nums[j - 1];
//             }
//             nums[0] = last;
//         }
//     }
// };
//         0 1 2 3 4 5 6
// nums = [1,2,3,4,5,6,7], k = 3,n=7
// k%n = n-----3%7=1, i=0
// last=nums[6]=7
// j=6
// nums[j]=6
// 1=last//nums[0]=7


// i=1,last=7,j=5
// nums[j]=nums[4]=5

// i=2,last=7,j=4
// nums[j]=nums[3]=4

