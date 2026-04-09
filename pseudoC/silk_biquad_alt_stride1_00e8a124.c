// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_biquad_alt_stride1
// Entry Point: 00e8a124
// Size: 248 bytes
// Signature: undefined silk_biquad_alt_stride1(void)


void silk_biquad_alt_stride1
               (short *param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
               uint param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  
  if (0 < (int)param_6) {
    iVar3 = *param_3;
    iVar4 = param_3[1];
    iVar9 = *param_4;
    iVar6 = param_4[1];
    uVar8 = (ulong)param_6;
    do {
      lVar7 = (long)*param_1;
      iVar5 = (iVar9 + (int)((ulong)(*param_2 * lVar7) >> 0x10)) * 4;
      lVar10 = (long)iVar5;
      iVar9 = iVar6 + (int)((ulong)((short)((uint)-iVar3 >> 0xe) * lVar10) >> 0x10) +
              (((int)(lVar10 * (ulong)(-iVar3 & 0x3fff) >> 0x10) >> 0xd) + 1 >> 1);
      *param_4 = iVar9;
      iVar9 = iVar9 + (int)((ulong)(param_2[1] * lVar7) >> 0x10);
      iVar6 = (int)((ulong)((short)((uint)-iVar4 >> 0xe) * lVar10) >> 0x10) +
              (((int)(lVar10 * (ulong)(-iVar4 & 0x3fff) >> 0x10) >> 0xd) + 1 >> 1);
      iVar1 = iVar5 + 0x3fff >> 0xe;
      *param_4 = iVar9;
      param_4[1] = iVar6;
      if (iVar1 == -0x8000 || iVar1 + 0x8000 < 0 != SCARRY4(iVar1,0x8000)) {
        iVar1 = -0x8000;
      }
      iVar6 = iVar6 + (int)((ulong)(param_2[2] * lVar7) >> 0x10);
      uVar2 = 0x7fff;
      if (iVar5 < 0x1fffc001) {
        uVar2 = (short)iVar1;
      }
      uVar8 = uVar8 - 1;
      param_4[1] = iVar6;
      *param_5 = uVar2;
      param_1 = param_1 + 1;
      param_5 = param_5 + 1;
    } while (uVar8 != 0);
  }
  return;
}


