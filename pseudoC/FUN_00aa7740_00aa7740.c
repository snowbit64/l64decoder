// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00aa7740
// Entry Point: 00aa7740
// Size: 204 bytes
// Signature: undefined FUN_00aa7740(void)


void FUN_00aa7740(int *param_1,int *param_2,int param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8)

{
  if ((param_8 >> 6 & 2 | param_7 >> 7 & 1) == 3) {
    *param_1 = param_3 << 4;
    param_1[1] = param_5 << 4;
    param_1[2] = (param_7 & 0x7f) << 5;
    param_1[3] = 0x780;
    *param_2 = param_4 << 4;
    param_2[1] = param_6 << 4;
    param_2[2] = (param_8 & 0x7f) << 5;
    param_2[3] = 0x780;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00aa77f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00aa77fc +
            (ulong)(byte)(&DAT_00520dce)[param_6 >> 5 & 4 | param_5 >> 6 & 2 | param_4 >> 7 & 1] * 4
            ))(param_1,param_2,param_7 >> 6 & 1,param_8 >> 5 & 1);
  return;
}


