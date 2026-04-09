// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _ve_envelope_mark
// Entry Point: 00e08130
// Size: 280 bytes
// Signature: undefined _ve_envelope_mark(void)


bool _ve_envelope_mark(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x30);
  lVar3 = *(long *)(param_1 + 0x50);
  lVar2 = plVar6[*(long *)(param_1 + 0x40)];
  lVar4 = lVar2 + 3;
  if (-1 < lVar2) {
    lVar4 = lVar2;
  }
  lVar4 = lVar4 >> 2;
  lVar2 = **(long **)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar7 = *plVar6;
    lVar5 = lVar7 + 3;
    if (-1 < lVar7) {
      lVar5 = lVar7;
    }
    lVar8 = *(long *)(lVar2 + 0x108);
    lVar7 = lVar3 - (lVar4 + (lVar5 >> 2));
    lVar4 = lVar4 + lVar3 + (lVar5 >> 2);
    if (lVar8 < lVar7) goto LAB_00e081f0;
  }
  else {
    lVar8 = plVar6[*(long *)(param_1 + 0x38)];
    lVar7 = plVar6[*(long *)(param_1 + 0x48)];
    lVar5 = lVar8 + 3;
    if (-1 < lVar8) {
      lVar5 = lVar8;
    }
    lVar1 = lVar7 + 3;
    if (-1 < lVar7) {
      lVar1 = lVar7;
    }
    lVar8 = *(long *)(lVar2 + 0x108);
    lVar7 = lVar3 - (lVar4 + (lVar5 >> 2));
    lVar4 = lVar4 + lVar3 + (lVar1 >> 2);
    if (lVar8 < lVar7) goto LAB_00e081f0;
  }
  if (lVar8 < lVar4) {
    return true;
  }
LAB_00e081f0:
  lVar5 = (long)*(int *)(lVar2 + 8);
  lVar3 = 0;
  if (lVar5 != 0) {
    lVar3 = lVar7 / lVar5;
  }
  lVar7 = 0;
  if (lVar5 != 0) {
    lVar7 = lVar4 / lVar5;
  }
  if (lVar7 <= lVar3) {
    return false;
  }
  if (*(int *)(*(long *)(lVar2 + 0xf0) + lVar3 * 4) != 0) {
    return true;
  }
  do {
    lVar3 = lVar3 + 1;
    if (lVar7 == lVar3) break;
  } while (*(int *)(*(long *)(lVar2 + 0xf0) + lVar3 * 4) == 0);
  return lVar3 < lVar7;
}


