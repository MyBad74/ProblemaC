#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using namespace std::chrono;

// void recursa(vector<string> lines, int number_banks, int aux, int count)
// {
//     count += number_banks;
//     // cout << "count: " << count << endl;
//     // cout << " lines.size(): " << lines.size() << endl;
//     // cout << "number_banks: " << number_banks << endl;
//     // cout << "aux: " << aux << endl;
//     // cout << "aux + number_banks: " << aux + number_banks << endl;
//     for (int i = aux; i <= aux + number_banks; i++)
//     {
//         cout << lines[i] << endl;

//         // for every word in lines[i] convert it to int and add it to sum
//         // separate the line into words and convert them to int
//     }

//     aux += number_banks + 1;
//     if (count >= lines.size())
//     {
//         return;
//     }
//     //if the string is empty, return 0
//     if (lines[aux].empty())
//     {
//         return;
//     }
//     number_banks = stoi(lines[aux].substr(0, lines[aux].find(' ')));
//     // cout << "number_banks: " << number_banks << endl;

//     recursa(lines, number_banks, aux, count);
// }

int main()
{

    // read input.txt


    ifstream input("input.txt");

    // separate input.txt into lines

    vector<string> lines;
    string line;

    while (getline(input, line))
    {
        lines.push_back(line);
    }

    //pritn lines

    for (int i = 0; i < lines.size(); i++){
        cout << lines[i] << endl;
    }

    // int number_banks = stoi(lines[0].substr(0, lines[0].find(' ')));
    // int aux = 0;
    // int count = 0;
    // recursa(lines, number_banks, aux, count);
}