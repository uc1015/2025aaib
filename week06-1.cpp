class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN = M*N;
        vector<int> a(MN);//C++的陣列a,大小是M*N
        for(int i=0; i<M; i++){//左手i
            for(int j=0; j<N; j++){//右手j
                int k = i*N+j;//單位換算
                a[k] = grid[i][j];//把原來的陣列,放入a[]
            }
        }//前面,把grid[i][j]的資料,放入簡單的陣列a[k]
        sort(a.begin(), a.end());//數字小到大排好
        int mid = a[MN/2];//中間的數(每個人,要往中間的數字移動)
        int ans=0;//迴圈前面ans是0
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]);//現在這格,離中間多少?
            if(diff%x !=0)return -1;//有個小陷阱,不能整除,會失敗
            ans+= diff/x;
        }//迴圈裏面,算答案
        return ans;//迴圈後面,答案拿來用
    }
};
