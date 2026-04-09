// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUIntAttribute
// Entry Point: 00b82e50
// Size: 64 bytes
// Signature: undefined __thiscall getUIntAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, bool * param_4)


/* AttributedProperties::getUIntAttribute(char const*, char const*, char const*, bool&) */

void __thiscall
AttributedProperties::getUIntAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,bool *param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (pcVar1 != (char *)0x0) {
    *param_4 = true;
    StringUtil::strtouint(pcVar1);
    return;
  }
  *param_4 = false;
  return;
}


