#include "Observable/iPhoneObservable.h"
#include "Observer/EmailAlertObserver.h"
#include "Observer/MobileAlertObserver.h"

int main() {
    iPhoneObservable* iPhone = new iPhoneObservable();

    NotificationAlertObserver* observer1 = new EmailAlertObserver("xyz@gmail.com", iPhone);
    NotificationAlertObserver* observer2 = new EmailAlertObserver("xyz2@gmail.com", iPhone);
    NotificationAlertObserver* observer3 = new MobileAlertObservable("xyz_username", iPhone);

    iPhone->add(observer1);
    iPhone->add(observer2);
    iPhone->add(observer3);

    iPhone->setStockCount(10);
    iPhone->setStockCount(0);
    iPhone->setStockCount(100);

    // Clean up
    delete observer1;
    delete observer2;
    delete observer3;
    delete iPhone;

    return 0;
}
