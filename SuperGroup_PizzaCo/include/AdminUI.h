#ifndef ADMINUI_H
#define ADMINUI_H


class AdminUI
{
    public:
        AdminUI();
        void password(int password);
        virtual ~AdminUI();


    private:
        int passwordInput;
};

#endif // ADMINUI_H
