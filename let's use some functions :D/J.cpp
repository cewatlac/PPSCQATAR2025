#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    char C;
    cin >> C;

    char Alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 
                       'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    int X = find(begin(Alphabet), end(Alphabet), C) - begin(Alphabet) + 1;

    cout << Alphabet[X] << endl;
}
