// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d331fc
// Entry Point: 00d331fc
// Size: 336 bytes
// Signature: undefined FUN_00d331fc(void)


uint FUN_00d331fc(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x2a0);
  if (*(long *)(lVar9 + 0x160) == 0) {
    puVar3 = (undefined4 *)(**(code **)(param_1 + 0x18))((ulong)*(uint *)(param_1 + 0x378) << 2);
    *(undefined4 **)(lVar9 + 0x160) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    *puVar3 = 0;
    uVar1 = *(uint *)(lVar9 + 0x158);
    uVar4 = *(uint *)(lVar9 + 0x154);
    lVar2 = *(long *)(lVar9 + 0x148);
    if (uVar4 <= uVar1) goto LAB_00d33288;
  }
  else {
    uVar1 = *(uint *)(lVar9 + 0x158);
    uVar4 = *(uint *)(lVar9 + 0x154);
    lVar2 = *(long *)(lVar9 + 0x148);
    if (uVar4 <= uVar1) {
LAB_00d33288:
      if (lVar2 == 0) {
        lVar2 = (**(code **)(param_1 + 0x18))(0x400);
        if (lVar2 == 0) {
          return 0xffffffff;
        }
        iVar5 = 0x20;
      }
      else {
        lVar2 = (**(code **)(param_1 + 0x20))(lVar2,(ulong)(uVar4 << 1) << 5);
        if (lVar2 == 0) {
          return 0xffffffff;
        }
        iVar5 = *(int *)(lVar9 + 0x154) << 1;
      }
      uVar1 = *(uint *)(lVar9 + 0x158);
      *(int *)(lVar9 + 0x154) = iVar5;
      *(long *)(lVar9 + 0x148) = lVar2;
      iVar5 = *(int *)(lVar9 + 0x15c);
      *(uint *)(lVar9 + 0x158) = uVar1 + 1;
      goto joined_r0x00d332dc;
    }
  }
  iVar5 = *(int *)(lVar9 + 0x15c);
  *(uint *)(lVar9 + 0x158) = uVar1 + 1;
joined_r0x00d332dc:
  if (iVar5 != 0) {
    lVar8 = (long)*(int *)(*(long *)(lVar9 + 0x160) + (long)(iVar5 + -1) * 4);
    lVar9 = lVar2 + lVar8 * 0x20;
    puVar7 = (uint *)(lVar9 + 0x14);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      *(uint *)(lVar2 + (long)(int)uVar4 * 0x20 + 0x1c) = uVar1;
    }
    piVar6 = (int *)(lVar9 + 0x18);
    iVar5 = *piVar6;
    if (iVar5 == 0) {
      *(uint *)(lVar2 + lVar8 * 0x20 + 0x10) = uVar1;
    }
    *puVar7 = uVar1;
    *piVar6 = iVar5 + 1;
    lVar2 = lVar2 + (long)(int)uVar1 * 0x20;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    return uVar1;
  }
  lVar2 = lVar2 + (long)(int)uVar1 * 0x20;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  return uVar1;
}


