// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInt
// Entry Point: 00b95b04
// Size: 64 bytes
// Signature: undefined __thiscall getInt(Properties * this, char * param_1, int param_2)


/* Properties::getInt(char const*, int) */

ulong __thiscall Properties::getInt(Properties *this,char *param_1,int param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar1 != (char *)0x0) {
    uVar2 = StringUtil::strtoint(pcVar1);
    return uVar2;
  }
  return (ulong)(uint)param_2;
}


