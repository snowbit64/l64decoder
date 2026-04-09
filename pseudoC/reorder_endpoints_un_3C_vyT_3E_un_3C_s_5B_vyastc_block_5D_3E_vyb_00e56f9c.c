// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reorder_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_vyb
// Entry Point: 00e56f9c
// Size: 532 bytes
// Signature: undefined reorder_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_vyb(void)


void reorder_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_vyb
               (undefined param_1 [16],undefined param_2 [16],long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  
  auVar10 = compare_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_(param_2);
  bVar12 = (char)param_1[0] >> 7;
  bVar13 = (char)param_1[4] >> 7;
  bVar14 = (char)param_1[8] >> 7;
  bVar15 = (char)param_1[12] >> 7;
  auVar11[1] = ~bVar12;
  auVar11[0] = ~param_1[0];
  auVar11[2] = ~bVar12;
  auVar11[3] = ~bVar12;
  auVar11[4] = ~param_1[4];
  auVar11[5] = ~bVar13;
  auVar11[6] = ~bVar13;
  auVar11[7] = ~bVar13;
  auVar11[8] = ~param_1[8];
  auVar11[9] = ~bVar14;
  auVar11[10] = ~bVar14;
  auVar11[11] = ~bVar14;
  auVar11[12] = ~param_1[12];
  auVar11[13] = ~bVar15;
  auVar11[14] = ~bVar15;
  auVar11[15] = ~bVar15;
  auVar11 = NEON_cmeq(auVar10,auVar11,4);
  auVar10[0] = param_2[0] & auVar11[0];
  auVar10[1] = param_2[1] & auVar11[1];
  auVar10[2] = param_2[2] & auVar11[2];
  auVar10[3] = param_2[3] & auVar11[3];
  auVar10[4] = param_2[4] & auVar11[4];
  auVar10[5] = param_2[5] & auVar11[5];
  auVar10[6] = param_2[6] & auVar11[6];
  auVar10[7] = param_2[7] & auVar11[7];
  auVar10[8] = param_2[8] & auVar11[8];
  auVar10[9] = param_2[9] & auVar11[9];
  auVar10[10] = param_2[10] & auVar11[10];
  auVar10[11] = param_2[11] & auVar11[11];
  auVar10[12] = param_2[12] & auVar11[12];
  auVar10[13] = param_2[13] & auVar11[13];
  auVar10[14] = param_2[14] & auVar11[14];
  auVar10[15] = param_2[15] & auVar11[15];
  iVar7 = NEON_umaxv(auVar10,4);
  if (iVar7 != 0) {
    uVar9 = (uint)(auVar10[0] & 1) + (uint)(auVar10[4] & 2) +
            (uint)(auVar10[8] & 4) + (uint)(auVar10[12] & 8);
    lVar8 = 0;
    if ((uVar9 & 1) == 0) {
      do {
        lVar1 = param_3 + lVar8;
        uVar3 = *(undefined *)(lVar1 + 1);
        if ((uVar9 >> 1 & 1) == 0) {
          uVar4 = *(undefined *)(lVar1 + 2);
          uVar5 = *(undefined *)(lVar1 + 3);
        }
        else {
          *(undefined *)(lVar1 + 1) = *(undefined *)(lVar1 + 5);
          uVar4 = *(undefined *)(lVar1 + 2);
          uVar5 = *(undefined *)(lVar1 + 3);
        }
        if ((uVar9 >> 2 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 2) = *(undefined *)(lVar1 + 6);
        }
        if ((uVar9 >> 3 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 3) = *(undefined *)(lVar1 + 7);
        }
        if ((uVar9 >> 1 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 5) = uVar3;
        }
        if ((uVar9 >> 2 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 6) = uVar4;
        }
        if ((uVar9 >> 3 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 7) = uVar5;
        }
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x20);
    }
    else {
      do {
        puVar2 = (undefined *)(param_3 + lVar8);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *puVar2 = puVar2[4];
        if ((uVar9 >> 1 & 1) != 0) {
          puVar2[1] = puVar2[5];
        }
        if ((uVar9 >> 2 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 2) = puVar2[6];
        }
        if ((uVar9 >> 3 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 3) = puVar2[7];
        }
        *(undefined *)(param_3 + lVar8 + 4) = uVar3;
        if ((uVar9 >> 1 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 5) = uVar4;
        }
        if ((uVar9 >> 2 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 6) = uVar5;
        }
        if ((uVar9 >> 3 & 1) != 0) {
          *(undefined *)(param_3 + lVar8 + 7) = uVar6;
        }
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x20);
    }
  }
  return;
}


