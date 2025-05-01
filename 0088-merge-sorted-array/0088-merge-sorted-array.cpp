class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) return;

        int k = 0, j = 0, temp = 0, s = 0; 
       while(k<m)
        {
            if (nums2[j] < nums1[k]) {
                temp = nums1[k];
                nums1[k] = nums2[j];
                nums2[j] = temp;
                s = j;
                while (s<n-1 && nums2[s] > nums2[s + 1]) {
                    temp = nums2[s];
                    nums2[s] = nums2[s + 1];
                    nums2[s + 1] = temp;
                    s++;
                }
            } 
            else {
                k++;
            }

           
        }
          j = 0;

         for (int i =m; i < m+n; i++) 
         {
                nums1[i] = nums2[j];
                j++;
            }
    }
};
