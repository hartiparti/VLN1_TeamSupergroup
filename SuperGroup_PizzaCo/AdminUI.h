#ifndef ADMINUI_H
#define ADMINUI_H


class AdminUI
{
    public:
        AdminUI();
        void passwordInput();
        virtual ~AdminUI();


    private:
        int password;
};

#endif // ADMINUI_H
