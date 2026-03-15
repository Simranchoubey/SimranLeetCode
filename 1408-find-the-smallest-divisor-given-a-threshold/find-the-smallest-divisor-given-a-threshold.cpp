class Solution {

public:
  int check(vector<int>& nums, int divide){
        int sum=0;
        for (int i : nums){
            sum+= (i+divide-1)/divide;
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1; 
        int high = *max_element(nums.begin(),nums.end());
        int mid=0;
        int ans=0;
        while(high>low){
            mid = low + (high - low)/2;

            if(check(nums,mid)<=threshold){
                high=mid;
            }
            else{low = mid+1;}
        }
    return low;
    }
};