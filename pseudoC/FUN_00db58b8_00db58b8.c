// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db58b8
// Entry Point: 00db58b8
// Size: 300 bytes
// Signature: undefined FUN_00db58b8(void)


ulong FUN_00db58b8(undefined8 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  if (param_3 == 3) {
    param_3 = *(int *)(param_1 + 8);
  }
  if (param_3 == 0) {
    iVar1 = *(int *)(**(long **)*param_1 + 0x4d8);
    iVar2 = png_gamma_significant(iVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 8) = 4;
      return (ulong)(param_2 * 0x101);
    }
    if ((iVar1 < 100000) &&
       ((iVar1 == 0 || (iVar2 = png_gamma_significant((iVar1 * 0xb + 2) / 5), iVar2 == 0)))) {
      *(undefined4 *)(param_1 + 8) = 1;
      return (ulong)(ushort)(&png_sRGB_table)[param_2];
    }
    *(undefined4 *)(param_1 + 8) = 3;
    uVar3 = png_reciprocal(iVar1);
    param_3 = *(int *)(param_1 + 8);
    *(undefined4 *)((long)param_1 + 0x44) = uVar3;
  }
  if (3 < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
    png_error(**(undefined8 **)*param_1,"unexpected encoding (internal error)");
  }
                    /* WARNING: Could not recover jumptable at 0x00db5900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&UNK_00db5904 + (ulong)(byte)(&DAT_00549c6a)[param_3 - 1U] * 4))();
  return uVar4;
}


