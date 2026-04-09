// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b47cc
// Entry Point: 007b47cc
// Size: 92 bytes
// Signature: undefined FUN_007b47cc(void)


void FUN_007b47cc(long *param_1,uint *param_2)

{
  CharacterSet::setTime((CharacterSet *)param_1,*param_2,(float)param_2[4]);
  if ((param_2[10] == 3) && (*(char *)(param_2 + 8) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x007b4818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(0,param_1);
    return;
  }
  return;
}


