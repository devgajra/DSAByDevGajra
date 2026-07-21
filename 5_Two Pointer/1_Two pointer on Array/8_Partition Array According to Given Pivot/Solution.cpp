 //1st approach ->

 class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       int n = nums.size(); 
       vector<int>ans(n);
       int i= 0; 
       for(int num : nums)
       {
        if(num < pivot)
        {
            ans[i] = num ;
            i++; 
        }
       }

       int j= n-1 ;
       for(int k=n-1 ; k>=0 ; k--)
       {
           if(nums[k] > pivot)
           {
            ans[j] =nums[k] ;
            j--;
           }
       }
       while(i<=j)
       {
        ans[i] = pivot ;
        i++;
       }
      return ans ;
    }

};  
  
// 2nd approach ->

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       int count1 =0 ,count2 =0 ;
       int n = nums.size();
       vector<int>ans(n);
       for(int num : nums)
       {
        if(num <pivot)
        {
            count1++;
        }
        else if(num == pivot)
        {
            count2++ ;
        }
       } 

       int i=0 ;
       int j=count1 ;
       int k=count1 +count2 ;

       for(int num : nums)
       {
        if(num <pivot)
        {
            ans[i]=num ;
            i++;
        }
        else if(num ==pivot)
        {
            ans[j]=num ;
            j++;
        }
        else
        {
            ans[k]=num ;
            k++;
        }
       }
        return ans ;
    }
};