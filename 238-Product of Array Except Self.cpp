/*
O(N^2)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                else mul=mul*nums[j];
            }
            ans.push_back(mul);
            mul=1;
        }
        return ans;
    }
};
*/

//O(N)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(size(nums));
        
        int prefix=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=prefix;
            prefix=prefix*nums[i];
        }    
        int postfix=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=ans[i]*postfix;
            postfix=postfix*nums[i];
        }
        return ans;
}
};