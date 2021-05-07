#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
int removeDuplicates(vector<int>& nums)
{
    for(int i = 0; i < nums.size()-1; i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            if(nums[j] == nums[i])
            {
                nums.erase(nums.begin() + j);
                i -= 1;
            }
        }
    }
    return nums.size();
}
*/

int removeDuplicates(vector<int>& nums)
{
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    return nums.size();
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(vec) << endl;
    return 0;
}
