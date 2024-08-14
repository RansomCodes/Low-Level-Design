#ifndef IPHONE_OBSERVABLE_H
#define IPHONE_OBSERVABLE_H

#include "StockObservable.h"
#include "../Observer/NotificationAlertObserver.h"
#include <vector>
#include <algorithm>
#include <iostream>

class iPhoneObservable : public StockObservable
{
public:
    std::vector<NotificationAlertObserver*> observerList;
    int stockCount = 0;

    void add(NotificationAlertObserver* observer) override {
        observerList.push_back(observer);
    }

    void remove(NotificationAlertObserver* observer) override {
        auto it = std::remove(observerList.begin(), observerList.end(), observer);
        observerList.erase(it, observerList.end());
    }

    void NotifySubscribers() override {
        for (auto observer : observerList) {
            observer->update(); 
        }
    }

    void setStockCount(int newStockAdded) override {
        if(stockCount == 0) {
            NotifySubscribers();
        }
        stockCount += newStockAdded;
    }

    int getStockCount() override {
        return stockCount;
    }
};

#endif // IPHONE_OBSERVABLE_H
