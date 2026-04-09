// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBool
// Entry Point: 00b95e74
// Size: 36 bytes
// Signature: undefined __thiscall setBool(Properties * this, char * param_1, bool param_2)


/* Properties::setBool(char const*, bool) */

void __thiscall Properties::setBool(Properties *this,char *param_1,bool param_2)

{
  char *pcVar1;
  
  pcVar1 = "true";
  if (!param_2) {
    pcVar1 = "false";
  }
                    /* WARNING: Could not recover jumptable at 0x00b95e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,param_1,pcVar1);
  return;
}


