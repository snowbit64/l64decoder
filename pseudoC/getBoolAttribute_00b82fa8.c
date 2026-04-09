// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoolAttribute
// Entry Point: 00b82fa8
// Size: 80 bytes
// Signature: undefined __thiscall getBoolAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, bool * param_4)


/* AttributedProperties::getBoolAttribute(char const*, char const*, char const*, bool&) */

bool __thiscall
AttributedProperties::getBoolAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,bool *param_4)

{
  bool bVar1;
  int iVar2;
  char *__s2;
  
  __s2 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (__s2 == (char *)0x0) {
    *param_4 = false;
    bVar1 = false;
  }
  else {
    *param_4 = true;
    iVar2 = strcasecmp("true",__s2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


