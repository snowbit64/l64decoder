// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f23068
// Entry Point: 00f23068
// Size: 220 bytes
// Signature: undefined FUN_00f23068(void)


void FUN_00f23068(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 8);
  iVar3 = *(int *)(lVar2 + 0x20);
  puVar8 = *(undefined8 **)(lVar2 + 8);
  if ((iVar3 != 0 && param_2 <= uVar5) && (iVar3 == 0 || uVar5 != param_2)) {
    uVar6 = param_2 + 0x10;
    puVar7 = puVar8;
    do {
      uVar11 = *(undefined8 *)(uVar6 - 0x10);
      puVar8 = puVar7 + 2;
      iVar3 = iVar3 + -1;
      puVar7[1] = *(undefined8 *)(uVar6 - 8);
      *puVar7 = uVar11;
      if (iVar3 == 0) break;
      bVar1 = uVar6 < uVar5;
      uVar6 = uVar6 + 0x10;
      puVar7 = puVar8;
    } while (bVar1);
  }
  puVar7 = puVar8;
  if (0 < iVar3) {
    if (iVar3 - 1U != 0) {
      uVar5 = (ulong)(iVar3 - 1U) + 1;
      uVar10 = uVar5 & 0x1fffffffe;
      iVar3 = iVar3 - (int)uVar10;
      puVar7 = puVar8 + uVar10 * 2;
      puVar9 = (undefined4 *)((long)puVar8 + 0x1c);
      uVar6 = uVar10;
      do {
        uVar6 = uVar6 - 2;
        puVar9[-4] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 8;
      } while (uVar6 != 0);
      puVar8 = puVar7;
      if (uVar5 == uVar10) goto LAB_00f23120;
    }
    uVar4 = iVar3 + 1;
    do {
      *(undefined4 *)((long)puVar8 + 0xc) = 0;
      uVar4 = uVar4 - 1;
      puVar7 = puVar8 + 2;
      puVar8 = puVar8 + 2;
    } while (1 < uVar4);
  }
LAB_00f23120:
  iVar3 = *(int *)(lVar2 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2 + -0x28;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + -0x28);
  if (iVar3 != -1) {
    puVar7 = *(undefined8 **)(lVar2 + -0x18);
  }
  *(undefined8 **)(param_1 + 8) = puVar7;
  return;
}


