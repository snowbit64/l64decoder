// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUInt64
// Entry Point: 00b95bcc
// Size: 72 bytes
// Signature: undefined __thiscall getUInt64(Properties * this, char * param_1, bool * param_2)


/* Properties::getUInt64(char const*, bool&) */

void __thiscall Properties::getUInt64(Properties *this,char *param_1,bool *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar1 != (char *)0x0) {
    *param_2 = true;
    StringUtil::strtouint64(pcVar1);
    return;
  }
  *param_2 = false;
  return;
}


