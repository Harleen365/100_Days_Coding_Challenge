class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>frecount;//used to store frequency of each element
        for(int num:nums){
            frecount[num]++;
        }
        int maxfreq=0;//finds the maximum frequency
        for(const auto&entry:frecount){
            maxfreq=max(maxfreq,entry.second);
        }
        int maxfreqele=0;//counts the number of elements that have maximum frequency
        for(const auto&entry:frecount){
            if(entry.second==maxfreq){
                maxfreqele++;
            }

        }
        int totalfreq=maxfreq*maxfreqele;
        return totalfreq;
    }
};
