// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectGetEntryPointDescriptorBinding
// Entry Point: 00add1dc
// Size: 300 bytes
// Signature: undefined spvReflectGetEntryPointDescriptorBinding(void)


uint * spvReflectGetEntryPointDescriptorBinding
                 (long param_1,char *param_2,int param_3,int param_4,int *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  if (((param_1 != 0) && (param_2 != (char *)0x0)) &&
     (uVar11 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
    plVar10 = (long *)(*(long *)(param_1 + 0x18) + 0x58);
    do {
      iVar5 = strcmp((char *)plVar10[-0xb],param_2);
      if (iVar5 == 0) {
        if (*(uint *)(param_1 + 0x40) == 0) goto LAB_00add2f0;
        uVar11 = 0;
        lVar8 = *(long *)(param_1 + 0x48);
        goto LAB_00add290;
      }
      plVar10 = plVar10 + 0x11;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  puVar6 = (uint *)0x0;
  if (param_5 == (int *)0x0) {
    return (uint *)0x0;
  }
  iVar5 = 8;
  goto LAB_00add248;
  while (uVar11 = uVar11 + 1, uVar11 != *(uint *)(param_1 + 0x40)) {
LAB_00add290:
    puVar6 = (uint *)(lVar8 + uVar11 * 0x248);
    uVar1 = (ulong)*(uint *)(plVar10 + -1);
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      uVar7 = uVar1;
      if (uVar7 < uVar9 || uVar7 - uVar9 == 0) break;
      uVar1 = uVar9 + (uVar7 - uVar9 >> 1);
      uVar3 = *(uint *)(*plVar10 + uVar1 * 4);
      uVar2 = uVar9;
      if (uVar3 < *puVar6) {
        uVar2 = uVar1 + 1;
        uVar1 = uVar7;
      }
    } while (uVar3 != *puVar6);
    if ((*(int *)(lVar8 + uVar11 * 0x248 + 0x10) == param_3) &&
       (bVar4 = *(int *)(lVar8 + uVar11 * 0x248 + 0x18) != param_4,
       (!bVar4 && uVar9 <= uVar7) && (bVar4 || uVar7 != uVar9))) goto LAB_00add2f4;
  }
LAB_00add2f0:
  puVar6 = (uint *)0x0;
LAB_00add2f4:
  if (param_5 == (int *)0x0) {
    return puVar6;
  }
  iVar5 = (uint)(puVar6 == (uint *)0x0) << 3;
LAB_00add248:
  *param_5 = iVar5;
  return puVar6;
}


