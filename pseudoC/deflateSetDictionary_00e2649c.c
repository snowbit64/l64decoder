// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateSetDictionary
// Entry Point: 00e2649c
// Size: 568 bytes
// Signature: undefined deflateSetDictionary(void)


undefined8 deflateSetDictionary(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  size_t __n;
  uint uVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  long **pplVar14;
  
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((pplVar14 = (long **)param_1[7], pplVar14 == (long **)0x0 || (*pplVar14 != param_1)))) {
    return 0xfffffffe;
  }
  iVar11 = *(int *)(pplVar14 + 1);
  if (((0x38 < iVar11 - 0x39U) ||
      ((1L << ((ulong)(iVar11 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
     ((iVar11 != 0x29a && (iVar11 != 0x2a)))) {
    return 0xfffffffe;
  }
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  iVar4 = *(int *)(pplVar14 + 6);
  if (iVar4 == 2) {
    return 0xfffffffe;
  }
  if (iVar4 == 1) {
    if (iVar11 != 0x2a) {
      return 0xfffffffe;
    }
    if (*(int *)((long)pplVar14 + 0xb4) != 0) {
      return 0xfffffffe;
    }
    lVar8 = adler32(param_1[0xc],param_2,param_3);
    uVar10 = *(uint *)(pplVar14 + 10);
    param_1[0xc] = lVar8;
    *(undefined4 *)(pplVar14 + 6) = 0;
    if (param_3 < uVar10) goto LAB_00e265ec;
  }
  else {
    if (*(int *)((long)pplVar14 + 0xb4) != 0) {
      return 0xfffffffe;
    }
    uVar10 = *(uint *)(pplVar14 + 10);
    *(undefined4 *)(pplVar14 + 6) = 0;
    if (param_3 < uVar10) goto LAB_00e265ec;
    if (iVar4 == 0) {
      plVar9 = pplVar14[0xf];
      __n = (ulong)(*(int *)((long)pplVar14 + 0x84) - 1) * 2;
      *(undefined2 *)((long)plVar9 + __n) = 0;
      memset(plVar9,0,__n);
      uVar10 = *(uint *)(pplVar14 + 10);
      *(undefined4 *)((long)pplVar14 + 0xac) = 0;
      pplVar14[0x13] = (long *)0x0;
      *(undefined4 *)((long)pplVar14 + 0x172c) = 0;
    }
  }
  param_2 = param_2 + (ulong)(param_3 - uVar10);
  param_3 = uVar10;
LAB_00e265ec:
  uVar5 = *(undefined4 *)(param_1 + 1);
  lVar8 = *param_1;
  *(uint *)(param_1 + 1) = param_3;
  *param_1 = param_2;
  FUN_00e266d4(pplVar14);
  uVar10 = *(uint *)((long)pplVar14 + 0xb4);
  while (2 < uVar10) {
    plVar9 = pplVar14[0xe];
    plVar3 = pplVar14[0xf];
    iVar11 = uVar10 - 2;
    uVar1 = *(uint *)((long)pplVar14 + 0x8c);
    uVar2 = *(uint *)(pplVar14 + 0x12);
    uVar10 = *(uint *)((long)pplVar14 + 0xac);
    plVar12 = pplVar14[0xc];
    uVar6 = *(uint *)(pplVar14 + 0xb);
    uVar13 = (ulong)*(uint *)(pplVar14 + 0x10);
    do {
      iVar11 = iVar11 + -1;
      uVar7 = ((int)uVar13 << (ulong)(uVar2 & 0x1f) ^
              (uint)*(byte *)((long)plVar12 + (ulong)(uVar10 + 2))) & uVar1;
      uVar13 = (ulong)uVar7;
      *(uint *)(pplVar14 + 0x10) = uVar7;
      *(undefined2 *)((long)plVar9 + (ulong)(uVar6 & uVar10) * 2) =
           *(undefined2 *)((long)plVar3 + uVar13 * 2);
      *(short *)((long)plVar3 + uVar13 * 2) = (short)uVar10;
      uVar10 = uVar10 + 1;
    } while (iVar11 != 0);
    *(uint *)((long)pplVar14 + 0xac) = uVar10;
    *(undefined4 *)((long)pplVar14 + 0xb4) = 2;
    FUN_00e266d4(pplVar14);
    uVar10 = *(uint *)((long)pplVar14 + 0xb4);
  }
  *(uint *)((long)pplVar14 + 0x172c) = uVar10;
  uVar10 = *(int *)((long)pplVar14 + 0xac) + uVar10;
  *(int *)(pplVar14 + 6) = iVar4;
  *(undefined8 *)((long)pplVar14 + 0xb4) = 0x200000000;
  *(undefined4 *)(pplVar14 + 0x14) = 2;
  *param_1 = lVar8;
  pplVar14[0x13] = (long *)(ulong)uVar10;
  *(undefined4 *)(pplVar14 + 0x15) = 0;
  *(uint *)((long)pplVar14 + 0xac) = uVar10;
  *(undefined4 *)(param_1 + 1) = uVar5;
  return 0;
}


