#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <map>

using namespace std;

void build_matrix();
string compute(string _op1, string _op2);

map< pair<string, string>, string > matrix;

int main()
{
    //ifstream input("A-small-attempt2.in");
    ifstream input("input.in");
    ofstream output("output.out");

    string str = "";
    getline(input, str);

    int cases = atoi(str.c_str());
    for (int c = 0; c < cases; ++c)
    {
        getline(input, str);

        int space = str.find(" ");
        int length = atoi(str.substr(0, space).c_str());
        int repeat = atoi(str.substr(space + 1).c_str());

        getline(input, str);

        string whole_str = "";
        for (int i = 0; i < repeat; ++i)
            whole_str += str;

        string current_answer = "";
        vector<int> i_pos;
        for (int i = 0; i < whole_str.length(); ++i)
        {
            if ()
        }

        // int total_people = 0;
        // int friend_count = 0;
        // for (int i = 0; i < shy_max + 1; ++i)
        // {
        //     //cout << "T: " << total_people << endl;
        //     while (total_people < i)
        //     {
        //         total_people++;
        //         friend_count++;
        //     }
        //     total_people += pattern[i] - '0';
        // }
        // cout << endl;
        // output << "Case #" << c + 1 << ": " << friend_count << endl;
    }

    output.close();
    input.close();
    return 0;
}

void build_matrix()
{
    matrix[make_pair("1", "1")] = "1";
    matrix[make_pair("i", "1")] = "i";
    matrix[make_pair("j", "1")] = "j";
    matrix[make_pair("k", "1")] = "k";

    matrix[make_pair("1", "i")] = "i";
    matrix[make_pair("i", "i")] = "-1";
    matrix[make_pair("j", "i")] = "-k";
    matrix[make_pair("k", "i")] = "j";

    matrix[make_pair("1", "j")] = "j";
    matrix[make_pair("i", "j")] = "k";
    matrix[make_pair("j", "j")] = "-1";
    matrix[make_pair("k", "j")] = "-i";

    matrix[make_pair("1", "k")] = "k";
    matrix[make_pair("i", "k")] = "-j";
    matrix[make_pair("j", "k")] = "i";
    matrix[make_pair("k", "k")] = "-1";
}

// string compute(int& _neg, string _op1, string _op2)
// {
//     string arr[4] = {"1", "i", "j", "k"};
//     if (_op1 == arr[0])
//         return _op2;
//     else if (_op2 == arr[0])
//         return _op1;
//     else if ()
// }