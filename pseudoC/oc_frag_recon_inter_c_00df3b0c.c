// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_frag_recon_inter_c
// Entry Point: 00df3b0c
// Size: 336 bytes
// Signature: undefined oc_frag_recon_inter_c(void)


void oc_frag_recon_inter_c(long param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  short *psVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = 0;
  lVar7 = 0;
  do {
    psVar2 = (short *)(param_4 + lVar6);
    pbVar3 = (byte *)(param_2 + lVar7);
    lVar6 = lVar6 + 0x10;
    iVar1 = (uint)*pbVar3 + (int)*psVar2;
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4 = (byte *)(param_1 + lVar7);
    lVar7 = lVar7 + param_3;
    *pbVar4 = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[1] + (int)psVar2[1];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[1] = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[2] + (int)psVar2[2];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[2] = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[3] + (int)psVar2[3];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[3] = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[4] + (int)psVar2[4];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[4] = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[5] + (int)psVar2[5];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[5] = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[6] + (int)psVar2[6];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[6] = 0xffU - (char)iVar5 & (byte)iVar1;
    iVar1 = (uint)pbVar3[7] + (int)psVar2[7];
    iVar5 = iVar1 >> 0x1f;
    if (0xfe < iVar1) {
      iVar1 = 0xff;
    }
    pbVar4[7] = 0xffU - (char)iVar5 & (byte)iVar1;
  } while (lVar6 != 0x80);
  return;
}


