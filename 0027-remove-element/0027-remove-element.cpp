
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int aux;
        int first = 0;
        int last = n - 1;


      while(first<=last){

        while (first <=last && nums[first] != val) {
            first++;
        }

        while (first <=last && nums[last] == val) {
            last--;
         }


        if(first<=last)
        {
         nums[first] = nums[last];
         last--;
         first++;
        }

      }


        return first;
    }
};
