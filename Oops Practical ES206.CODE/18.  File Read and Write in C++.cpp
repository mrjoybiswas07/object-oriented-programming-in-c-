// File Read and Write in C++

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream ifs;
    char line_of_text[100], filename[20];

    cin >> filename;

    ifs.open(filename);

    if (!ifs) {
        cout << "Error opening file." << endl;
        exit(0);
    }

    while (!ifs.eof()) {
        ifs >> line_of_text;
        cout << line_of_text << endl;
    }

    ifs.close();

    return 0;
}