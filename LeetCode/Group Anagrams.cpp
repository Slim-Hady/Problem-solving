class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , int> mp;
        vector<vector<string>> ans;
        for(int i = 0 ; i < strs.size() ; i++){
            string sorted_string = strs[i];
            sort(sorted_string.begin() , sorted_string.end());
            if(!mp.count(sorted_string)){
                mp[sorted_string] = ans.size();
                ans.push_back({strs[i]});
            }
            else {
                int index = mp[sorted_string];
                ans[index].push_back(strs[i]);
            }
        }
        return ans;
    }
};
