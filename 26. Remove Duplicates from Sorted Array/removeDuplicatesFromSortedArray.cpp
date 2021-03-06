class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int len=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[len-1]!=nums[i]){
                swap(nums[len], nums[i]);
                len++;
            }
        }
        return len;
    }
};