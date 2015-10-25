#ifndef CUSBDETECT_H
#define CUSBDETECT_H

#include <QObject>
#include <QThread>
#include <QElapsedTimer>
#include <QDebug>
#include <libusb-1.0/libusb.h>
#include <stdio.h>
#include <stdlib.h>
#include <usb.h>

#define BARCODE_DEV "483:1234"

class CUsbDetect : public QThread
{
    Q_OBJECT
public:
    explicit CUsbDetect(QObject *parent = 0);
    void run();

    
private:
    void checkUsbBus();

    void usbio_main(struct usb_device *dev);

    struct usb_device *usbio_probe();

    bool m_bHasBR;

signals:
    void singalDetectBarcode(bool bHas);
public slots:
    
};

#endif // CUSBDETECT_H
