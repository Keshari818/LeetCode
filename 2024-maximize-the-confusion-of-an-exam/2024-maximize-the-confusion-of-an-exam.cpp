class Solution {
public:
    int maxConsecutiveAnswers(string nums, int k) {
        unordered_map<char,int>mpp;
        int maxi=0,i=0,j=0;
        while(j<nums.size()){
                mpp[nums[j]]++;
                j++;

            if(min(mpp['T'],mpp['F'])<=k) 
                maxi=max(maxi,mpp['F']+mpp['T']);
            else{
                while(min(mpp['T'],mpp['F'])>k){
                    mpp[nums[i]]--;
                        i++;
                }
            }             
        }
        return maxi;
    }
};