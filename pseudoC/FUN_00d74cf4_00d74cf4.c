// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d74cf4
// Entry Point: 00d74cf4
// Size: 592 bytes
// Signature: undefined FUN_00d74cf4(void)


undefined8 FUN_00d74cf4(long *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  
  lVar11 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar4 = *(int *)(lVar11 + 0x4c);
    if (iVar4 == 0) {
      FUN_00d75810(param_1);
      iVar4 = *(int *)(lVar11 + 0x4c);
    }
    *(int *)(lVar11 + 0x4c) = iVar4 + -1;
  }
  if ((*(int *)(lVar11 + 0x28) != -1) && (0 < *(int *)(param_1 + 0x3a))) {
    lVar12 = 0;
    do {
      puVar7 = *(undefined2 **)(param_2 + lVar12 * 8);
      lVar15 = (long)*(int *)((long)param_1 + lVar12 * 4 + 0x1d4);
      lVar10 = lVar11 + lVar15 * 4;
      piVar13 = (int *)(lVar10 + 0x3c);
      lVar8 = (long)*(int *)(param_1[lVar15 + 0x35] + 0x14);
      plVar14 = (long *)(lVar11 + lVar8 * 8 + 0x50);
      lVar2 = *plVar14 + (long)*piVar13;
      iVar4 = FUN_00d75930(param_1,lVar2);
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar10 + 0x2c);
        *piVar13 = 0;
      }
      else {
        iVar4 = FUN_00d75930(param_1,lVar2 + 1);
        lVar10 = lVar2 + iVar4 + 2;
        uVar5 = FUN_00d75930(param_1,lVar10);
        if (uVar5 != 0) {
          lVar10 = *plVar14 + 0x14;
          iVar6 = FUN_00d75930(param_1,lVar10);
          while (iVar6 != 0) {
            uVar5 = uVar5 << 1;
            if (uVar5 == 0x8000) {
              lVar12 = *param_1;
              *(undefined4 *)(lVar12 + 0x28) = 0x75;
              (**(code **)(lVar12 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
              return 1;
            }
            lVar10 = lVar10 + 1;
            iVar6 = FUN_00d75930(param_1,lVar10);
          }
        }
        if ((int)uVar5 <
            (int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar8 + 299) & 0x3f)) >> 1)) {
          *piVar13 = 0;
        }
        else if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar8 + 0x13b) & 0x3f)) >> 1)
                 < (int)uVar5) {
          *piVar13 = iVar4 * 4 + 0xc;
        }
        else {
          *piVar13 = iVar4 * 4 + 4;
        }
        if (1 < uVar5) {
          uVar9 = uVar5;
          do {
            iVar6 = FUN_00d75930(param_1,lVar10 + 0xe);
            uVar3 = 0;
            if (iVar6 != 0) {
              uVar3 = (int)uVar9 >> 1;
            }
            uVar5 = uVar3 | uVar5;
            bVar1 = 3 < uVar9;
            uVar9 = (int)uVar9 >> 1;
          } while (bVar1);
        }
        lVar10 = lVar11 + lVar15 * 4;
        uVar9 = ~uVar5;
        if (iVar4 == 0) {
          uVar9 = uVar5 + 1;
        }
        iVar4 = *(int *)(lVar10 + 0x2c) + uVar9;
        *(int *)(lVar10 + 0x2c) = iVar4;
      }
      lVar12 = lVar12 + 1;
      iVar6 = *(int *)(param_1 + 0x3a);
      *puVar7 = (short)(iVar4 << (ulong)(*(uint *)(param_1 + 0x41) & 0x1f));
    } while (lVar12 < iVar6);
  }
  return 1;
}


