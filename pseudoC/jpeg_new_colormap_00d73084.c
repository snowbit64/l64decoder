// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_new_colormap
// Entry Point: 00d73084
// Size: 156 bytes
// Signature: undefined jpeg_new_colormap(void)


void jpeg_new_colormap(long *param_1)

{
  code **ppcVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1[0x44];
  if (*(int *)((long)param_1 + 0x24) != 0xcf) {
    lVar2 = *param_1;
    *(int *)(lVar2 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar1 = (code **)*param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x15;
    (**ppcVar1)(param_1);
  }
  if (((*(char *)((long)param_1 + 0x62) != '\0') && (*(char *)((long)param_1 + 0x71) != '\0')) &&
     (param_1[0x12] != 0)) {
    lVar2 = *(long *)(lVar4 + 0x28);
    pcVar3 = *(code **)(lVar2 + 0x18);
    param_1[0x4e] = lVar2;
    (*pcVar3)(param_1);
    *(undefined *)(lVar4 + 0x10) = 0;
    return;
  }
  ppcVar1 = (code **)*param_1;
  *(undefined4 *)(ppcVar1 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x00d7311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**ppcVar1)(param_1);
  return;
}


