class Solution {
public:
    int removeElement(vector<int>& nums, int val){
        vector<int>temp;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                temp.push_back(nums[i]);
            }
        }
        for(int j =0;j<temp.size();j++){
            nums[j]=temp[j];
        }
        return temp.size();
    }
};