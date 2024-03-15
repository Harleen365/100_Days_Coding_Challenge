class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        //nums:stores the above 3 stones
        vector<int>nums{a,b,c};
        sort(nums.begin(),nums.end());
        if(nums[2]-nums[0]==2){
            return {0,0};//indicating that they are already consecutive
        }
        else{
            int f;
            int l;
            f=nums[1]-nums[0]-1;
            l=nums[2]-nums[1]-1;
            vector<int>arr(2);
            if(f<2 || l<2){
                arr[0]=1;
            }
            else{
                arr[0]=2;
            }
            arr[1]=f+l;
            return arr;
        }
    }
};
