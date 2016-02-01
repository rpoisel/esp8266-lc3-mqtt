#ifndef LC_PROT_LCFU___DIGITALREAD__C
#define LC_PROT_LCFU___DIGITALREAD__C

#include <lcfu___digitalread.h>
#include <Arduino.h>

/*                            Functions                        */
void  lcfu___DIGITALREAD(LC_TD_Function_DIGITALREAD* LC_this, LC_TD_USINT LC_VD_PIN, struct _lcoplck_epdb_1_impl* pEPDB)
{
	LC_this->LC_VD_DIGITALREAD = digitalRead(LC_VD_PIN) == LOW;
}

#endif
