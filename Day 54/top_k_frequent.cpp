class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (auto x : nums) {
            m[x]++;
        }

        vector<int> ans;
        vector<std::pair<int, int>> vp;
        for (auto x : m) {
            vp.push_back({x.first, x.second});
        }

       
        sort(vp.begin(), vp.end(),[] (const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        for (int i = 0; i < k; i++) {
            ans.push_back(vp[i].first);
        }

        return ans;
    }
};
