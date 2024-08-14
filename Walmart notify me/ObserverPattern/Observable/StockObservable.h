#ifndef STOCK_OBSERVABLE_H
#define STOCK_OBSERVABLE_H

class NotificationAlertObserver;

class StockObservable
{
public:
    virtual void add(NotificationAlertObserver* observer)=0;

    virtual void remove(NotificationAlertObserver* observer)=0;

    virtual void NotifySubscribers()=0;

    virtual void setStockCount(int newStockAdded)=0;

    virtual int getStockCount()=0;

};

#endif