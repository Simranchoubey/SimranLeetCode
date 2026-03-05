class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                //skip duplicates
            while(j<k&&nums[j]==nums[j+1]) j++;
            while(j<k&&nums[k]==nums[k-1]) k--;
            j++;
            k--;
            }
            else if(sum<0){
                j++;
            }
            else { 
                k--;
            }
          }
        }
        return ans;
    }
};
//        nums = [-1,0,1,2,-1,-4]

//        [-4,-1,-1,0,1,2] j>k stop
//  -1,0,1=0

//        i=0 nums[0]=-4
//        j=-1
//        k=2   -4-1+2=-3
//        sum<0 j++

//        j=2(-1)
//        sum=-4+-1+2=-3
//        sum<0 j++

//        j=3
//        sum=-4+0+2=-2
//        j++

//        j=4(1)
//        -4+1+2=-1
//        j++

//        i=1   -1-1+2=0    [-1,-1,2]  

//        i=-1
//        j=0 k=1
//   sum=-1+0+1=0