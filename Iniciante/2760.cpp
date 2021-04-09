#include <iostream>
using namespace std;

int main() {
    char a[41], b[41], c[41];
    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    scanf(" %[^\n]", c);
    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    printf("%.10s%.10s%.10s\n", a, b, c);
    return 0;
}