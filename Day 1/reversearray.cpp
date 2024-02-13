vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    return nums;


}

