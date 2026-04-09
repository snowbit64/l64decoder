// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDouble
// Entry Point: 00b95d44
// Size: 76 bytes
// Signature: undefined __thiscall getDouble(Properties * this, char * param_1, bool * param_2)


/* Properties::getDouble(char const*, bool&) */

double __thiscall Properties::getDouble(Properties *this,char *param_1,bool *param_2)

{
  char *__nptr;
  double dVar1;
  
  __nptr = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (__nptr == (char *)0x0) {
    dVar1 = 0.0;
    *param_2 = false;
  }
  else {
    *param_2 = true;
    dVar1 = strtod(__nptr,(char **)0x0);
  }
  return dVar1;
}


