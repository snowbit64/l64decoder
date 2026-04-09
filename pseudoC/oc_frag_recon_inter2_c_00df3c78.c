// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_frag_recon_inter2_c
// Entry Point: 00df3c78
// Size: 404 bytes
// Signature: undefined oc_frag_recon_inter2_c(void)


void oc_frag_recon_inter2_c(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  short *psVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = 0;
  lVar8 = 0;
  do {
    pbVar2 = (byte *)(param_2 + lVar8);
    pbVar3 = (byte *)(param_3 + lVar8);
    psVar4 = (short *)(param_5 + lVar7);
    lVar7 = lVar7 + 0x10;
    iVar1 = (int)*psVar4 + ((uint)*pbVar3 + (uint)*pbVar2 >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5 = (byte *)(param_1 + lVar8);
    lVar8 = lVar8 + param_4;
    *pbVar5 = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[1] + ((uint)pbVar3[1] + (uint)pbVar2[1] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[1] = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[2] + ((uint)pbVar3[2] + (uint)pbVar2[2] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[2] = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[3] + ((uint)pbVar3[3] + (uint)pbVar2[3] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[3] = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[4] + ((uint)pbVar3[4] + (uint)pbVar2[4] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[4] = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[5] + ((uint)pbVar3[5] + (uint)pbVar2[5] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[5] = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[6] + ((uint)pbVar3[6] + (uint)pbVar2[6] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[6] = 0xffU - (char)iVar6 & (byte)iVar1;
    iVar1 = (int)psVar4[7] + ((uint)pbVar3[7] + (uint)pbVar2[7] >> 1);
    iVar6 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar5[7] = 0xffU - (char)iVar6 & (byte)iVar1;
  } while (lVar7 != 0x80);
  return;
}


