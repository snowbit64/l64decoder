// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_InitPriceTables
// Entry Point: 00d95a24
// Size: 272 bytes
// Signature: undefined LzmaEnc_InitPriceTables(void)


void LzmaEnc_InitPriceTables(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = 8;
  do {
    uVar7 = uVar5 * uVar5;
    if (uVar7 < 0x10000) {
      uVar10 = (int)uVar7 * (int)uVar7;
      iVar8 = 0;
      iVar6 = 0;
      if (0xffff < uVar10) goto LAB_00d95aa0;
LAB_00d95ac8:
      uVar10 = uVar10 * uVar10;
      iVar6 = iVar6 << 1;
      if (0xffff < uVar10) goto LAB_00d95adc;
LAB_00d95b04:
      uVar9 = uVar10 * uVar10;
      iVar6 = iVar6 << 1;
    }
    else {
      iVar8 = 0;
      uVar7 = uVar7 & 0xffffffff;
      do {
        uVar2 = uVar7 >> 1;
        uVar3 = uVar7 >> 0x11;
        iVar8 = iVar8 + 1;
        uVar7 = uVar2;
      } while (uVar3 != 0);
      iVar6 = (int)uVar2;
      uVar10 = iVar6 * iVar6;
      iVar8 = iVar8 * 2;
      iVar6 = iVar8;
      if (uVar10 < 0x10000) goto LAB_00d95ac8;
LAB_00d95aa0:
      do {
        uVar9 = uVar10 >> 1;
        uVar1 = uVar10 >> 0x11;
        iVar8 = iVar8 + 1;
        uVar10 = uVar9;
      } while (uVar1 != 0);
      uVar10 = uVar9 * uVar9;
      iVar6 = iVar8 * 2;
      if (uVar10 < 0x10000) goto LAB_00d95b04;
LAB_00d95adc:
      do {
        uVar9 = uVar10 >> 1;
        uVar1 = uVar10 >> 0x11;
        iVar6 = iVar6 + 1;
        uVar10 = uVar9;
      } while (uVar1 != 0);
      uVar9 = uVar9 * uVar9;
      iVar6 = iVar6 * 2;
    }
    if (0xffff < uVar9) {
      do {
        uVar10 = uVar9 >> 0x11;
        iVar6 = iVar6 + 1;
        uVar9 = uVar9 >> 1;
      } while (uVar10 != 0);
    }
    bVar4 = 0x7ef < uVar5;
    *(int *)(param_1 + (uVar5 >> 2 & 0x3ffffffffffffffc)) = 0xa1 - iVar6;
    uVar5 = uVar5 + 0x10;
    if (bVar4) {
      return;
    }
  } while( true );
}


