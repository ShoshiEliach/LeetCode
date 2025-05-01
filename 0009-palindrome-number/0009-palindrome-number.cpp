class Solution {
public:
    bool isPalindrome(int x) {

    vector<int> arr;
        if(x<0)
            return false;

        while(x!=0){
            arr.push_back(x%10);
            x=x/10;
        }
            cout << "The size of the vector is: " << arr.size() << endl;

        
        int i=0,j=arr.size()-1;
        while(i<j)
        {
           if(arr[i]!=arr[j]){
            return false;
           }
            i++;
            j--;
        }
            
        
        return true;
    }
};