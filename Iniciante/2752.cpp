#include <iostream>
using namespace std;

int main() {
    string s = "AMO FAZER EXERCICIO NO URI";
    cout << "<" << s << ">" << endl;
    printf("<% 30s>\n", s.c_str());
    printf("<% .20s>\n", s.c_str());
    printf("<% -20s>\n", s.c_str());
    printf("<% -30s>\n", s.c_str());
    printf("<% .30s>\n", s.c_str());
    printf("<% 30.20s>\n", s.c_str());
    printf("<% -30.20s>\n", s.c_str());
    return 0;
}