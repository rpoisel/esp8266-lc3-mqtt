#ifndef LC_PROT_LCFU___WIFI_CONNECTED__C
#define LC_PROT_LCFU___WIFI_CONNECTED__C

#include <lcfu___wifi_connected.h>
#include <wifi.h>

/*                            Functions                        */
void  lcfu___WIFI_CONNECTED(LC_TD_Function_WIFI_CONNECTED* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_this->LC_VD_WIFI_CONNECTED = wifi_connected() == WIFI_CONNECTED ? LC_EL_true : LC_EL_false;
}

#endif
