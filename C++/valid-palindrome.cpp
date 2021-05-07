#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    string word;
    for(int i = 0; i < s.length(); i++)
    {
        if(isalnum(s[i]))
        {
            word += s[i];
        }
    }
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    string bw = word;
    reverse(bw.begin(), bw.end());
    return word == bw;
}

int main(int argc, char const *argv[])
{
    cout << isPalindrome("A man, a plan, a canal: Panama") << endl;
    return 0;
}
