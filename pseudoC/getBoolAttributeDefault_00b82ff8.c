// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBoolAttributeDefault
// Entry Point: 00b82ff8
// Size: 68 bytes
// Signature: undefined __thiscall getBoolAttributeDefault(AttributedProperties * this, char * param_1, char * param_2, char * param_3, bool param_4)


/* AttributedProperties::getBoolAttributeDefault(char const*, char const*, char const*, bool) */

byte __thiscall
AttributedProperties::getBoolAttributeDefault
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,bool param_4)

{
  int iVar1;
  char *__s2;
  
  __s2 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (__s2 != (char *)0x0) {
    iVar1 = strcasecmp("true",__s2);
    param_4 = iVar1 == 0;
  }
  return param_4 & 1;
}


