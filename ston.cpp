#include <iostream>
#include <vector>
#include <string>
using namespace std;

string grid_search(vector<vector<int>> G, vector<vector<int>> P)
{

    int boss_counter = 0;
    int counter = 0;
    string res = "";
    int G_size = G.size();
    int G_inner_size = G[0].size();
    int P_inner_size = P[0].size();
    int P_size = P.size();
    int a = 0;

    for (int i = 0; i < G_size; i++)
    {
        if (boss_counter == P_size)
        {
            res = "YES";
            break;
        }

        int b = 0;
        for (int j = 0; j < G_inner_size; j++)
        {
            if (P[a][b] == G[i][j])
            {
                counter++;
                b++;
            }
            else
            {
                b = 0;
                counter = 0;
                continue;
            }

            if (counter == P_inner_size)
            {
                boss_counter++;
                counter = 0;
                a++;
            }

            if (b == P_inner_size)
            {
                break;
            }
        }
    }

    return res;

}

int main()
{
    vector<vector<int>> G = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
                             {0, 9, 8, 7, 6, 5, 4, 3, 2, 1},
                             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                             {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}};

    vector<vector<int>> P = {{8, 7, 6, 5, 4, 3},
                             {1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 1, 1}};

    string res = grid_search(G, P);
    

    return 0;
}