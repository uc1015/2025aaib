
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;//�j��e��ans�O0
        for(int i=0;i<nums.size();i++){
            //Q:�p�󪾹Dnums[i]�O�X���
            int now = nums[i];//�{�b�n�B�znums[i]
            int digits = 0;//���X��ƪ�?
            while(now>0){//�ΤW�g�йL,���ѤS�g2-3������֪k
                digits++;//�@���ݤ@�L�A��F�X��
                now = now/10;//�Ʀr�V��V�p
            }
            if(digits%2==0) ans++;//�j���.���ƪ���Ʈ�,ans++
        }
        return ans;//�j��᭱ans���ӥ�
    }
}
