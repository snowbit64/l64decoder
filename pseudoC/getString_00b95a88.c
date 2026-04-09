// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getString
// Entry Point: 00b95a88
// Size: 52 bytes
// Signature: undefined __thiscall getString(Properties * this, char * param_1, char * param_2)


/* Properties::getString(char const*, char const*) */

char * __thiscall Properties::getString(Properties *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar1 != (char *)0x0) {
    param_2 = pcVar1;
  }
  return param_2;
}


