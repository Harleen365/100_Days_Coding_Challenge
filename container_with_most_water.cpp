class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int width=right-left;
            int minhei=min(height[left],height[right]);
            int currwater=width*minhei;
            maxwater=max(maxwater,currwater);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxwater;

    }
};
