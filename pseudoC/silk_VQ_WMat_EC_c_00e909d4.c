// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_VQ_WMat_EC_c
// Entry Point: 00e909d4
// Size: 544 bytes
// Signature: undefined silk_VQ_WMat_EC_c(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined2 param_10, undefined4 param_11, undefined4 param_12)


void silk_VQ_WMat_EC_c(undefined *param_1,int *param_2,int *param_3,uint *param_4,int *param_5,
                      int *param_6,long param_7,long param_8,long param_9,short param_10,
                      int param_11,uint param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  
  iVar2 = *param_6;
  iVar4 = param_6[1];
  iVar3 = param_6[2];
  iVar5 = param_6[3];
  iVar6 = param_6[4];
  *param_3 = 0x7fffffff;
  *param_2 = 0x7fffffff;
  *param_1 = 0;
  if (0 < (int)param_12) {
    uVar16 = 0;
    pcVar15 = (char *)(param_7 + 2);
    do {
      cVar11 = pcVar15[-1];
      cVar8 = *pcVar15;
      cVar9 = pcVar15[1];
      cVar10 = pcVar15[2];
      iVar14 = (int)cVar10;
      iVar14 = (int)((ulong)((long)(*param_5 * (int)pcVar15[-2] +
                                   (iVar2 * -0x80 + param_5[1] * (int)cVar11 +
                                    param_5[2] * (int)cVar8 + param_5[3] * (int)cVar9 +
                                   param_5[4] * (int)cVar10) * 2) * (long)pcVar15[-2]) >> 0x10) +
               (int)((ulong)((long)(param_5[6] * (int)cVar11 +
                                   (iVar4 * -0x80 + param_5[7] * (int)cVar8 +
                                    param_5[8] * (int)cVar9 + param_5[9] * (int)cVar10) * 2) *
                            (long)cVar11) >> 0x10) +
               (int)((ulong)((long)(param_5[0xc] * (int)cVar8 +
                                   (iVar3 * -0x80 + param_5[0xd] * (int)cVar9 +
                                   param_5[0xe] * iVar14) * 2) * (long)cVar8) >> 0x10) +
               (int)((ulong)((long)(param_5[0x12] * (int)cVar9 +
                                   (iVar5 * -0x80 + param_5[0x13] * iVar14) * 2) * (long)cVar9) >>
                    0x10) +
               (int)((ulong)((long)(iVar6 * -0x100 + param_5[0x18] * iVar14) * (long)cVar10) >> 0x10
                    ) + 0x8021;
      if (-1 < iVar14) {
        bVar7 = *(byte *)(param_8 + uVar16);
        uVar12 = (uint)bVar7 - param_11;
        iVar14 = iVar14 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) * 0x800;
        sVar13 = silk_lin2log(iVar14);
        iVar1 = (int)(short)(sVar13 + -0x780) * (int)param_10 +
                (uint)*(byte *)(param_9 + uVar16) * 4;
        if (iVar1 <= *param_3) {
          *param_3 = iVar1;
          *param_2 = iVar14;
          *param_1 = (char)uVar16;
          *param_4 = (uint)bVar7;
        }
      }
      uVar16 = uVar16 + 1;
      pcVar15 = pcVar15 + 5;
    } while (param_12 != uVar16);
  }
  return;
}


