class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
     int n=nums.size();
     if(n==1) {
        return 1;
     }
     int curr=0;
     int index=0;

       while(curr<n){

        while(curr<n-1 && nums[curr]== nums[curr+1])
        {
            curr++;
        }
        
        index++;
        curr++;
        if(curr<n)
        {
          nums[index]=nums[curr];
        }
       
       }
        
     return index;
    }
    
};
