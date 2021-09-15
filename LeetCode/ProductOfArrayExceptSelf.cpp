class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> newNums;

        int aux = 1, aux1 = 0;
        int isZero = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                isZero++;
            }else{
                aux1 = 1;
                aux = aux * nums[i];
            }
        }

        if(aux1 == 0 )aux = 0;
        for(int i = 0; i < nums.size(); i++){
            if((isZero == 1 && nums[i] != 0) || aux == 0 || isZero > 1){
                newNums.push_back(0);
            }else if(isZero && nums[i] == 0){
                newNums.push_back(aux);
            }else{
                newNums.push_back(aux/nums[i]);
            }
        }
        return newNums;
    }
};
