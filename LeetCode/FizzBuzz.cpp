#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> lista;

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                lista.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                lista.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                lista.push_back("Buzz");
            }
            else
            {
                string newString = to_string(i);
                lista.push_back(newString);
            }
        }
        return lista;
    }
};
