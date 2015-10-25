#include "CUsbDetect.h"

CUsbDetect::CUsbDetect(QObject *parent) :
    QThread(parent)
{

}

void CUsbDetect::run()
{
    qDebug()<<"thread run: usb detected ";
    m_bHasBR=false;
    while(1)
    {
        QThread::sleep(1);
        checkUsbBus();
    }
}

void CUsbDetect::checkUsbBus()
{
    struct usb_device *dev;
    struct usb_device_descriptor *desc;

    dev = usbio_probe();
    desc = &(dev->descriptor);

    if (dev == NULL)
    {
        // printf("USB IO Card not found.\n");
        return ;
    }

    //  printf("SUB IO Card found.\n");
    printf("Vendor/Product ID: %04x:%04x\n", desc->idVendor,desc->idProduct);

    usbio_main(dev);

}

void CUsbDetect::usbio_main(struct usb_device *dev)
{
    usb_dev_handle *dev_handle;

    dev_handle = usb_open(dev);

    if (dev_handle == NULL)
    {
        printf("USB IO open failed.\n");
        return;
    }

    usb_close(dev_handle);
}

struct usb_device *CUsbDetect::usbio_probe()
{
    struct usb_bus *busses, *bus;
    bool bHavFindBarcode=false;
    usb_init();
    usb_find_busses();
    usb_find_devices();
    busses = usb_get_busses();
    for (bus = busses; bus; bus = bus->next)
    {
        struct usb_device *dev;

        for (dev = bus->devices; dev; dev = dev->next)
        {
            struct usb_device_descriptor *desc;
            desc = &(dev->descriptor);
            QString st;
            st.append(QString::number(desc->idVendor,16));
            st.append(":");
            st.append(QString::number(desc->idProduct,16));

            if(st==BARCODE_DEV)
            {
                bHavFindBarcode=true;
            }

            //   printf("Vendor/Product ID: %04x:%04x\n", desc->idVendor,desc->idProduct);
            if ((desc->idVendor == 0xffff) && (desc->idProduct == 0x0001))
                return dev;
        }

    }

    if(bHavFindBarcode!=m_bHasBR)
        emit singalDetectBarcode(bHavFindBarcode);
    m_bHasBR=bHavFindBarcode;

    return NULL;
}
