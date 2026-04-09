// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUIntAttribute
// Entry Point: 00b82e90
// Size: 56 bytes
// Signature: undefined __thiscall getUIntAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, uint param_4)


/* AttributedProperties::getUIntAttribute(char const*, char const*, char const*, unsigned int) */

ulong __thiscall
AttributedProperties::getUIntAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (pcVar1 != (char *)0x0) {
    uVar2 = StringUtil::strtouint(pcVar1);
    return uVar2;
  }
  return (ulong)param_4;
}


