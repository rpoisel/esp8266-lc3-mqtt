#ifndef LC_PROT_LCFU___MQTT_CONNECTED__C
#define LC_PROT_LCFU___MQTT_CONNECTED__C

#include <lcfu___mqtt_connected.h>
#include <mqtt.h>

/*                            Functions                        */
void  lcfu___MQTT_CONNECTED(LC_TD_Function_MQTT_CONNECTED* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_this->LC_VD_MQTT_CONNECTED = mqtt_connected() ? LC_EL_true : LC_EL_false;
}

#endif
