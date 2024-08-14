#ifndef MOBILE_ALERT_OBSERVER_H
#define MOBILE_ALERT_OBSERVER_H

#include "NotificationAlertObserver.h"
#include "../Observable/StockObservable.h"
#include<iostream>
#include<string>

using namespace std;

class MobileAlertObservable:public NotificationAlertObserver {

    string userName;
    StockObservable* observable;

public:
    MobileAlertObservable(string mail,StockObservable* obj)
    {
        this->observable=obj;
        this->userName=mail;
    }

    void update()
    {
        cout<<"Product is in stock\n";
        sendMail(this->userName,"go");
    }

    void sendMail(string mail,string msg)
    {
        cout<<"mail sent to "<<mail<<endl;
    }
};

#endif