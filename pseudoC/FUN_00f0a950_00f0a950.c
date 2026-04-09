// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0a950
// Entry Point: 00f0a950
// Size: 340 bytes
// Signature: undefined FUN_00f0a950(void)


void FUN_00f0a950(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_2 + 5 < 0 != SCARRY4(param_2,5)) {
                    /* WARNING: Subroutine does not return */
    FUN_00f1007c(param_1);
  }
  uVar1 = param_2 + 5;
  lVar11 = *(long *)(param_1 + 0x30);
  lVar2 = FUN_00f10724(param_1,lVar11,(long)*(int *)(param_1 + 0x48) << 4,(ulong)uVar1 << 4,
                       *(undefined *)(param_1 + 2));
  lVar9 = (long)*(int *)(param_1 + 0x48);
  *(long *)(param_1 + 0x30) = lVar2;
  if (*(int *)(param_1 + 0x48) < (int)uVar1) {
    uVar6 = (int)uVar1 - lVar9;
    lVar4 = lVar9;
    if (1 < uVar6) {
      uVar8 = uVar6 & 0xfffffffffffffffe;
      lVar4 = uVar8 + lVar9;
      puVar7 = (undefined4 *)(lVar2 + lVar9 * 0x10 + 0x1c);
      uVar10 = uVar8;
      do {
        uVar10 = uVar10 - 2;
        puVar7[-4] = 0;
        *puVar7 = 0;
        puVar7 = puVar7 + 8;
      } while (uVar10 != 0);
      if (uVar6 == uVar8) goto LAB_00f0aa00;
    }
    lVar9 = (int)uVar1 - lVar4;
    puVar7 = (undefined4 *)(lVar2 + lVar4 * 0x10 + 0xc);
    do {
      lVar9 = lVar9 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 4;
    } while (lVar9 != 0);
  }
LAB_00f0aa00:
  *(uint *)(param_1 + 0x48) = uVar1;
  *(long *)(param_1 + 0x28) = lVar2 + (long)param_2 * 0x10;
  lVar9 = *(long *)(param_1 + 0x60);
  *(long *)(param_1 + 8) = lVar2 + (*(long *)(param_1 + 8) - lVar11);
  for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
    *(long *)(lVar9 + 8) = lVar2 + (*(long *)(lVar9 + 8) - lVar11);
  }
  plVar5 = *(long **)(param_1 + 0x20);
  for (plVar3 = *(long **)(param_1 + 0x40); plVar3 <= plVar5; plVar3 = plVar3 + 5) {
    plVar3[1] = lVar2 + (plVar3[1] - lVar11);
    plVar3[2] = lVar2 + (plVar3[2] - lVar11);
    *plVar3 = lVar2 + (*plVar3 - lVar11);
  }
  *(long *)(param_1 + 0x10) = lVar2 + (*(long *)(param_1 + 0x10) - lVar11);
  return;
}


