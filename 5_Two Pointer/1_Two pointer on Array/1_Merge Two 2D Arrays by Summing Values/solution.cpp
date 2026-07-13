class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
      int size1 = nums1.size();
      int size2 = nums2.size();
      vector<vector<int>> ans ;
      int i =0 ,j=0 ;
      while( i<size1 && j<size2)
      {
         int id1 = nums1[i][0];
         int id2 = nums2[j][0];
         int val1 =nums1[i][1];
         int val2 =nums2[j][1];
         if(id1 == id2)
         {
             ans.push_back({id1 ,val1+val2});
             i++;
             j++;
         }
         else if( id1 > id2)
         {
            ans.push_back({id2,val2});
            j++;
         }
         else
         {
            ans.push_back({id1, val1});
            i++;
         }
      }


      for(int x=i ; x<size1 ;x++)
      {
        ans.push_back(nums1[x]);
      }
      for(int y=j ;y<size2 ;y++)
      {
        ans.push_back(nums2[y]);
      }

     return ans ;
    }
  
};