// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIntAttribute
// Entry Point: 00b82e18
// Size: 56 bytes
// Signature: undefined __thiscall getIntAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, int param_4)


/* AttributedProperties::getIntAttribute(char const*, char const*, char const*, int) */

ulong __thiscall
AttributedProperties::getIntAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (pcVar1 != (char *)0x0) {
    uVar2 = StringUtil::strtoint(pcVar1);
    return uVar2;
  }
  return (ulong)(uint)param_4;
}


