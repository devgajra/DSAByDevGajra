first approach->

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int n =nums.size() ;
       int i=0 , j=n-1 ;
       vector<int> ans(n);
       for(int k=0; k<n ;k++)
       {
        if(nums[k]%2==0)
        {
           ans[i]= nums[k];
           i++;
        }
        else
        {
            ans[j] =nums[k];
            j--;
        }
       }

       return ans ;

    }
-----------------------------------------------------------------------

    2nd approach ->

    class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i =0 ;
        int n  =nums.size();
        int j=n-1 ;
        while(i<=j)
        {
            int val  = nums[i] ;
            if(val %2  ==0)
            {
               i++;
            }
            else
            {
                swap (nums[j],nums[i]);
                j--;
            }
         
        }

        return nums ;
    }
};