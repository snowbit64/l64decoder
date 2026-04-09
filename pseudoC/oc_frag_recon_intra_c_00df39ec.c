// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_frag_recon_intra_c
// Entry Point: 00df39ec
// Size: 264 bytes
// Signature: undefined oc_frag_recon_intra_c(void)


void oc_frag_recon_intra_c(long param_1,int param_2,long param_3)

{
  short *psVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  int iVar5;
  
  lVar3 = 0;
  pbVar4 = (byte *)(param_1 + 3);
  do {
    psVar1 = (short *)(param_3 + 8 + lVar3);
    lVar3 = lVar3 + 0x10;
    bVar2 = (byte)psVar1[-4] ^ 0x80;
    iVar5 = (int)psVar1[-4];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[-3] = bVar2;
    bVar2 = (byte)psVar1[-3] ^ 0x80;
    iVar5 = (int)psVar1[-3];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[-2] = bVar2;
    bVar2 = (byte)psVar1[-2] ^ 0x80;
    iVar5 = (int)psVar1[-2];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[-1] = bVar2;
    bVar2 = (byte)psVar1[-1] ^ 0x80;
    iVar5 = (int)psVar1[-1];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    *pbVar4 = bVar2;
    bVar2 = (byte)*psVar1 ^ 0x80;
    iVar5 = (int)*psVar1;
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[1] = bVar2;
    bVar2 = (byte)psVar1[1] ^ 0x80;
    iVar5 = (int)psVar1[1];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[2] = bVar2;
    bVar2 = (byte)psVar1[2] ^ 0x80;
    iVar5 = (int)psVar1[2];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[3] = bVar2;
    bVar2 = (byte)psVar1[3] ^ 0x80;
    iVar5 = (int)psVar1[3];
    if (0x7f < iVar5) {
      bVar2 = 0xff;
    }
    if (iVar5 == -0x81 || iVar5 + 0x81 < 0 != SCARRY4(iVar5,0x81)) {
      bVar2 = 0;
    }
    pbVar4[4] = bVar2;
    pbVar4 = pbVar4 + param_2;
  } while (lVar3 != 0x80);
  return;
}


