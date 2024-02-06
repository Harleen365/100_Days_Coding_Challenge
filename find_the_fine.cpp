class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int sum=0;
        for(int i=0;i<n;i++){
            if(car[i]%2!=0 && date%2==0){
                sum+=fine[i];
            }
            if(car[i]%2==0 && date%2!=0){
                sum+=fine[i];
            }
        }
        return sum;
    }
};
