class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoSum;
        int j,i;
        int n=nums.size();
        for(i=0;i<n;i++){
            for(j=1;j<n;j++){
                if(target==nums.at(i)+nums.at(j)&&i!=j){
                    twoSum.push_back(i);
                    twoSum.push_back(j);
                    return twoSum;
                }
            }
        }
        return twoSum;
    }

        
    
};
