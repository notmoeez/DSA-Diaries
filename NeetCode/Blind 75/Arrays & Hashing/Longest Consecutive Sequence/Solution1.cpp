class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0)return 0;

        unordered_map<int,bool> res;

        int len=0;

        auto minmax = minmax_element(nums.begin(), nums.end());
        int min=*minmax.first;
        int max=*minmax.second;

        for(int i=min;i<=max;i++){
            res[i]=false;
        }

        for(int i=0;i<nums.size();i++){
            res[nums[i]]=true;
        }

        int maxLen=0;
        for(int i=min;i<=max;i++){
            if(res[i]==1){
                len++;
            }
            else{
                if(maxLen<len)maxLen=len;
                len=0;
            }
        }

        if(maxLen>len)
            return maxLen;
        else
            return len;
    
    }
};

