// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load_block_parameters___un_3C_s_5B_vyastc_block_5D__3E_vyuun_3C_s_5B_unastc_enc_context_5D__3E_
// Entry Point: 00e5b950
// Size: 424 bytes
// Signature: undefined load_block_parameters___un_3C_s_5B_vyastc_block_5D__3E_vyuun_3C_s_5B_unastc_enc_context_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */

void load_block_parameters___un_3C_s_5B_vyastc_block_5D__3E_vyuun_3C_s_5B_unastc_enc_context_5D__3E_
               (undefined param_1 [16],undefined param_2 [16],undefined4 *param_3,
               undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  
  uVar7 = param_1._12_4_;
  uVar6 = param_1._8_4_;
  uVar5 = param_1._4_4_;
  uVar4 = param_1._0_4_;
  uVar1 = param_4[1];
  bVar8 = *(byte *)(param_4 + 3);
  uVar12 = (uint)(param_2[0] & 1) + (uint)(param_2[4] & 2) +
           (uint)(param_2[8] & 4) + (uint)(param_2[12] & 8);
  *param_3 = *param_4;
  param_3[1] = uVar1;
  uVar1 = param_4[4];
  uVar2 = param_4[5];
  uVar3 = param_4[2];
  *(byte *)(param_3 + 2) = bVar8 & 1;
  param_3[0x4c] = uVar1;
  param_3[0x54] = uVar2;
  param_3[0x55] = uVar3;
  if ((uVar12 & 1) != 0) {
    param_3[4] = (uint)(param_1[0] & 0xf);
  }
  if ((uVar12 >> 1 & 1) != 0) {
    param_3[5] = (uint)(param_1[4] & 0xf);
  }
  if ((uVar12 >> 2 & 1) != 0) {
    param_3[6] = (uint)(param_1[8] & 0xf);
  }
  if ((uVar12 >> 3 & 1) == 0) {
    bVar8 = (byte)(uVar4 >> 4);
    bVar9 = (byte)(uVar5 >> 4);
    bVar10 = (byte)(uVar6 >> 4);
    bVar11 = (byte)(uVar7 >> 4);
  }
  else {
    param_3[7] = (uint)(param_1[12] & 0xf);
    bVar8 = (byte)(uVar4 >> 4);
    bVar9 = (byte)(uVar5 >> 4);
    bVar10 = (byte)(uVar6 >> 4);
    bVar11 = (byte)(uVar7 >> 4);
  }
  if ((uVar12 & 1) != 0) {
    param_3[0x48] = (uint)(bVar8 & 3);
  }
  if ((uVar12 >> 1 & 1) != 0) {
    param_3[0x49] = (uint)(bVar9 & 3);
  }
  if ((uVar12 >> 2 & 1) != 0) {
    param_3[0x4a] = (uint)(bVar10 & 3);
  }
  if ((uVar12 >> 3 & 1) != 0) {
    param_3[0x4b] = (uint)(bVar11 & 3);
  }
  if ((uVar12 & 1) != 0) {
    param_3[0x50] = 0;
  }
  if ((uVar12 >> 1 & 1) != 0) {
    param_3[0x51] = 0;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    param_3[0x52] = 0;
  }
  if ((uVar12 >> 3 & 1) != 0) {
    param_3[0x53] = 0;
  }
  if ((uVar12 & 1) != 0) {
    param_3[0x58] = ((byte)(uVar4 >> 5) & 6) + 6;
  }
  if ((uVar12 >> 1 & 1) != 0) {
    param_3[0x59] = ((byte)(uVar5 >> 5) & 6) + 6;
  }
  if ((uVar12 >> 2 & 1) != 0) {
    param_3[0x5a] = ((byte)(uVar6 >> 5) & 6) + 6;
  }
  if ((uVar12 >> 3 & 1) != 0) {
    param_3[0x5b] = ((byte)(uVar7 >> 5) & 6) + 6;
  }
  if ((uVar12 & 1) != 0) {
    param_3[0x68] = (uint)(param_1[1] & 0x1f);
  }
  if ((uVar12 >> 1 & 1) != 0) {
    param_3[0x69] = (uint)(param_1[5] & 0x1f);
  }
  if ((uVar12 >> 2 & 1) != 0) {
    param_3[0x6a] = (uint)(param_1[9] & 0x1f);
  }
  if ((uVar12 >> 3 & 1) == 0) {
    return;
  }
  param_3[0x6b] = (uint)(param_1[13] & 0x1f);
  return;
}


