#ifndef INVALIDSSNEXCEPTIONS_H
#define INVALIDSSNEXCEPTIONS_H

using namespace std;
#include <string>

class InvalidssnExceptions{

    public:
    InvalidssnExceptions(string message);
    string get_message();

    private:
    string message;
};

#endif // INVALIDSSNEXCEPTIONS_H
