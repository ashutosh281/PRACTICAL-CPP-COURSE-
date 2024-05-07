#include<iostream>
#include<string>

using namespace std;
  
class binary {
    string s;

public:
    void read(void);
    bool check_binary(void);
    void ones_complement(void);
    void display(void);
};

void binary::read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
}

bool binary::check_binary(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Entered binary number is incorrect." << endl;
            return false;
        }
    }
    cout << "Entered binary number is correct." << endl;
    return true;
}

void binary::ones_complement(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1') {
            s.at(i) = '0';
        }
    }
}

void binary::display(void) {
    cout << "Displaying your binary number: ";
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
    cout << endl;
}

int main() {
    binary b;
    b.read();
    if (b.check_binary()) {
        b.ones_complement();
        b.display();
    }

    return 0;
}
