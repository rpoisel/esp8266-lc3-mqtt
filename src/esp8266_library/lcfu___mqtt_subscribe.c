#ifndef LC_PROT_LCFU___MQTT_SUBSCRIBE__C
#define LC_PROT_LCFU___MQTT_SUBSCRIBE__C

#include <lcfu___mqtt_subscribe.h>
#include <mqtt.h>

/*                            Functions                        */
void  lcfu___MQTT_SUBSCRIBE(LC_TD_Function_MQTT_SUBSCRIBE* LC_this, LcCgChar LC_VD_TOPIC[65], struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* mqtt_rc mqtt_subscribe(const char* topic); */
	LC_this->LC_VD_ENO = mqtt_subscribe(LC_VD_TOPIC) == MQTT_RC_OK ? LC_EL_true : LC_EL_false;
}

#endif
