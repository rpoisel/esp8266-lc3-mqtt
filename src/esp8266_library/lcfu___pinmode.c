#ifndef LC_PROT_LCFU___PINMODE__C
#define LC_PROT_LCFU___PINMODE__C

#include <lcfu___pinmode.h>
#include <Arduino.h>

/*                            Functions                        */
void  lcfu___PINMODE(LC_TD_Function_PINMODE* LC_this, LC_TD_USINT LC_VD_PIN, LC_TD_BOOL LC_VD_DIRECTION, struct _lcoplck_epdb_1_impl* pEPDB)
{
  pinMode(LC_VD_PIN, LC_VD_DIRECTION == LC_EL_true ? OUTPUT : INPUT);
}

#endif
