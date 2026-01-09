class Solution {
public:

    vector<int> twoSum(vector<int>& nums , int target) {

        bool test=false;
        int i=0;
        int j;

        while(i<nums.size()  &&  test==false)
        {
            j=i+1;
            while(j<nums.size() && nums[i]+nums[j]!=target)
            {
                j=j+1;
            }
            if (j < nums.size() && nums[i] + nums[j] == target) {
    test = true;
    return {i, j};
}

        
            if(nums.size()==j)
            {
            i=i+1;
            }
          
           
         
        }
           return {};
          
    } 
    
};