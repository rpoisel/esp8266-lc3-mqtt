#ifndef LC_PROT_LCFU___MQTT_PUBLISH__C
#define LC_PROT_LCFU___MQTT_PUBLISH__C

#include <lcfu___mqtt_publish.h>

#include <string.h>

#include <mqtt.h>


/*                            Functions                        */
void  lcfu___MQTT_PUBLISH(LC_TD_Function_MQTT_PUBLISH* LC_this, LcCgChar LC_VD_TOPIC[65], LcCgChar LC_VD_PAYLOAD[65], struct _lcoplck_epdb_1_impl* pEPDB)
{
	LC_this->LC_VD_ENO = mqtt_publish(LC_VD_TOPIC, LC_VD_PAYLOAD, strlen(LC_VD_PAYLOAD)) == MQTT_RC_OK ? LC_EL_true : LC_EL_false;
}

#endif
