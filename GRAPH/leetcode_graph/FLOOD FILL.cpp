class Solution {
     private:
    vector<pair<int,int>>direction={{0,1},{0,-1},{1,0},{-1,0}};
    void dfs(int i,int j,int initial_color,int newColor,vector<vector<int>>& image){
        int row=image.size();
        int col=image[0].size();
        if(i<0 || i>=row || j<0 || j>=col) return;
        if(image[i][j]!=initial_color) return;
        image[i][j]=newColor;
        for(auto &it:direction){
            dfs(it.first+i,it.second+j,initial_color, newColor,image);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
      int initial_color= image[sr][sc];
          if(newColor!=initial_color)
      dfs(sr, sc,initial_color,newColor,image);
          return image;
    }
  
};
