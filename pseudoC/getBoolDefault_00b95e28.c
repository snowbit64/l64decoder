// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoolDefault
// Entry Point: 00b95e28
// Size: 76 bytes
// Signature: undefined __thiscall getBoolDefault(Properties * this, char * param_1, bool param_2)


/* Properties::getBoolDefault(char const*, bool) */

byte __thiscall Properties::getBoolDefault(Properties *this,char *param_1,bool param_2)

{
  int iVar1;
  char *__s2;
  
  __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (__s2 != (char *)0x0) {
    iVar1 = strcasecmp("true",__s2);
    param_2 = iVar1 == 0;
  }
  return param_2 & 1;
}


