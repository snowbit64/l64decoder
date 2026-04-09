// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectEnumerateEntryPointDescriptorBindings
// Entry Point: 00adc5c4
// Size: 312 bytes
// Signature: undefined spvReflectEnumerateEntryPointDescriptorBindings(void)


undefined8
spvReflectEnumerateEntryPointDescriptorBindings
          (long param_1,char *param_2,uint *param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_1 == 0) {
    return 5;
  }
  if (param_3 == (uint *)0x0) {
    return 5;
  }
  if ((param_2 != (char *)0x0) &&
     (uVar12 = (ulong)*(uint *)(param_1 + 0x14), *(uint *)(param_1 + 0x14) != 0)) {
    plVar11 = (long *)(*(long *)(param_1 + 0x18) + 0x58);
    do {
      iVar6 = strcmp((char *)plVar11[-0xb],param_2);
      if (iVar6 == 0) {
        uVar2 = *(uint *)(param_1 + 0x40);
        if (uVar2 != 0) {
          uVar12 = 0;
          uVar8 = 0;
          uVar3 = *(uint *)(plVar11 + -1);
          bVar5 = true;
          goto LAB_00adc670;
        }
        uVar8 = 0;
        goto LAB_00adc6d0;
      }
      plVar11 = plVar11 + 0x11;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return 8;
LAB_00adc670:
  do {
    uVar10 = 0;
    uVar9 = *(uint *)(*(long *)(param_1 + 0x48) + uVar12 * 0x248);
    uVar7 = (ulong)uVar3;
    do {
      if (uVar7 < uVar10 || uVar7 - uVar10 == 0) goto LAB_00adc660;
      uVar1 = uVar10 + (uVar7 - uVar10 >> 1);
      uVar4 = *(uint *)(*plVar11 + uVar1 * 4);
      if (uVar4 < uVar9) {
        uVar10 = uVar1 + 1;
        uVar1 = uVar7;
      }
      uVar7 = uVar1;
    } while (uVar4 != uVar9);
    if (param_4 == 0) {
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = *param_3;
      if (uVar9 <= uVar8) {
        if (bVar5) {
          return 7;
        }
        goto LAB_00adc6d8;
      }
      *(ulong *)(param_4 + (ulong)uVar8 * 8) = *(long *)(param_1 + 0x48) + uVar12 * 0x248;
      uVar8 = uVar8 + 1;
    }
LAB_00adc660:
    uVar12 = uVar12 + 1;
    bVar5 = uVar12 < uVar2;
  } while (uVar12 != uVar2);
LAB_00adc6d0:
  if (param_4 == 0) {
    *param_3 = uVar8;
  }
  else {
    uVar9 = *param_3;
LAB_00adc6d8:
    if (uVar8 != uVar9) {
      return 7;
    }
  }
  return 0;
}


