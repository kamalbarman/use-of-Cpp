#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(string str)
{
    string result = "";

    for (int i = 0; i < str.length(); ++i)
    {
        char current_char = str[i];
        bool is_duplicate = false;

        for (int j = 0; j < i; ++j)
        {
            if (str[j] == current_char)
            {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate)
        {
            result += current_char;
        }
    }

    return result;
}

int main()
{
    string str = "geEksforGEeks";
    string result = removeDuplicates(str);

    cout << "Original string: " << str << endl;
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
