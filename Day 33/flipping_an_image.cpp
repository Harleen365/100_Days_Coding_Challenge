class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        for(int i=0;i<m;i++){
            reverse(image[i].begin(),image[i].end());
        }
        int n=image[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                image[i][j]^=1;
            }
        }
        return image;
    }
};
