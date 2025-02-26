# LeetCode 1. Two sum
# ���@��Ʀr nums�̭�����Ӭۥ[,�Otarget
# num[i] + nums[j] == target ���i�Mj�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {} # ���@�ӽc�l,�̭���X�{�L���Ʀr
        # �ڭ̷Q�n��Xtarget�o�ӥ[�`

        for i,num in enumerate(nums):
            other = target - num #�t�~�@�ӻݭn���ƥi�H��Xtaget��(target-num)
            if other in box: #�b�c�l��,���t�~�@�ӻݭn����
                return [ box[other],i] #��쵪��
            else: #�p�G�S���X�A���Ʀr���
                box[num] = i #�N��{�b���Ʀrnum,���box�̭�
