#include <iostream>
#include <cstring>
#include <algorithm>
#include <unistd.h>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

vector<int> users;


void choose(string lesson_name)
{
    puts("---------------------------------------------");
    printf("获得《%s》激活码的同学是：\n", lesson_name.c_str());
    sleep(1);

    for (int i = 0; i < 10; i ++ )
    {
        int k = rand() % users.size();
        if (users[k] == -1) continue;
        cout << users[k] << endl;
        users[k] = -1;
        break;
    }
    sleep(1);
    cout << endl << endl;
}


int main()
{
    ifstream fin("users.txt");

    srand(time(0));

    int user_id;
    while (fin >> user_id) users.push_back(user_id);

    choose("蓝桥杯C++ AB组辅导课");
    choose("PAT甲级辅导课");
    choose("CCF-CSP认证辅导课");

    return 0;
}
