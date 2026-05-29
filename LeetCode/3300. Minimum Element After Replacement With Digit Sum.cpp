class Solution {
public:
    int getDigitSum(int num){
        int ans =0;
        while(num != 0){
            ans += num%10;
            num /= 10;
        }
        return ans;
    }
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i =0 ;i  < nums.size() ; i++){
            int digitSum = getDigitSum(nums[i]);
            mn = min(mn , digitSum);
        }
        return mn;
    }
};
