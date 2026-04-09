// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_resampler_private_up2_HQ
// Entry Point: 00e64000
// Size: 324 bytes
// Signature: undefined silk_resampler_private_up2_HQ(void)


void silk_resampler_private_up2_HQ(int *param_1,long param_2,short *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (0 < (int)param_4) {
    iVar9 = *param_1;
    iVar12 = param_1[1];
    uVar10 = (ulong)param_4;
    iVar6 = param_1[2];
    iVar13 = param_1[3];
    iVar7 = param_1[4];
    iVar8 = param_1[5];
    puVar11 = (undefined2 *)(param_2 + 2);
    do {
      iVar14 = (int)((long)*param_3 * 0x400);
      iVar15 = (int)((ulong)(((long)*param_3 * 0x400 - (long)iVar9) * 0x6d2) >> 0x10);
      iVar1 = iVar9 + iVar15;
      iVar16 = (int)((ulong)((long)(iVar14 - iVar13) * 0x1ac6) >> 0x10);
      iVar2 = iVar13 + iVar16;
      iVar9 = iVar14 + iVar15;
      iVar17 = (int)((ulong)((long)(iVar1 - iVar12) * 0x3a8a) >> 0x10);
      iVar12 = iVar12 + iVar17;
      iVar18 = (int)((ulong)((long)(iVar2 - iVar7) * 0x64a9) >> 0x10);
      iVar7 = iVar7 + iVar18;
      iVar6 = iVar12 - iVar6;
      iVar8 = iVar7 - iVar8;
      iVar15 = iVar12 + (int)((ulong)((long)iVar6 * -0x6755) >> 0x10);
      iVar3 = iVar7 + (int)((ulong)((long)iVar8 * -0x270a) >> 0x10);
      iVar12 = (iVar15 >> 9) + 1 >> 1;
      iVar7 = (iVar3 >> 9) + 1 >> 1;
      if (iVar12 == -0x8000 || iVar12 + 0x8000 < 0 != SCARRY4(iVar12,0x8000)) {
        iVar12 = -0x8000;
      }
      uVar4 = 0x7fff;
      if (iVar15 < 0x1fffe00) {
        uVar4 = (short)iVar12;
      }
      if (iVar7 == -0x8000 || iVar7 + 0x8000 < 0 != SCARRY4(iVar7,0x8000)) {
        iVar7 = -0x8000;
      }
      iVar13 = iVar14 + iVar16;
      uVar5 = 0x7fff;
      if (iVar3 < 0x1fffe00) {
        uVar5 = (short)iVar7;
      }
      iVar12 = iVar1 + iVar17;
      iVar7 = iVar2 + iVar18;
      iVar6 = iVar15 + iVar6;
      iVar8 = iVar3 + iVar8;
      uVar10 = uVar10 - 1;
      puVar11[-1] = uVar4;
      *puVar11 = uVar5;
      param_3 = param_3 + 1;
      puVar11 = puVar11 + 2;
    } while (uVar10 != 0);
    param_1[2] = iVar6;
    param_1[3] = iVar13;
    *param_1 = iVar9;
    param_1[1] = iVar12;
    param_1[4] = iVar7;
    param_1[5] = iVar8;
  }
  return;
}


