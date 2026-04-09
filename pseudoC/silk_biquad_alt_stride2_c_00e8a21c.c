// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_biquad_alt_stride2_c
// Entry Point: 00e8a21c
// Size: 448 bytes
// Signature: undefined silk_biquad_alt_stride2_c(void)


void silk_biquad_alt_stride2_c
               (long param_1,int *param_2,int *param_3,int *param_4,long param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined2 *puVar14;
  short *psVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  
  if (0 < (int)param_6) {
    iVar6 = *param_4;
    iVar8 = param_4[1];
    iVar17 = param_4[2];
    iVar19 = param_4[3];
    uVar13 = (ulong)param_6;
    uVar9 = (ulong)(-*param_3 & 0x3fff);
    uVar10 = (ulong)(-param_3[1] & 0x3fff);
    lVar11 = (long)(short)((uint)-*param_3 >> 0xe);
    lVar12 = (long)(short)((uint)-param_3[1] >> 0xe);
    psVar15 = (short *)(param_1 + 2);
    puVar14 = (undefined2 *)(param_5 + 2);
    do {
      lVar16 = (long)psVar15[-1];
      lVar7 = (long)*psVar15;
      psVar15 = psVar15 + 2;
      iVar4 = (iVar6 + (int)((ulong)(lVar16 * *param_2) >> 0x10)) * 4;
      lVar18 = (long)iVar4;
      iVar5 = (iVar17 + (int)((ulong)(lVar7 * *param_2) >> 0x10)) * 4;
      lVar20 = (long)iVar5;
      iVar6 = iVar8 + (((int)(lVar18 * uVar9 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulong)(lVar11 * lVar18) >> 0x10);
      iVar17 = iVar19 + (((int)(lVar20 * uVar9 >> 0x10) >> 0xd) + 1 >> 1) +
               (int)((ulong)(lVar11 * lVar20) >> 0x10);
      *param_4 = iVar6;
      param_4[2] = iVar17;
      iVar6 = iVar6 + (int)((ulong)(param_2[1] * lVar16) >> 0x10);
      *param_4 = iVar6;
      iVar19 = (int)((ulong)(lVar12 * lVar20) >> 0x10) +
               (((int)(lVar20 * uVar10 >> 0x10) >> 0xd) + 1 >> 1);
      iVar17 = iVar17 + (int)((ulong)(param_2[1] * lVar7) >> 0x10);
      iVar8 = (int)((ulong)(lVar12 * lVar18) >> 0x10) +
              (((int)(lVar18 * uVar10 >> 0x10) >> 0xd) + 1 >> 1);
      param_4[2] = iVar17;
      param_4[3] = iVar19;
      param_4[1] = iVar8;
      iVar1 = iVar4 + 0x3fff >> 0xe;
      iVar8 = iVar8 + (int)((ulong)(param_2[2] * lVar16) >> 0x10);
      if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
        iVar1 = -0x8000;
      }
      iVar2 = iVar5 + 0x3fff >> 0xe;
      uVar3 = 0x7fff;
      if (iVar4 < 0x1fffc001) {
        uVar3 = (short)iVar1;
      }
      param_4[1] = iVar8;
      iVar1 = param_2[2];
      if (iVar2 == -0x8000 || iVar2 + 0x8000 < 0 != SCARRY4(iVar2,0x8000)) {
        iVar2 = -0x8000;
      }
      puVar14[-1] = uVar3;
      uVar3 = 0x7fff;
      if (iVar5 < 0x1fffc001) {
        uVar3 = (short)iVar2;
      }
      uVar13 = uVar13 - 1;
      iVar19 = iVar19 + (int)((ulong)(iVar1 * lVar7) >> 0x10);
      *puVar14 = uVar3;
      param_4[3] = iVar19;
      puVar14 = puVar14 + 2;
    } while (uVar13 != 0);
  }
  return;
}


