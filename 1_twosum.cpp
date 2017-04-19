class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        int temp;
        for(int n = 0; n < nums.size(); n++){
                temp = target - nums.at(n);
                for(int j = n+1; j< nums.size(); j++){
                    if(temp == nums.at(j)){
                        solution.push_back(n);
                        solution.push_back(j);
                        return solution;
                 }
            }
        }
     }
};