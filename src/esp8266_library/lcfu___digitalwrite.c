#ifndef LC_PROT_LCFU___DIGITALWRITE__C
#define LC_PROT_LCFU___DIGITALWRITE__C

#include <lcfu___digitalwrite.h>
#include <Arduino.h>

/*                            Functions                        */
void  lcfu___DIGITALWRITE(LC_TD_Function_DIGITALWRITE* LC_this, LC_TD_USINT LC_VD_PIN, LC_TD_BOOL LC_VD_VALUE, struct _lcoplck_epdb_1_impl* pEPDB)
{
  digitalWrite(LC_VD_PIN, LC_VD_VALUE == LC_EL_true ? HIGH : LOW);
}

#endif
