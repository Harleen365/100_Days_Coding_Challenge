class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>a;
        for(int i=1;i<=9;i++){
            int num=i;
            int dig=i+1;
            while(num<=high && dig<=9){
                num=num*10+dig;
                if(low<=num && num<=high){
                    a.push_back(num);
                }
                dig++;
            }

        }
        sort(a.begin(),a.end());
        return a;
    }
};
