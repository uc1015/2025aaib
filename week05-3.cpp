class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {};//開501大小的陣列,全部補0
        int odd = 0;
        for(int i=0; i<nums.size(); i++){
            int now = nums[i];//現在處理的文字
            a[now]++;// now增加1次
            if(a[now] % 2 == 0) odd--;
            else odd++;//多1個奇數
        }
        if(odd==0) return true;
        else return false;
    }
};
