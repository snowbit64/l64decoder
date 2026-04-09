// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBool
// Entry Point: 00b95dd0
// Size: 88 bytes
// Signature: undefined __thiscall getBool(Properties * this, char * param_1, bool * param_2)


/* Properties::getBool(char const*, bool&) */

bool __thiscall Properties::getBool(Properties *this,char *param_1,bool *param_2)

{
  bool bVar1;
  int iVar2;
  char *__s2;
  
  __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (__s2 == (char *)0x0) {
    *param_2 = false;
    bVar1 = false;
  }
  else {
    *param_2 = true;
    iVar2 = strcasecmp("true",__s2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


