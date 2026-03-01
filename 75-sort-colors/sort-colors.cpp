class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0 ; //0 
        int j = 0; //1
        int k = n-1; //2
        while(j <= k){
            if(nums[j] == 1) j++;
            else if(nums[j] == 2){
                swap(nums[j],nums[k]);
                k--;
            }else{
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
        }
    }
};
//         0 1 2 3 4 5
// nums = [2,0,2,1,1,0]
// i=0,j=0,k=5
// 0<=5. 
//   (nums[0]=2)==1  no
//            2==2
//             swap(nums[0],nums[5]){2,0} k--//4
            
//         0 1 2 3 4 5
// nums = [0,0,2,1,1,2]            
// i=0,j=0,k=4
// nums[k]=1
// num[j]=0==1 no
//        0==2 no
//        swap(0,0)
//        i++,j++//1,1

//         0 1 2 3 4 5
// nums = [0,0,2,1,1,2]            
// i=1,j=1,k=4
// nums[k]=1
// num[j]=0==1 no
//        0==2 no
//        swap(0,0)
//        i++,j++//2,2     

//         0 1 2 3 4 5
// nums = [0,0,2,1,1,2]            
// i=2,j=2,k=4
// nums[k]=1
// num[j]=2==1 no
//        2==2 yes
//        swap(nums[j],nums[k]) //{2,1}
//        k--//3
//         0 1 2 3 4 5
// nums = [0,0,1,1,2,2]         ans 