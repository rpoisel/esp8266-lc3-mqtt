#ifndef LC_PROT_LCFU___MQTT_RECEIVE__C
#define LC_PROT_LCFU___MQTT_RECEIVE__C

#include <lcfu___mqtt_receive.h>
#include <mqtt.h>

/*                            Functions                        */
void  lcfu___MQTT_RECEIVE(LC_TD_Function_MQTT_RECEIVE* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
	size_t payload_len = 0;
  /* mqtt_rc mqtt_receive(char* topic, size_t max_topic_len, byte* payload, size_t* payload_len, size_t max_payload_len); */
	LC_this->LC_VD_ENO = mqtt_receive(LC_this->LC_VD_TOPIC, 64, LC_this->LC_VD_PAYLOAD, &payload_len, 64) == MQTT_RC_OK ? LC_EL_true : LC_EL_false;
	LC_this->LC_VD_PAYLOAD[payload_len] = 0;
}

#endif
