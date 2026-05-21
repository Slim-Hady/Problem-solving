class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> c(n);
        unordered_map<int,int>mp;
        int cnt= 0;
        for(int i =0; i < n; i++){
           mp[A[i]]++;
           mp[B[i]]++;
           for(auto[key,val] : mp){
                if(val > 1){
                    cnt++;
                }
           }
           c[i] =cnt;
           cnt = 0;
        }
        return c;
    }
};
