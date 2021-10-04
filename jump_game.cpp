class Solution {
public:
    bool canJump(vector<int>& v) {
        if(v.size()==1)return true;
        int mx=0,n=v.size();
        for(int i=0 ; i<min(mx+1,n-1) ; i++){
            mx=max(i+v[i],mx);
            if(mx>=v.size()-1)return true;
        }
        return false;
    }
};
