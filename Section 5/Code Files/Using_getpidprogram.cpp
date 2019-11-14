#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        cout << "\n This will be the Parent Processing ID : "
              << getpid() << endl;
        cout << "\n This will be the Child Process ID : "
              << getpid() << endl;
    }
    return 0;
}
