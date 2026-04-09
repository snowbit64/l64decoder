// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: estimate_error___un_3C_s_5B_vyastc_rank_state_5D__3E_un_3C_s_5B_unastc_mode_5D__3E_
// Entry Point: 00e54f48
// Size: 224 bytes
// Signature: undefined estimate_error___un_3C_s_5B_vyastc_rank_state_5D__3E_un_3C_s_5B_unastc_mode_5D__3E_(void)


undefined  [16]
estimate_error___un_3C_s_5B_vyastc_rank_state_5D__3E_un_3C_s_5B_unastc_mode_5D__3E_
          (long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined auVar6 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (long)(param_2[4] + 1);
  }
  uVar4 = (ulong)(param_2[8] % 4 == 2);
  lVar1 = param_1 + (long)(param_2[1] + -2) * 0x70 + (long)(*param_2 + -2) * 0x10;
  lVar2 = param_1 + uVar4 * 0x50 + lVar3 * 0x10;
  uVar9 = *(undefined8 *)(lVar1 + 0x11e8);
  uVar8 = *(undefined8 *)(lVar1 + 0x11e0);
  uVar7 = *(undefined8 *)(lVar2 + 0x1008);
  uVar5 = *(undefined8 *)(lVar2 + 0x1000);
  if (param_2[8] < 9) {
    lVar3 = param_1 + uVar4 * 0x50 + lVar3 * 0x10;
    uVar16 = *(undefined8 *)(lVar3 + 0x10a8);
    uVar15 = *(undefined8 *)(lVar3 + 0x10a0);
    uVar5 = CONCAT44((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar15 >> 0x20),
                     (float)uVar5 + (float)uVar15);
    uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) + (float)((ulong)uVar16 >> 0x20),
                     (float)uVar7 + (float)uVar16);
  }
  fVar10 = (float)*(undefined8 *)(lVar2 + 0x1140);
  fVar11 = (float)((ulong)*(undefined8 *)(lVar2 + 0x1140) >> 0x20);
  fVar12 = (float)*(undefined8 *)(lVar2 + 0x1148);
  fVar13 = (float)((ulong)*(undefined8 *)(lVar2 + 0x1148) >> 0x20);
  fVar17 = (float)(&DAT_005639f0)[param_2[3]];
  fVar14 = (float)(&DAT_005639f0)[param_2[10]] *
           (float)(*(int *)(param_1 + 0x1cf4) * *(int *)(param_1 + 0x1cf0) * 9000);
  auVar6._0_4_ = (float)uVar8 + 0.0 + (float)uVar5 + (fVar10 + fVar10) * fVar17 + 0.0 + fVar14;
  auVar6._4_4_ = (float)((ulong)uVar8 >> 0x20) + 0.0 + (float)((ulong)uVar5 >> 0x20) +
                 (fVar11 + fVar11) * fVar17 + 0.0 + fVar14;
  auVar6._8_4_ = (float)uVar9 + 0.0 + (float)uVar7 + (fVar12 + fVar12) * fVar17 + 0.0 + fVar14;
  auVar6._12_4_ =
       (float)((ulong)uVar9 >> 0x20) + 0.0 + (float)((ulong)uVar7 >> 0x20) +
       (fVar13 + fVar13) * fVar17 + 0.0 + fVar14;
  return auVar6;
}


