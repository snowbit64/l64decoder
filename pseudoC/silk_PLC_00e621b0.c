// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_PLC
// Entry Point: 00e621b0
// Size: 656 bytes
// Signature: undefined silk_PLC(void)


void silk_PLC(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  
  iVar10 = *(int *)(param_1 + 0x90c);
  if (iVar10 != *(int *)(param_1 + 0x10b4)) {
    *(int *)(param_1 + 0x10b4) = iVar10;
    *(undefined8 *)(param_1 + 0x10ac) = 0x1000000010000;
    *(int *)(param_1 + 0x1064) = *(int *)(param_1 + 0x918) << 7;
    *(undefined8 *)(param_1 + 0x10b8) = 0x1400000002;
  }
  if (param_4 != 0) {
    FUN_00e62440(param_1,param_2,param_3,param_5);
    *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
    return;
  }
  *(int *)(param_1 + 0x105c) = (int)*(char *)(param_1 + 0xae5);
  if (*(char *)(param_1 + 0xae5) == 2) {
    iVar10 = *(int *)(param_1 + 0x914);
    uVar8 = 0;
    if (0 < *(int *)(param_2 + (long)(iVar10 + -1) * 4) && iVar10 != 0) {
      iVar12 = -1;
      iVar3 = *(int *)(param_1 + 0x91c);
      iVar13 = 1;
      do {
        iVar1 = iVar10 + iVar12;
        lVar14 = param_2 + (long)iVar1 * 10;
        uVar15 = *(undefined8 *)(lVar14 + 0x60);
        uVar2 = (int)(short)uVar15 + (int)(short)((ulong)uVar15 >> 0x10) +
                (int)(short)((ulong)uVar15 >> 0x20) + (int)(short)((ulong)uVar15 >> 0x30) +
                (int)*(short *)(lVar14 + 0x68);
        if ((int)uVar8 < (int)uVar2) {
          iVar10 = *(int *)(param_1 + 0x914);
          lVar14 = param_2 + (long)(int)(short)iVar1 * 10;
          uVar15 = *(undefined8 *)(lVar14 + 0x60);
          *(undefined2 *)(param_1 + 0x1070) = *(undefined2 *)(lVar14 + 0x68);
          *(undefined8 *)(param_1 + 0x1068) = uVar15;
          *(int *)(param_1 + 0x1064) = *(int *)(param_2 + (long)(iVar12 + iVar10) * 4) << 8;
          uVar8 = uVar2;
        }
        if (*(int *)(param_2 + (long)iVar10 * 4 + -4) <= iVar3) break;
        bVar6 = iVar13 != iVar10;
        iVar3 = iVar3 + *(int *)(param_1 + 0x91c);
        iVar12 = iVar12 + -1;
        iVar13 = iVar13 + 1;
      } while (bVar6);
    }
    *(undefined8 *)(param_1 + 0x1068) = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
    sVar4 = (short)uVar8;
    *(short *)(param_1 + 0x106c) = sVar4;
    if ((int)uVar8 < 0x2ccd) {
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      sVar5 = 0;
      if (uVar8 != 0) {
        sVar5 = (short)(0xb33400 / uVar8);
      }
      iVar10 = (int)sVar5;
      uVar7 = (undefined2)((uint)(iVar10 * sVar4) >> 10);
      *(short *)(param_1 + 0x1068) = (short)((uint)(iVar10 * *(short *)(param_1 + 0x1068)) >> 10);
      uVar11 = (undefined2)((uint)(iVar10 * *(short *)(param_1 + 0x106e)) >> 10);
      *(short *)(param_1 + 0x106a) = (short)((uint)(iVar10 * *(short *)(param_1 + 0x106a)) >> 10);
      uVar9 = (undefined2)((uint)(iVar10 * *(short *)(param_1 + 0x1070)) >> 10);
    }
    else {
      if (uVar8 < 0x3cce) goto LAB_00e623f0;
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = 0xf334000 / uVar8;
      }
      uVar7 = (undefined2)(uVar2 * (int)sVar4 >> 0xe);
      *(short *)(param_1 + 0x1068) = (short)(uVar2 * (int)*(short *)(param_1 + 0x1068) >> 0xe);
      uVar11 = (undefined2)(uVar2 * (int)*(short *)(param_1 + 0x106e) >> 0xe);
      uVar9 = (undefined2)(uVar2 * (int)*(short *)(param_1 + 0x1070) >> 0xe);
      *(short *)(param_1 + 0x106a) = (short)(uVar2 * (int)*(short *)(param_1 + 0x106a) >> 0xe);
    }
    *(undefined2 *)(param_1 + 0x106c) = uVar7;
    *(undefined2 *)(param_1 + 0x106e) = uVar11;
    *(undefined2 *)(param_1 + 0x1070) = uVar9;
  }
  else {
    *(undefined8 *)(param_1 + 0x1068) = 0;
    *(undefined2 *)(param_1 + 0x1070) = 0;
    *(int *)(param_1 + 0x1064) = ((int)(short)iVar10 + (short)iVar10 * 8) * 0x200;
  }
LAB_00e623f0:
  memcpy((void *)(param_1 + 0x1072),(void *)(param_2 + 0x40),(long)*(int *)(param_1 + 0x924) << 1);
  *(short *)(param_1 + 0x10a8) = (short)*(undefined4 *)(param_2 + 0x88);
  uVar15 = *(undefined8 *)(param_2 + (long)*(int *)(param_1 + 0x914) * 4 + 8);
  *(undefined4 *)(param_1 + 0x10bc) = *(undefined4 *)(param_1 + 0x91c);
  *(undefined4 *)(param_1 + 0x10b8) = *(undefined4 *)(param_1 + 0x914);
  *(undefined8 *)(param_1 + 0x10ac) = uVar15;
  return;
}


