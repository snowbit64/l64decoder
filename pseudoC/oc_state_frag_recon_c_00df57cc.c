// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_frag_recon_c
// Entry Point: 00df57cc
// Size: 496 bytes
// Signature: undefined oc_state_frag_recon_c(void)


void oc_state_frag_recon_c
               (long param_1,long param_2,int param_3,undefined8 *param_4,int param_5,ushort param_6
               )

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  
  if (param_5 < 2) {
    uVar4 = (undefined2)((int)*(short *)param_4 * (uint)param_6 + 0xf >> 5);
    *param_4 = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[1] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[2] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[3] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[4] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[5] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[6] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[7] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[8] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[9] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[10] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[0xb] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[0xc] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[0xd] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[0xe] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
    param_4[0xf] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
  }
  else {
    *(ushort *)param_4 = *(short *)param_4 * param_6;
    oc_idct8x8(param_1,param_4,param_5);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x118) + param_2 * 8);
  uVar6 = (ulong)(*(uint *)(*(long *)(param_1 + 0x110) + param_2 * 4) >> 8) & 7;
  iVar3 = *(int *)(param_1 + (long)param_3 * 4 + 0x2e0);
  lVar1 = *(long *)(param_1 + (long)*(int *)(param_1 + 0x198) * 8 + 0x2c0) + lVar5;
  if ((int)uVar6 == 1) {
    oc_frag_recon_intra(param_1,lVar1,iVar3,param_4);
    return;
  }
  pcVar2 = (char *)(*(long *)(param_1 + 0x120) + param_2 * 2);
  lVar8 = (long)pcVar2[1];
  if (param_3 == 0) {
    uVar12 = 0;
    pcVar10 = &DAT_0054bd81 + lVar8;
    pbVar9 = &DAT_0054be01 + lVar8;
  }
  else {
    lVar11 = ((ulong)(*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1) * 0x40;
    pcVar10 = &DAT_0054bd62 + lVar8 + 0x1f + lVar11;
    pbVar9 = &DAT_0054bde2 + lVar8 + 0x1f + lVar11;
    uVar12 = (ulong)~*(uint *)(param_1 + 0x30) & 1;
  }
  lVar8 = (long)*pcVar2 + 0x1f;
  lVar5 = *(long *)(param_1 + (long)*(int *)(param_1 + ((ulong)(0x10011121 >> (uVar6 << 2)) & 3) * 4
                                            + 400) * 8 + 0x2c0) + lVar5;
  lVar11 = (long)(char)(&DAT_0054bd62)[lVar8 + uVar12 * 0x40] + (long)iVar3 * (long)*pcVar10;
  iVar7 = (int)lVar11;
  if (((&DAT_0054bde2)[lVar8 + uVar12 * 0x40] | *pbVar9) != 0) {
    oc_frag_recon_inter2
              (param_1,lVar1,lVar5 + lVar11,
               lVar5 + (iVar7 + iVar3 * (char)*pbVar9 +
                       (int)(char)(&DAT_0054bde2)[lVar8 + uVar12 * 0x40]),(long)iVar3,param_4);
    return;
  }
  oc_frag_recon_inter(param_1,lVar1,lVar5 + iVar7,iVar3,param_4);
  return;
}


