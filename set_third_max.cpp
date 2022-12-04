#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        multiset<int> new_set; 
        for(int it : nums) 
            {
            new_set.insert(it); 
            }
            
        int size = new_set.size();
        
        set<int>::iterator it;
        it = new_set.begin();
        if(size<3)
            {
            for(int i=0; i < (size-1); i++) { it++; }  
            return *it; // [size-1]; 
            }
        
        for(int i=0; i < (size-3); i++) { it++; }
        return *it; // [size-3];
    }
};

int main()
{
    std::vector <int> nums {41,19,37,-9,37};
	for(int i=0; i < nums.size(); i++)
	{
		std::cout << nums[i] << " ";
	}
    Solution A;
    std::cout << "\nThe third distinct maximum is " << A.thirdMax(nums) << "." <<std::endl;
    
    return 0;
}
