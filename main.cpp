#include <iostream>

using namespace std;
int main() {
    cout << "please remember you cant get info about powershell commands here\n";
    string sh_command;
    getline(cin, sh_command);

    if (sh_command == "rm") {
        cout << "rm command is used to remove files or folders from the users disk.";
    } //other logic will be added later
    return 0;
}