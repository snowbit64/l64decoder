// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27194
// Entry Point: 00f27194
// Size: 332 bytes
// Signature: undefined FUN_00f27194(void)


void FUN_00f27194(long param_1,int param_2,uint param_3)

{
  short sVar1;
  undefined8 *puVar2;
  uint uVar3;
  long **pplVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  sVar1 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar1 + 1;
  if ((ushort)(sVar1 + 1U) < 200) {
    lVar9 = *(long *)(param_1 + 8);
    if (0x140 < *(long *)(param_1 + 0x28) - lVar9) goto LAB_00f271dc;
LAB_00f2721c:
    FUN_00f0ab24(param_1,0x14);
    lVar9 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x20);
    plVar8 = (long *)(lVar9 + (long)param_2 * -0x10 + -0x10);
    if (lVar5 == *(long *)(param_1 + 0x38)) goto LAB_00f27244;
  }
  else {
    FUN_00f0ac14(param_1);
    lVar9 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) - lVar9 < 0x141) goto LAB_00f2721c;
LAB_00f271dc:
    lVar5 = *(long *)(param_1 + 0x20);
    plVar8 = (long *)(lVar9 + (long)param_2 * -0x10 + -0x10);
    if (lVar5 == *(long *)(param_1 + 0x38)) {
LAB_00f27244:
      pplVar4 = (long **)FUN_00f0ab3c(param_1);
      goto LAB_00f2724c;
    }
  }
  pplVar4 = (long **)(lVar5 + 0x28);
  *(long ***)(param_1 + 0x20) = pplVar4;
LAB_00f2724c:
  *pplVar4 = plVar8 + 2;
  pplVar4[1] = plVar8;
  pplVar4[2] = (long *)(lVar9 + 0x140);
  pplVar4[3] = (long *)0x0;
  *(uint *)(pplVar4 + 4) = ~param_3 >> 0x1f;
  *(undefined4 *)((long)pplVar4 + 0x24) = 0;
  *(long **)(param_1 + 0x10) = plVar8 + 2;
  uVar3 = (**(code **)(*plVar8 + 0x18))(param_1);
  lVar9 = *(long *)(param_1 + 0x20);
  plVar8 = (long *)(lVar9 + -0x28);
  if (-1 < (int)param_3) {
    if ((int)uVar3 < 1) {
      *(undefined4 *)(*plVar8 + (ulong)param_3 * 0x10 + 0xc) = 0;
    }
    else {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * -0x10);
      uVar7 = *puVar6;
      puVar2 = (undefined8 *)(*plVar8 + (ulong)param_3 * 0x10);
      puVar2[1] = puVar6[1];
      *puVar2 = uVar7;
    }
  }
  *(long **)(param_1 + 0x20) = plVar8;
  uVar7 = *(undefined8 *)(lVar9 + -0x28);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar9 + -0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + -1;
  return;
}


