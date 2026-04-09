// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unquant_energy_finalise
// Entry Point: 00e6f65c
// Size: 404 bytes
// Signature: undefined unquant_energy_finalise(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void unquant_energy_finalise
               (long param_1,int param_2,int param_3,long param_4,long param_5,long param_6,
               int param_7,undefined8 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if (param_2 < param_3) {
    iVar1 = param_9;
    if (param_9 < 2) {
      iVar1 = 1;
    }
    lVar5 = (long)param_2;
    lVar4 = lVar5;
    if (param_9 <= param_7) {
      do {
        if ((*(int *)(param_5 + lVar4 * 4) < 8) && (*(int *)(param_6 + lVar4 * 4) == 0)) {
          iVar6 = 0;
          do {
            iVar2 = ec_dec_bits(param_8,1);
            lVar3 = (long)iVar6;
            iVar6 = iVar6 + 1;
            lVar3 = (lVar4 + *(int *)(param_1 + 8) * lVar3) * 2;
            *(short *)(param_4 + lVar3) =
                 *(short *)(param_4 + lVar3) +
                 (short)((short)(iVar2 << 10) + -0x200 >>
                        (*(int *)(param_5 + lVar4 * 4) + 1U & 0x1f));
          } while (iVar1 != iVar6);
          param_7 = param_7 - iVar1;
        }
      } while ((lVar4 + 1 < (long)param_3) && (lVar4 = lVar4 + 1, param_9 <= param_7));
    }
    do {
      if (param_7 < param_9) {
        return;
      }
      if ((*(int *)(param_5 + lVar5 * 4) < 8) && (*(int *)(param_6 + lVar5 * 4) == 1)) {
        iVar6 = 0;
        do {
          iVar2 = ec_dec_bits(param_8,1);
          lVar4 = (long)iVar6;
          iVar6 = iVar6 + 1;
          lVar4 = (lVar5 + *(int *)(param_1 + 8) * lVar4) * 2;
          *(short *)(param_4 + lVar4) =
               *(short *)(param_4 + lVar4) +
               (short)((short)(iVar2 << 10) + -0x200 >> (*(int *)(param_5 + lVar5 * 4) + 1U & 0x1f))
          ;
        } while (iVar1 != iVar6);
        param_7 = param_7 - iVar1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_3);
  }
  return;
}


