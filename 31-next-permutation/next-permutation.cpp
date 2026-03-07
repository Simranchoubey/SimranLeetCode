// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
        
//         int i = n-1;
//         for(; i>0; i--) {
//             if(nums[i] > nums[i-1]) {
//                 break;
//             }
//         }
//         if(i != 0) {
//             int index = i;
//             for(int j = n-1; j>=i; j--) {
//                 if(nums[j] > nums[i-1]) {
//                     index = j;
//                     break;
//                 }
//             }
//             swap(nums[i-1], nums[index]);
//         }
//         reverse(nums.begin()+i, nums.end());
//     }
// };
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        int n = nums.size();

        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        if(index == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i = n-1; i > index; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1, nums.end());
    }
};