#pragma once

#include <iostream>
#include <string>

const int MAX_MENU_OPTIONS = 10;

using namespace std;

class proj3_2018_menu{
    private:
        char validOpts[MAX_MENU_OPTIONS];
        string optDesc[MAX_MENU_OPTIONS];
        string title;
        string errorMsg;
        int numOpts;
    public:
        proj3_2018_menu();
        void setTitle(string newTitle);
        void setErrorMsg(string newErrorMsg);
        void addOption(char opt, string desc);
        char doMenu();
        bool validOption(char opt);
};