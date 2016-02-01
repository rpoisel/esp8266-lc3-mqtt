#ifndef LC_PROT_LCFU___MQTT_INIT__C
#define LC_PROT_LCFU___MQTT_INIT__C

#include <lcfu___mqtt_init.h>
#include <mqtt.h>

/*                            Functions                        */
void  lcfu___MQTT_INIT(LC_TD_Function_MQTT_INIT* LC_this, LcCgChar LC_VD_SERVER_URL[65], LC_TD_UINT LC_VD_PORT, struct _lcoplck_epdb_1_impl* pEPDB)
{
  mqtt_init(LC_VD_SERVER_URL, LC_VD_PORT);
}

#endif
