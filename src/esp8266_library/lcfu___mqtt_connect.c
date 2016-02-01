#ifndef LC_PROT_LCFU___MQTT_CONNECT__C
#define LC_PROT_LCFU___MQTT_CONNECT__C

#include <lcfu___mqtt_connect.h>
#include <mqtt.h>

/*                            Functions                        */
void  lcfu___MQTT_CONNECT(LC_TD_Function_MQTT_CONNECT* LC_this, LcCgChar LC_VD_CLIENTID[65], struct _lcoplck_epdb_1_impl* pEPDB)
{
	mqtt_connect(LC_VD_CLIENTID);
}

#endif
