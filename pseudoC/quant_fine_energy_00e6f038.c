// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quant_fine_energy
// Entry Point: 00e6f038
// Size: 300 bytes
// Signature: undefined quant_fine_energy(void)


void quant_fine_energy(long param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
                      undefined8 param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (param_2 < param_3) {
    lVar9 = (long)param_2;
    if (param_8 < 2) {
      param_8 = 1;
    }
    do {
      uVar3 = *(uint *)(param_6 + lVar9 * 4);
      if (0 < (int)uVar3) {
        iVar8 = 0;
        iVar2 = (0x10000 << (ulong)(uVar3 & 0x1f)) >> 0x10;
        iVar6 = *(int *)(param_1 + 8);
        do {
          uVar1 = *(short *)(param_5 + (lVar9 + iVar6 * iVar8) * 2) + 0x200 >> (10 - uVar3 & 0x1f);
          if (iVar2 <= (int)uVar1) {
            uVar1 = iVar2 - 1;
          }
          uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
          ec_enc_bits(param_7,uVar1);
          iVar6 = *(int *)(param_1 + 8);
          uVar3 = *(uint *)(param_6 + lVar9 * 4);
          iVar4 = iVar6 * iVar8;
          iVar8 = iVar8 + 1;
          sVar5 = (short)((uVar1 << 10 | 0x200) >> (ulong)(uVar3 & 0x1f)) + -0x200;
          lVar7 = (lVar9 + iVar4) * 2;
          *(short *)(param_4 + lVar7) = sVar5 + *(short *)(param_4 + lVar7);
          *(short *)(param_5 + lVar7) = *(short *)(param_5 + lVar7) - sVar5;
        } while (param_8 != iVar8);
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 != param_3);
  }
  return;
}


