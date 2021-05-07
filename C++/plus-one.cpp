#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) 
{
    if(digits[digits.size()-1] == 9)
    {
        vector<int> ret = digits;
        reverse(ret.begin(), ret.end());
        int carry = 0;
        for(int i = 0; i < ret.size(); i++)
        {
            if(i == 0 && (ret[i]+1) == 10)
            {
                ret[i] = 0;
                carry = 1;
            }
            else if((ret[i]+carry) == 10)
            {
                ret[i] = 0;
                carry = 1;
            }
            else if((ret[i]+carry) < 10)
            {
                ret[i] = ret[i] + carry;
                carry = 0;
            }
        }
        //to deal with hanging carry e.g. get [9, 9] and have to return [1, 0, 0]
        if(carry == 1)
        {
            ret.push_back(1);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
    else
    {
        digits[digits.size()-1] += 1;
        return digits;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> inp = {4, 3, 3, 1};
    plusOne(inp);
    return 0;
}
