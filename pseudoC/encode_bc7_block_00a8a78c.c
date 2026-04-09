// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode_bc7_block
// Entry Point: 00a8a78c
// Size: 1452 bytes
// Signature: undefined __cdecl encode_bc7_block(void * param_1, bc7_optimization_results * param_2)


/* BC7EncodeUtil::BC7Enc16::encode_bc7_block(void*,
   BC7EncodeUtil::BC7Enc16::bc7_optimization_results const*) */

void BC7EncodeUtil::BC7Enc16::encode_bc7_block(void *param_1,bc7_optimization_results *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar17 = *(uint *)param_2;
  uVar11 = (ulong)uVar17;
  if ((0x8aUL >> (uVar11 & 0x3f) & 1) == 0) {
    pbVar13 = &g_bc7_partition1;
  }
  else {
    pbVar13 = g_bc7_partition2 + (uint)(*(int *)(param_2 + 4) << 4);
  }
  uVar14 = 0;
  uStack_48 = *(undefined8 *)(param_2 + 0x10);
  local_50 = *(undefined8 *)(param_2 + 8);
  local_70 = *(undefined8 *)(param_2 + 0x20);
  local_68 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = (uint)*(byte *)((long)&g_bc7_num_subsets + uVar11);
  uVar9 = uVar10;
  if (*(byte *)((long)&g_bc7_num_subsets + uVar11) < 2) {
    uVar9 = 1;
  }
  uVar12 = 1 << (ulong)(*(byte *)((long)&g_bc7_color_index_bitcount + (long)(int)uVar17) & 0x1f);
  local_78 = 0xffffffffffffffff;
  local_60[1] = *(undefined8 *)(param_2 + 0x30);
  local_60[0] = *(undefined8 *)(param_2 + 0x28);
  do {
    if (uVar14 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = (uint)(byte)g_bc7_table_anchor_index_second_subset[*(uint *)(param_2 + 4)];
    }
    bVar2 = *(byte *)((long)&local_50 + (ulong)uVar18);
    *(uint *)((long)&local_78 + uVar14 * 4) = uVar18;
    if ((uVar12 >> 1 & (uint)bVar2) != 0) {
      cVar7 = (char)uVar12;
      if (uVar14 == *pbVar13) {
        local_50 = CONCAT71(local_50._1_7_,cVar7 + ~(byte)local_50);
      }
      if (uVar14 == pbVar13[1]) {
        local_50._0_2_ = CONCAT11(cVar7 + ~local_50._1_1_,(byte)local_50);
      }
      if (uVar14 == pbVar13[2]) {
        local_50._0_3_ = CONCAT12(cVar7 + ~local_50._2_1_,(undefined2)local_50);
      }
      if (uVar14 == pbVar13[3]) {
        local_50._0_4_ = CONCAT13(cVar7 + ~local_50._3_1_,(undefined3)local_50);
      }
      if (uVar14 == pbVar13[4]) {
        local_50._0_5_ = CONCAT14(cVar7 + ~local_50._4_1_,(undefined4)local_50);
      }
      if (uVar14 == pbVar13[5]) {
        local_50._0_6_ = CONCAT15(cVar7 + ~local_50._5_1_,(undefined5)local_50);
      }
      if (uVar14 == pbVar13[6]) {
        local_50._0_7_ = CONCAT16(cVar7 + ~local_50._6_1_,(undefined6)local_50);
      }
      if (uVar14 == pbVar13[7]) {
        local_50 = CONCAT17(cVar7 + ~local_50._7_1_,(undefined7)local_50);
      }
      if (uVar14 == pbVar13[8]) {
        uStack_48 = CONCAT71(uStack_48._1_7_,cVar7 + ~(byte)uStack_48);
      }
      if (uVar14 == pbVar13[9]) {
        uStack_48._0_2_ = CONCAT11(cVar7 + ~uStack_48._1_1_,(byte)uStack_48);
      }
      if (uVar14 == pbVar13[10]) {
        uStack_48._0_3_ = CONCAT12(cVar7 + ~uStack_48._2_1_,(undefined2)uStack_48);
      }
      if (uVar14 == pbVar13[0xb]) {
        uStack_48._0_4_ = CONCAT13(cVar7 + ~uStack_48._3_1_,(undefined3)uStack_48);
      }
      if (uVar14 == pbVar13[0xc]) {
        uStack_48._0_5_ = CONCAT14(cVar7 + ~uStack_48._4_1_,(undefined4)uStack_48);
      }
      if (uVar14 == pbVar13[0xd]) {
        uStack_48._0_6_ = CONCAT15(cVar7 + ~uStack_48._5_1_,(undefined5)uStack_48);
      }
      if (uVar14 == pbVar13[0xe]) {
        uStack_48._0_7_ = CONCAT16(cVar7 + ~uStack_48._6_1_,(undefined6)uStack_48);
      }
      if (uVar14 == pbVar13[0xf]) {
        uStack_48 = CONCAT17(cVar7 + ~uStack_48._7_1_,(undefined7)uStack_48);
      }
      lVar19 = uVar14 * 4;
      uVar1 = *(undefined4 *)((long)local_60 + lVar19 + -8);
      *(undefined4 *)((long)local_60 + lVar19 + -8) = *(undefined4 *)((long)&local_70 + lVar19);
      *(undefined4 *)((long)&local_70 + lVar19) = uVar1;
      if (uVar17 != 1) {
        uVar20 = NEON_rev64(local_60[uVar14],4);
        local_60[uVar14] = uVar20;
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar9 != uVar14);
  uVar9 = uVar17 + 1;
  uVar12 = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((long)param_1 + 8) = 0;
  if (uVar17 != 0xffffffff) {
    uVar18 = 1 << (ulong)(uVar17 & 0x1f);
    do {
      uVar6 = uVar12 >> 3;
      uVar4 = 8 - (uVar12 & 7);
      if (uVar9 <= uVar4) {
        uVar4 = uVar9;
      }
      iVar3 = uVar18 << (ulong)(uVar12 & 7);
      uVar9 = uVar9 - uVar4;
      uVar12 = uVar4 + uVar12;
      uVar18 = uVar18 >> (ulong)(uVar4 & 0x1f);
      *(byte *)((long)param_1 + (ulong)uVar6) =
           *(byte *)((long)param_1 + (ulong)uVar6) | (byte)iVar3;
    } while (uVar9 != 0);
    if (uVar11 - 4 < 3) goto LAB_00a8ab14;
  }
  uVar9 = *(uint *)(param_2 + 4);
  uVar18 = 6;
  do {
    uVar6 = uVar12 >> 3;
    uVar4 = 8 - (uVar12 & 7);
    if (uVar18 <= uVar4) {
      uVar4 = uVar18;
    }
    iVar3 = uVar9 << (ulong)(uVar12 & 7);
    uVar18 = uVar18 - uVar4;
    uVar12 = uVar4 + uVar12;
    uVar9 = uVar9 >> (ulong)(uVar4 & 0x1f);
    *(byte *)((long)param_1 + (ulong)uVar6) = *(byte *)((long)param_1 + (ulong)uVar6) | (byte)iVar3;
  } while (uVar18 != 0);
LAB_00a8ab14:
  lVar19 = 3;
  if (3 < uVar17) {
    lVar19 = 4;
  }
  lVar15 = 0;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  uVar14 = (ulong)uVar10;
  do {
    uVar8 = 0;
    do {
      if (lVar15 == 3) {
        bVar2 = *(byte *)((long)&g_bc7_alpha_precision_table + uVar11);
        uVar9 = (uint)(char)bVar2;
      }
      else {
        bVar2 = *(byte *)((long)&g_bc7_color_precision_table + uVar11);
        uVar9 = (uint)bVar2;
      }
      if (bVar2 != 0) {
        uVar10 = (uint)*(byte *)((long)local_60 + lVar15 + uVar8 * 4 + -8);
        do {
          uVar4 = uVar12 >> 3;
          uVar18 = 8 - (uVar12 & 7);
          if (uVar9 <= uVar18) {
            uVar18 = uVar9;
          }
          iVar3 = uVar10 << (ulong)(uVar12 & 7);
          uVar9 = uVar9 - uVar18;
          uVar12 = uVar18 + uVar12;
          uVar10 = uVar10 >> (ulong)(uVar18 & 0x1f);
          *(byte *)((long)param_1 + (ulong)uVar4) =
               *(byte *)((long)param_1 + (ulong)uVar4) | (byte)iVar3;
        } while (uVar9 != 0);
      }
      if (lVar15 == 3) {
        bVar2 = *(byte *)((long)&g_bc7_alpha_precision_table + uVar11);
        uVar9 = (uint)(char)bVar2;
      }
      else {
        bVar2 = *(byte *)((long)&g_bc7_color_precision_table + uVar11);
        uVar9 = (uint)bVar2;
      }
      if (bVar2 != 0) {
        uVar10 = (uint)*(byte *)((long)&local_70 + lVar15 + uVar8 * 4);
        do {
          uVar4 = uVar12 >> 3;
          uVar18 = 8 - (uVar12 & 7);
          if (uVar9 <= uVar18) {
            uVar18 = uVar9;
          }
          iVar3 = uVar10 << (ulong)(uVar12 & 7);
          uVar9 = uVar9 - uVar18;
          uVar12 = uVar18 + uVar12;
          uVar10 = uVar10 >> (ulong)(uVar18 & 0x1f);
          *(byte *)((long)param_1 + (ulong)uVar4) =
               *(byte *)((long)param_1 + (ulong)uVar4) | (byte)iVar3;
        } while (uVar9 != 0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar14);
    lVar15 = lVar15 + 1;
  } while (lVar15 != lVar19);
  piVar16 = (int *)((ulong)local_60 | 4);
  do {
    uVar9 = uVar12 + 1;
    *(byte *)((long)param_1 + (ulong)(uVar12 >> 3)) =
         *(byte *)((long)param_1 + (ulong)(uVar12 >> 3)) |
         (byte)(piVar16[-1] << (ulong)(uVar12 & 7));
    if (uVar17 != 1) {
      *(byte *)((long)param_1 + (ulong)(uVar9 >> 3)) =
           *(byte *)((long)param_1 + (ulong)(uVar9 >> 3)) | (byte)(*piVar16 << (ulong)(uVar9 & 7));
      uVar9 = uVar12 + 2;
    }
    uVar12 = uVar9;
    uVar11 = (ulong)uVar12;
    piVar16 = piVar16 + 2;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  bVar2 = *(byte *)((long)&g_bc7_color_index_bitcount + (long)(int)uVar17);
  uVar14 = 0;
  do {
    uVar17 = (uint)bVar2 - (uint)(uVar14 == (local_78 & 0xffffffff) || uVar14 == local_78 >> 0x20);
    if (uVar17 != 0) {
      uVar9 = (uint)*(byte *)((long)&local_50 + uVar14);
      do {
        uVar10 = (uint)uVar11 & 7;
        uVar8 = uVar11 >> 3;
        uVar12 = 8 - uVar10;
        if (uVar17 <= uVar12) {
          uVar12 = uVar17;
        }
        iVar3 = uVar9 << (ulong)uVar10;
        uVar17 = uVar17 - uVar12;
        uVar11 = (ulong)(uVar12 + (uint)uVar11);
        uVar9 = uVar9 >> (ulong)(uVar12 & 0x1f);
        *(byte *)((long)param_1 + uVar8) = *(byte *)((long)param_1 + uVar8) | (byte)iVar3;
      } while (uVar17 != 0);
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x10);
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


