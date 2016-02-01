#ifndef LC_PROT_LCFU___WIFI_SETUP_CLIENT__C
#define LC_PROT_LCFU___WIFI_SETUP_CLIENT__C

#include <lcfu___wifi_setup_client.h>
#include <wifi.h>

/*                            Functions                        */
void  lcfu___WIFI_SETUP_CLIENT(LC_TD_Function_WIFI_SETUP_CLIENT* LC_this, LcCgChar LC_VD_SSID[65], LcCgChar LC_VD_PASSWORD[65], struct _lcoplck_epdb_1_impl* pEPDB)
{
  wifi_setup_client(LC_VD_SSID, LC_VD_PASSWORD);
}

#endif
