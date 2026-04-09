// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unquant_fine_energy
// Entry Point: 00e6f59c
// Size: 192 bytes
// Signature: undefined unquant_fine_energy(void)


void unquant_fine_energy(long param_1,int param_2,int param_3,long param_4,long param_5,
                        undefined8 param_6,int param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (param_2 < param_3) {
    if (param_7 < 2) {
      param_7 = 1;
    }
    lVar3 = (long)param_2;
    do {
      if (0 < *(int *)(param_5 + lVar3 * 4)) {
        iVar4 = 0;
        do {
          iVar1 = ec_dec_bits(param_6);
          lVar2 = (long)iVar4;
          iVar4 = iVar4 + 1;
          lVar2 = (lVar3 + *(int *)(param_1 + 8) * lVar2) * 2;
          *(short *)(param_4 + lVar2) =
               *(short *)(param_4 + lVar2) +
               (short)((int)(iVar1 << 10 | 0x200U) >> (*(uint *)(param_5 + lVar3 * 4) & 0x1f)) +
               -0x200;
        } while (param_7 != iVar4);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 != param_3);
  }
  return;
}


