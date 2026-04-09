// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quant_energy_finalise
// Entry Point: 00e6f164
// Size: 508 bytes
// Signature: undefined quant_energy_finalise(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9, undefined4 param_10)


void quant_energy_finalise
               (long param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
               long param_7,int param_8,undefined8 param_9,int param_10)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (param_2 < param_3) {
    lVar9 = (long)param_2;
    iVar1 = param_10;
    if (param_10 < 2) {
      iVar1 = 1;
    }
    lVar7 = lVar9;
    if (param_10 <= param_8) {
      do {
        if ((*(int *)(param_6 + lVar7 * 4) < 8) && (*(int *)(param_7 + lVar7 * 4) == 0)) {
          iVar8 = 0;
          iVar5 = *(int *)(param_1 + 8);
          do {
            uVar3 = ~(uint)*(ushort *)(param_5 + (lVar7 + iVar5 * iVar8) * 2) >> 0xf & 1;
            ec_enc_bits(param_9,uVar3,1);
            iVar5 = *(int *)(param_1 + 8);
            iVar2 = iVar5 * iVar8;
            iVar8 = iVar8 + 1;
            lVar6 = (lVar7 + iVar2) * 2;
            sVar4 = (short)((int)(uVar3 * 0x400 + -0x200) >>
                           (*(int *)(param_6 + lVar7 * 4) + 1U & 0x1f));
            *(short *)(param_4 + lVar6) = *(short *)(param_4 + lVar6) + sVar4;
            *(short *)(param_5 + lVar6) = *(short *)(param_5 + lVar6) - sVar4;
          } while (iVar1 != iVar8);
          param_8 = param_8 - iVar1;
        }
      } while ((lVar7 + 1 < (long)param_3) && (lVar7 = lVar7 + 1, param_10 <= param_8));
    }
    do {
      if (param_8 < param_10) {
        return;
      }
      if ((*(int *)(param_6 + lVar9 * 4) < 8) && (*(int *)(param_7 + lVar9 * 4) == 1)) {
        iVar8 = 0;
        iVar5 = *(int *)(param_1 + 8);
        do {
          uVar3 = ~(uint)*(ushort *)(param_5 + (lVar9 + iVar5 * iVar8) * 2) >> 0xf & 1;
          ec_enc_bits(param_9,uVar3,1);
          iVar5 = *(int *)(param_1 + 8);
          iVar2 = iVar5 * iVar8;
          iVar8 = iVar8 + 1;
          lVar7 = (lVar9 + iVar2) * 2;
          sVar4 = (short)((int)(uVar3 * 0x400 + -0x200) >>
                         (*(int *)(param_6 + lVar9 * 4) + 1U & 0x1f));
          *(short *)(param_4 + lVar7) = *(short *)(param_4 + lVar7) + sVar4;
          *(short *)(param_5 + lVar7) = *(short *)(param_5 + lVar7) - sVar4;
        } while (iVar1 != iVar8);
        param_8 = param_8 - iVar1;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_3);
  }
  return;
}


