// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unzGetGlobalComment
// Entry Point: 00e32a90
// Size: 220 bytes
// Signature: undefined unzGetGlobalComment(void)


ulong unzGetGlobalComment(long param_1,undefined *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  uVar3 = *(ulong *)(param_1 + 0x70);
  if (param_3 <= *(ulong *)(param_1 + 0x70)) {
    uVar3 = param_3;
  }
  lVar1 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x60),*(long *)(param_1 + 0x98) + 0x16,0);
  if (lVar1 == 0) {
    if (uVar3 == 0) {
      if (param_2 == (undefined *)0x0) goto LAB_00e32ad8;
    }
    else {
      *param_2 = 0;
      uVar2 = (**(code **)(param_1 + 8))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x60),param_2,
                         uVar3);
      if (uVar2 != uVar3) {
        return 0xffffffff;
      }
    }
    if (*(ulong *)(param_1 + 0x70) < param_3) {
      param_2[*(ulong *)(param_1 + 0x70)] = 0;
      return uVar3 & 0xffffffff;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
LAB_00e32ad8:
  return uVar3 & 0xffffffff;
}


