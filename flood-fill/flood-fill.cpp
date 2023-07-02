class Solution {
   
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old =image[sr][sc];
        if(image[sr][sc]==color) return image;
        int m=image.size();
        int n=image[0].size();
        queue<pair<int,int>>q;
        q.push(make_pair(sr,sc));
        vector<vector<int>>vis(m,vector<int>(n,0));

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            vis[row][col]=1;
            q.pop();
            image[row][col]=color;
            int delrow[4]={-1,0,1,0};
            int delcol[4]={0,1,0,-1};
            
                for(int i=0;i<4;i++){
                    int nrow=row+delrow[i];
                    int ncol=col+delcol[i];
                    if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && image[nrow][ncol]==old && vis[nrow][ncol]!=1){
                    q.push(make_pair(nrow,ncol));
                    
                    
                    }
                    


                }
            

        }
        return image;
    }
};