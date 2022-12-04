#include <iostream>
#include <vector>     // vector
#include <algorithm>  // sort
int main() {
std::vector<int> nums {2,2,3,1};
for(auto i = nums.begin(); i != nums.end(); ++i)
{
    std::cout << *i << ' ';
}
    std::cout << std::endl;
int min = 0;
for(int i=1; i<nums.size(); i++)
{
    if (nums[min] > nums[i])
        {
            min = i;
        }
}

int first = min;
int second = min;
int third = min;
for(int i=0; i<nums.size(); i++)
{
    if (nums[first] < nums[i])
        {
            first = i;
        }
}
std::cout << "The first distinct maximum is " << nums[first] << std::endl;
for(int i=0; i<nums.size(); i++)
{
    if ( nums[second] < nums[i] && nums[i] != nums[first])
        {
            second = i;
        }
}
std::cout << "The second distinct maximum is " << nums[second] << std::endl;
for(int i=0; i<nums.size(); i++)
{
    if ( nums[third] < nums[i] && nums[i] != nums[first] && nums[i] != nums[second])
        {
            third = i;
        }
}
if(third == second)
    std::cout << "The third distinct maximum does not exist, so the maximum (" << nums[first] << ") is returned instead. " << std::endl;
else
    std::cout << "The third distinct maximum is " << nums[third] << std::endl;
    return 0;
}
