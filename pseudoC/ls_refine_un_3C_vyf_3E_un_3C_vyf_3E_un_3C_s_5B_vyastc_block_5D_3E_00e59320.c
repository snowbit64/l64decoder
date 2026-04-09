// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ls_refine___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
// Entry Point: 00e59320
// Size: 160 bytes
// Signature: undefined ls_refine___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_(void)


void ls_refine___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
               (undefined param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  
  iVar6 = (int)*(undefined8 *)(param_4 + 0x168);
  iVar7 = (int)((ulong)*(undefined8 *)(param_4 + 0x168) >> 0x20);
  iVar4 = (int)*(undefined8 *)(param_4 + 0x160);
  iVar5 = (int)((ulong)*(undefined8 *)(param_4 + 0x160) >> 0x20);
  uVar9 = CONCAT44(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1e),iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e))
          & 0xfffffffcfffffffc;
  uVar10 = CONCAT44(iVar7 + ((uint)(iVar7 >> 0x1f) >> 0x1e),(iVar6 / 4) * 4) & 0xfffffffcffffffff;
  auVar8[8] = 2;
  auVar8._0_8_ = 0x200000002;
  auVar8._9_3_ = 0;
  auVar8[12] = 2;
  auVar8._13_3_ = 0;
  auVar3._4_4_ = iVar5 - (int)(uVar9 >> 0x20);
  auVar3._0_4_ = iVar4 - (int)uVar9;
  auVar3._8_4_ = iVar6 - (int)uVar10;
  auVar3._12_4_ = iVar7 - (int)(uVar10 >> 0x20);
  auVar8 = NEON_cmeq(auVar3,auVar8,4);
  auVar1[1] = auVar8[1] & param_1[1];
  auVar1[0] = auVar8[0] & param_1[0];
  auVar1[2] = auVar8[2] & param_1[2];
  auVar1[3] = auVar8[3] & param_1[3];
  auVar1[4] = auVar8[4] & param_1[4];
  auVar1[5] = auVar8[5] & param_1[5];
  auVar1[6] = auVar8[6] & param_1[6];
  auVar1[7] = auVar8[7] & param_1[7];
  auVar1[8] = auVar8[8] & param_1[8];
  auVar1[9] = auVar8[9] & param_1[9];
  auVar1[10] = auVar8[10] & param_1[10];
  auVar1[11] = auVar8[11] & param_1[11];
  auVar1[12] = auVar8[12] & param_1[12];
  auVar1[13] = auVar8[13] & param_1[13];
  auVar1[14] = auVar8[14] & param_1[14];
  auVar1[15] = auVar8[15] & param_1[15];
  iVar4 = NEON_umaxv(auVar1,4);
  if (iVar4 != 0) {
    ls_refine_scale___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
              (param_2,param_3,param_4);
  }
  auVar2[1] = param_1[1] & ~auVar8[1];
  auVar2[0] = param_1[0] & ~auVar8[0];
  auVar2[2] = param_1[2] & ~auVar8[2];
  auVar2[3] = param_1[3] & ~auVar8[3];
  auVar2[4] = param_1[4] & ~auVar8[4];
  auVar2[5] = param_1[5] & ~auVar8[5];
  auVar2[6] = param_1[6] & ~auVar8[6];
  auVar2[7] = param_1[7] & ~auVar8[7];
  auVar2[8] = param_1[8] & ~auVar8[8];
  auVar2[9] = param_1[9] & ~auVar8[9];
  auVar2[10] = param_1[10] & ~auVar8[10];
  auVar2[11] = param_1[11] & ~auVar8[11];
  auVar2[12] = param_1[12] & ~auVar8[12];
  auVar2[13] = param_1[13] & ~auVar8[13];
  auVar2[14] = param_1[14] & ~auVar8[14];
  auVar2[15] = param_1[15] & ~auVar8[15];
  iVar4 = NEON_umaxv(auVar2,4);
  if (iVar4 != 0) {
    ls_refine_pair___un_3C_vyf_3E_un_3C_vyf_3E_un_3C_s_5B_vyastc_block_5D__3E_
              (param_2,param_3,param_4);
    return;
  }
  return;
}


