#ifndef SMARTBULB_H
#define SMARTBULB_H
#include "smartdevice.h"

enum class bulbColor {white, red, blue, yellow};

class SmartBulb : public SmartDevice
{
    Q_OBJECT
public:
    SmartBulb(QWidget *parent, const QString &deviceBlutooth);
    SmartBulb(QWidget *parent, const QString &deviceBlutooth, const QString &groupName,
              const QString &deviceName, int id, int brightness, bulbColor color);
    virtual ~SmartBulb();

    bool            setBrightness(int brightness); //изменение яркости лампочки
    bool            setBulbColor(bulbColor color);
    int             getBrightness() const;
    bulbColor       getBulbColor() const;
    QString         getDeviceType() const;
    bool            updateDeviceConfig();  //написать (нужен сервер)


private:
    int                  brightness;  //от 1% до 100%
    bulbColor            color;
    static const QString deviceType;


};

#endif // SMARTBULB_H
