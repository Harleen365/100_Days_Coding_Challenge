class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>elementcountmap;
        for(int i=0;i<nums.size();i++){
            elementcountmap[nums[i]]++;
        }
        vector<int>maj;
        int threshhold=nums.size()/3;
        for(auto elementcountpair:elementcountmap){
            int element=elementcountpair.first;
            int count=elementcountpair.second;

            if(count>threshhold){
                maj.push_back(element);
            }
        }
        return maj;
    }
};
