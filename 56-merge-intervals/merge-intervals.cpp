class Solution {
 
public:
    void fun(vector<vector<int>>& mergeInterval,int i,int j,vector<vector<int>>& vect){
        if(i==vect.size()) return ;
        if(i==0){
            mergeInterval.push_back(vect[i]);
            fun(mergeInterval,++i,j,vect);
        } 
        else if(vect[i][0]<=mergeInterval[j][1]){
            mergeInterval[j][1]=max(mergeInterval[j][1],vect[i][1]);
            fun(mergeInterval,++i,j,vect);
        }else{
            mergeInterval.push_back(vect[i]);
            fun(mergeInterval,++i,++j,vect);
        }
        return ;
    }
    vector<vector<int>> merge(vector<vector<int>>& vect) {
        vector<vector<int>> mergeInterval;
        if(vect.size()==0){
            return mergeInterval;
        }
        sort(vect.begin(),vect.end());
        // int res=0;
        // for(int i=0;i<vect.size();i++){
        //     if(vect[i][0]<=vect[res][1]){
        //         vect[res][0]=min(vect[res][0],vect[i][0]);
        //         vect[res][1]=max(vect[res][1],vect[i][1]);
        //     }else{
        //         res++;
        //         vect[res][0]=vect[i][0];
        //         vect[res][1]=vect[i][1];
        //     }
        // }
        // for(int i=0;i<=res;i++){
        //     mergeInterval.push_back(vect[i]);
        // }
        fun(mergeInterval,0,0,vect);
        return mergeInterval;
    }
};