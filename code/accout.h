#include "thuvien.h"

class accout
{
public:
    // char* username, *password;
    char username[20], password[20];
    accout(){};
    /* accout(char u, char p)
    {
        username = new char[20];
        password = new char[20];
    }
    ~accout()
    {
        delete [] username;
        delete [] password;
    }
     */
    void nhap();
};