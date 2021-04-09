#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char d[128];
    cin.get(d, 128);
    char *token = strtok(d, ",");
    cout << token << endl;
    token = strtok(NULL, "");
    cout << token << endl;
    return 0;
}