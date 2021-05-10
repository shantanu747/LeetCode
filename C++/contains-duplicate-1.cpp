#include <vector>
#include <set>
#include <iostream>

using namespace std;

/*
Runtime: O(n)

Sets don't accept duplicate values. Add elements from nums to set, if there are duplicates size of set will be less than size of input vector
*/

bool containsDuplicate(vector<int>& nums)
{
    set<int> hash;
    for(int i = 0; i < nums.size(); i++)
    {
        hash.insert(nums[i]);
    }
    return hash.size() < nums.size();
}
