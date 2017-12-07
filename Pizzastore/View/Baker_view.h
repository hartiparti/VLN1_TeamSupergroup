#ifndef BAKER_VIEW_H
#define BAKER_VIEW_H
#include <iostream>

using namespace std;



class Baker_view
{
    public:
        Baker_view();
        virtual ~Baker_view();
        void Baker_header();
        void Baker_ScreenTop();
        void Baker_ScreenBottom();
        void Status();
    protected:

    private:

};

#endif // BAKER_VIEW_H
