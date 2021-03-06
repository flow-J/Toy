#include "stack.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream input(argv[1]); int N = input.size();
    Stack<string> ops(N);
    for (auto p = argv + 1; p != argv + argc; ++p)
    {
        ifstream input(*p);
        if (*input == ')')
            cout << ops.pop() << " ";
        if ((input == '+') || (input == '*'))
            ops.push(input);
        if ((input >= '0') && (input <= '9'))
            cout << input << " ";
    }
    cout << endl;
}
