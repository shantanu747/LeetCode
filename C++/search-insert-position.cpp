#include <vector>
#include <iostream>

using namespace std;

int searchInsert(vector<int>& nums, int target)
{
    int l = 0;
    int r = nums.size()-1;
    int mid;
    while(r >= l)
    {
        mid = l + ((r-l)/2);
        if(nums[mid] == target) { return mid; }
        if(nums[mid] < target)
        {
            l = mid+1;
        }
        else 
        {
            r = mid - 1;
        }
    }
   return l; //if element is not in array, insert at this index
}

int main(int argc, char const *argv[])
{
    vector
    return 0;
}
