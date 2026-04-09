// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d75244
// Entry Point: 00d75244
// Size: 464 bytes
// Signature: undefined FUN_00d75244(void)


undefined8 FUN_00d75244(long *param_1,long *param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  short sVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  
  lVar11 = param_1[0x4a];
  if (*(int *)((long)param_1 + 0x15c) != 0) {
    iVar5 = *(int *)(lVar11 + 0x4c);
    if (iVar5 == 0) {
      FUN_00d75810(param_1);
      iVar5 = *(int *)(lVar11 + 0x4c);
    }
    *(int *)(lVar11 + 0x4c) = iVar5 + -1;
  }
  if (*(int *)(lVar11 + 0x28) != -1) {
    uVar1 = *(uint *)(param_1 + 0x41);
    lVar6 = param_1[0x42];
    uVar15 = (ulong)*(int *)(param_1 + 0x40);
    lVar12 = *param_2;
    iVar5 = *(int *)(param_1[0x35] + 0x18);
    piVar8 = (int *)(lVar6 + uVar15 * 4);
    do {
      uVar14 = (uint)uVar15;
      if (*(short *)(lVar12 + (long)*piVar8 * 2) != 0) break;
      uVar14 = uVar14 - 1;
      uVar15 = (ulong)uVar14;
      piVar8 = piVar8 + -1;
    } while (uVar14 != 0);
    iVar16 = *(int *)((long)param_1 + 0x1fc) + -1;
    do {
      lVar10 = *(long *)(lVar11 + (long)iVar5 * 8 + 0xd0) + (long)(iVar16 * 3);
      if (((int)uVar14 <= iVar16) && (iVar3 = FUN_00d75930(param_1,lVar10), iVar3 != 0)) {
        return 1;
      }
      lVar9 = (long)iVar16;
      lVar10 = lVar10 + 2;
      while( true ) {
        iVar16 = iVar16 + 1;
        lVar13 = (long)*(int *)(lVar6 + 4 + lVar9 * 4);
        sVar4 = (short)(1 << (ulong)(uVar1 & 0x1f));
        sVar7 = (short)(-1 << (ulong)(uVar1 & 0x1f));
        if (*(short *)(lVar12 + lVar13 * 2) != 0) break;
        iVar3 = FUN_00d75930(param_1,lVar10 + -1);
        if (iVar3 != 0) {
          iVar3 = FUN_00d75930(param_1,lVar11 + 0x150);
          if (iVar3 != 0) {
            sVar4 = sVar7;
          }
          goto LAB_00d753b8;
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 3;
        if (*(int *)(param_1 + 0x40) <= lVar9) {
          lVar6 = *param_1;
          *(undefined4 *)(lVar6 + 0x28) = 0x75;
          (**(code **)(lVar6 + 8))(param_1,0xffffffff);
          *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
          return 1;
        }
      }
      iVar3 = FUN_00d75930(param_1,lVar10);
      if (iVar3 != 0) {
        sVar2 = *(short *)(lVar12 + lVar13 * 2);
        if (-1 < sVar2) {
          sVar7 = sVar4;
        }
        sVar4 = sVar2 + sVar7;
LAB_00d753b8:
        *(short *)(lVar12 + lVar13 * 2) = sVar4;
      }
    } while (iVar16 < *(int *)(param_1 + 0x40));
  }
  return 1;
}


