#ifndef EMAIL_ALERT_OBSERVER_H
#define EMAIL_ALERT_OBSERVER_H

#include "NotificationAlertObserver.h"
#include "../Observable/StockObservable.h"

#include<bits/stdc++.h>
using namespace std;

class EmailAlertObserver:public NotificationAlertObserver {

    string EmailId;
    StockObservable* observable;

public:
    EmailAlertObserver(string mail,StockObservable* obj)
    {
        this->observable=obj;
        this->EmailId=mail;
    }

    void update()
    {
        cout<<"Product is in stock\n";
        sendMail(this->EmailId,"go");
    }

    void sendMail(string mail,string msg)
    {
        cout<<"mail sent to "<<mail<<endl;
    }
};

#endif