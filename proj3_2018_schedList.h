#pragma once

#include "proj3_2018_schedule.h"

const int MAX_SCHEDULES = 50;

class proj3_2018_schedList{
    private:
        int numSchedules;
        proj3_2018_schedule schedules[MAX_SCHEDULES];
    public:
        proj3_2018_schedList();
        int getNumSchedules();
        proj3_2018_schedule getSchedule(int idx);
        proj3_2018_schedule getSchedule(string sId);
        void addSchedule(proj3_2018_schedule s);
        void print();
        void read();
        void write();
};