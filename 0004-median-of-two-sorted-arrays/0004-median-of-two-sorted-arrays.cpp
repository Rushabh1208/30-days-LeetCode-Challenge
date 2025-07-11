class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
       
      vector<int> c(a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());

    
    sort(c.begin(), c.end());
    
    int len = c.size();
  	
  	
    if (len % 2 == 0) 
        return (c[len / 2] + c[len / 2 - 1]) / 2.0;
  
  	
  	else 
        return c[len / 2];
    }
};