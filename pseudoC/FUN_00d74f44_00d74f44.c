// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d74f44
// Entry Point: 00d74f44
// Size: 588 bytes
// Signature: undefined FUN_00d74f44(void)


undefined8 FUN_00d74f44(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  
  lVar13 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar9 = *(int *)(lVar13 + 0x4c);
    if (iVar9 == 0) {
      FUN_00d75810(param_1);
      iVar9 = *(int *)(lVar13 + 0x4c);
    }
    *(int *)(lVar13 + 0x4c) = iVar9 + -1;
  }
  if (*(int *)(lVar13 + 0x28) != -1) {
    lVar10 = *param_2;
    iVar4 = *(int *)(param_1[0x35] + 0x18);
    iVar9 = *(int *)((long)param_1 + 0x1fc) + -1;
    lVar14 = param_1[0x42];
    plVar2 = (long *)(lVar13 + (long)iVar4 * 8 + 0xd0);
    do {
      lVar11 = *plVar2 + (long)(iVar9 * 3);
      iVar5 = FUN_00d75930(param_1,lVar11);
      if (iVar5 != 0) {
        return 1;
      }
      lVar11 = lVar11 + 2;
      piVar15 = (int *)(lVar14 + (long)(iVar9 + 1) * 4);
      iVar5 = iVar9;
      while( true ) {
        iVar9 = iVar5 + 1;
        iVar6 = FUN_00d75930(param_1,lVar11 + -1);
        if (iVar6 != 0) break;
        lVar11 = lVar11 + 3;
        piVar15 = piVar15 + 1;
        iVar5 = iVar9;
        if (*(int *)(param_1 + 0x40) <= iVar9) goto LAB_00d75148;
      }
      iVar6 = FUN_00d75930(param_1,lVar13 + 0x150);
      uVar7 = FUN_00d75930(param_1,lVar11);
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        iVar8 = FUN_00d75930(param_1,lVar11);
        if (iVar8 != 0) {
          uVar7 = uVar7 << 1;
          lVar11 = 0xbd;
          if ((int)(uint)*(byte *)((long)param_1 + (long)iVar4 + 0x14b) <= iVar5) {
            lVar11 = 0xd9;
          }
          lVar11 = *plVar2 + lVar11;
          iVar5 = FUN_00d75930(param_1,lVar11);
          while (iVar5 != 0) {
            uVar7 = uVar7 << 1;
            if (uVar7 == 0x8000) {
LAB_00d75148:
              lVar10 = *param_1;
              *(undefined4 *)(lVar10 + 0x28) = 0x75;
              (**(code **)(lVar10 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar13 + 0x28) = 0xffffffff;
              return 1;
            }
            lVar11 = lVar11 + 1;
            iVar5 = FUN_00d75930(param_1,lVar11);
          }
        }
        if (1 < uVar7) {
          uVar12 = uVar7;
          do {
            iVar5 = FUN_00d75930(param_1,lVar11 + 0xe);
            uVar3 = 0;
            if (iVar5 != 0) {
              uVar3 = (int)uVar12 >> 1;
            }
            uVar7 = uVar3 | uVar7;
            bVar1 = 3 < uVar12;
            uVar12 = (int)uVar12 >> 1;
          } while (bVar1);
        }
      }
      uVar12 = ~uVar7;
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar6 == 0) {
        uVar12 = uVar7 + 1;
      }
      *(short *)(lVar10 + (long)*piVar15 * 2) =
           (short)(uVar12 << (ulong)(*(uint *)(param_1 + 0x41) & 0x1f));
    } while (iVar9 < iVar5);
  }
  return 1;
}


