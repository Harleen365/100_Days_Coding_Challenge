class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
       sort(points.begin(),points.end());
       vector<vector<int>>v;
       int arrow=0;
       v.push_back(points[0]);
       for(int i=1;i<points.size();i++){
        //if intersection exist
          if(points[i][0]<=v[0][1]){
            v[0][0]=max(points[i][0],v[0][1]);
            v[0][1]=min(points[i][1],v[0][1]);

          }
          //if no intersection exist
          else{
            arrow++;
            v.pop_back();
            v.push_back(points[i]);
          }
       }
       arrow++;
       return arrow;

    }
};
