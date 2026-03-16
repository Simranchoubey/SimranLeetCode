class Solution {
public:
bool isfeasible(vector<int>&piles, int h,int k){
    long long cnt=0;
    for(int i=0;i<piles.size();i++){
        cnt += (piles[i] + k - 1) / k;
        if(cnt > h) return false;
    }
    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;

        while(l<=r){
            int m=l+(r-l)/2;
            if(isfeasible(piles,h,m)){
                ans=m;
                r=m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};