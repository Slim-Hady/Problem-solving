class Solution {
public:
    bool check(vector<int>& nums) {
        // nums will be B
        vector<int>sorted_arr(nums.begin(),nums.end()); // i will assume this is A
        sort(sorted_arr.begin(),sorted_arr.end());
        int n = nums.size();
        /*
        nums[i] == sorted_arr[(i+x) % n] for each i
        */
        for(int i =0; i < n; i++){
            bool flag = true;
            for(int j = 0; j < n ; j++){
                if( nums[j] != sorted_arr[(j+i)%n]){
                    flag = false;
                } 
            }
            if(flag == true){
                return true;
            }
        }
        return false;
    }
};
