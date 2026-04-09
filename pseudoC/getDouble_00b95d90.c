// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDouble
// Entry Point: 00b95d90
// Size: 64 bytes
// Signature: undefined __thiscall getDouble(Properties * this, char * param_1, double param_2)


/* Properties::getDouble(char const*, double) */

undefined  [16] __thiscall Properties::getDouble(Properties *this,char *param_1,double param_2)

{
  char *__nptr;
  undefined auVar1 [16];
  
  __nptr = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (__nptr != (char *)0x0) {
    param_2 = strtod(__nptr,(char **)0x0);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1;
}


