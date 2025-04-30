
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;//迴圈前面ans是0
        for(int i=0;i<nums.size();i++){
            //Q:如何知道nums[i]是幾位數
            int now = nums[i];//現在要處理nums[i]
            int digits = 0;//有幾位數阿?
            while(now>0){//用上週教過,今天又寫2-3次的剝皮法
                digits++;//一邊屬一夏你剝了幾次
                now = now/10;//數字越剝越小
            }
            if(digits%2==0) ans++;//迴圈裡.偶數的位數時,ans++
        }
        return ans;//迴圈後面ans拿來用
    }
}
