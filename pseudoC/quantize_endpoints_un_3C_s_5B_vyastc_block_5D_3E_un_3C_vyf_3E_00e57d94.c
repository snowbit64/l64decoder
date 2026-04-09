// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quantize_endpoints___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_
// Entry Point: 00e57d94
// Size: 148 bytes
// Signature: undefined quantize_endpoints___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(void)


void quantize_endpoints___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_
               (undefined param_1 [16],long param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  int iVar3;
  int iVar6;
  undefined auVar4 [16];
  undefined auVar5 [16];
  ulong uVar7;
  ulong uVar8;
  
  auVar1 = *(undefined (*) [16])(param_2 + 0x160);
  iVar3 = auVar1._4_4_;
  iVar6 = auVar1._12_4_;
  uVar7 = CONCAT44(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e),(auVar1._0_4_ / 4) * 4) &
          0xfffffffcffffffff;
  uVar8 = CONCAT44(iVar6 + ((uint)(iVar6 >> 0x1f) >> 0x1e),(auVar1._8_4_ / 4) * 4) &
          0xfffffffcffffffff;
  auVar4._0_4_ = auVar1._0_4_ - (int)uVar7;
  auVar4._4_4_ = iVar3 - (int)(uVar7 >> 0x20);
  auVar4._8_4_ = auVar1._8_4_ - (int)uVar8;
  auVar4._12_4_ = iVar6 - (int)(uVar8 >> 0x20);
  auVar5._8_4_ = 2;
  auVar5._0_8_ = 0x200000002;
  auVar5._12_4_ = 2;
  auVar5 = NEON_cmeq(auVar4,auVar5,4);
  auVar1[1] = auVar5[1] & param_1[1];
  auVar1[0] = auVar5[0] & param_1[0];
  auVar1[2] = auVar5[2] & param_1[2];
  auVar1[3] = auVar5[3] & param_1[3];
  auVar1[4] = auVar5[4] & param_1[4];
  auVar1[5] = auVar5[5] & param_1[5];
  auVar1[6] = auVar5[6] & param_1[6];
  auVar1[7] = auVar5[7] & param_1[7];
  auVar1[8] = auVar5[8] & param_1[8];
  auVar1[9] = auVar5[9] & param_1[9];
  auVar1[10] = auVar5[10] & param_1[10];
  auVar1[11] = auVar5[11] & param_1[11];
  auVar1[12] = auVar5[12] & param_1[12];
  auVar1[13] = auVar5[13] & param_1[13];
  auVar1[14] = auVar5[14] & param_1[14];
  auVar1[15] = auVar5[15] & param_1[15];
  iVar3 = NEON_umaxv(auVar1,4);
  if (iVar3 != 0) {
    quantize_endpoints_scale___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(param_2,param_3);
  }
  auVar2[1] = param_1[1] & ~auVar5[1];
  auVar2[0] = param_1[0] & ~auVar5[0];
  auVar2[2] = param_1[2] & ~auVar5[2];
  auVar2[3] = param_1[3] & ~auVar5[3];
  auVar2[4] = param_1[4] & ~auVar5[4];
  auVar2[5] = param_1[5] & ~auVar5[5];
  auVar2[6] = param_1[6] & ~auVar5[6];
  auVar2[7] = param_1[7] & ~auVar5[7];
  auVar2[8] = param_1[8] & ~auVar5[8];
  auVar2[9] = param_1[9] & ~auVar5[9];
  auVar2[10] = param_1[10] & ~auVar5[10];
  auVar2[11] = param_1[11] & ~auVar5[11];
  auVar2[12] = param_1[12] & ~auVar5[12];
  auVar2[13] = param_1[13] & ~auVar5[13];
  auVar2[14] = param_1[14] & ~auVar5[14];
  auVar2[15] = param_1[15] & ~auVar5[15];
  iVar3 = NEON_umaxv(auVar2,4);
  if (iVar3 != 0) {
    quantize_endpoints_pair___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(param_2,param_3);
    return;
  }
  return;
}


