class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        set<vector<int>>paths;
        paths.insert({0,0});
        for(char i:path){
            switch(i){
                case 'N':y++;break;
                case 'S':y--;break;
                case 'E':x++;break;
                case 'W':x--;break;
            }
            //if we have previously visited
            if(paths.find({x,y})!=paths.end()){
                return true;
            }
            paths.insert({x,y});
        }
        return false;
    }
};
