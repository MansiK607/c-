class Solution {
   
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        int minutes=0;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!q.empty() && fresh>0){
            int size=q.size();
            minutes++;
            for(int i=0;i<size;i++){
                int row=q.front().first;
                int col=q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int newrow=row+delrow[j];
                    int newcol=col+delcol[j];
                    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && grid[newrow][newcol]==1){
                        grid[newrow][newcol]=2;
                        fresh--;
                        q.push({newrow,newcol});
                    }
                }
            }
        }
        if(fresh==0) return minutes;
        else return -1;
    }
};