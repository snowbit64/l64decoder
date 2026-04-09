// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUInt64
// Entry Point: 00b95c14
// Size: 64 bytes
// Signature: undefined __thiscall getUInt64(Properties * this, char * param_1, ulonglong param_2)


/* Properties::getUInt64(char const*, unsigned long long) */

ulonglong __thiscall Properties::getUInt64(Properties *this,char *param_1,ulonglong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar1 != (char *)0x0) {
    uVar2 = StringUtil::strtouint64(pcVar1);
    return uVar2;
  }
  return param_2;
}


