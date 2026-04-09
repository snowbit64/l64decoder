// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUInt
// Entry Point: 00b95b8c
// Size: 64 bytes
// Signature: undefined __thiscall getUInt(Properties * this, char * param_1, uint param_2)


/* Properties::getUInt(char const*, unsigned int) */

ulong __thiscall Properties::getUInt(Properties *this,char *param_1,uint param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar1 != (char *)0x0) {
    uVar2 = StringUtil::strtouint(pcVar1);
    return uVar2;
  }
  return (ulong)param_2;
}


