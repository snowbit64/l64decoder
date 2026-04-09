// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_save_markers
// Entry Point: 00d71de4
// Size: 212 bytes
// Signature: undefined jpeg_save_markers(void)


void jpeg_save_markers(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  code **ppcVar4;
  code *pcVar5;
  
  lVar2 = *(long *)(param_1[1] + 0x60) + -0x20;
  uVar3 = (uint)lVar2;
  if ((long)(ulong)param_3 <= lVar2) {
    uVar3 = param_3;
  }
  lVar2 = param_1[0x49];
  if (uVar3 == 0) {
    pcVar5 = FUN_00d71b44;
    if (param_2 != 0xee && param_2 != 0xe0) {
      pcVar5 = FUN_00d71a3c;
    }
  }
  else {
    if ((param_2 == 0xe0) && (uVar3 < 0xe)) {
      uVar3 = 0xe;
      pcVar5 = FUN_00d71eb8;
      goto LAB_00d71e84;
    }
    uVar1 = 0xc;
    if (0xb < uVar3 || param_2 != 0xee) {
      uVar1 = uVar3;
    }
    uVar3 = uVar1;
    pcVar5 = FUN_00d71eb8;
  }
  if (param_2 == 0xfe) {
    *(code **)(lVar2 + 0x28) = pcVar5;
    *(uint *)(lVar2 + 0xb0) = uVar3;
    return;
  }
  if ((param_2 & 0xfffffff0) != 0xe0) {
    lVar2 = *param_1;
    *(uint *)(lVar2 + 0x2c) = param_2;
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x46;
                    /* WARNING: Could not recover jumptable at 0x00d71eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**ppcVar4)();
    return;
  }
LAB_00d71e84:
  *(code **)(lVar2 + (ulong)(param_2 - 0xe0) * 8 + 0x30) = pcVar5;
  *(uint *)(lVar2 + (ulong)(param_2 - 0xe0) * 4 + 0xb4) = uVar3;
  return;
}


