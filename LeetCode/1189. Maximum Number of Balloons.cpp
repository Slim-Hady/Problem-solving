class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string str = "abllnoo";
        unordered_map<char,int> mp;
        for(int i =0 ; i < text.size(); i++){
            if(find(str.begin(), str.end(), text[i]) != str.end()) {
                mp[text[i]]++;
            }
        }
        if(mp.size() < 5) {
            return 0;
        }
        int mn = INT_MAX;
        for(auto [key,val] : mp) {
            if(key == 'l' || key =='o') {
                val /= 2;
            }
            mn = min(val , mn);
        }
        return mn;
        
    }
};
