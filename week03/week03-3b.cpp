//week03-3b.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
        }


        if(ans>0)return 1;
        if(ans<0)return -1;
        return 0;

    }
};
