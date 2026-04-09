// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Purify
// Entry Point: 00a8504c
// Size: 532 bytes
// Signature: undefined __cdecl Purify(uchar * param_1, uint param_2)


/* BC6BC7Util::D3DX_BC7::Purify(unsigned char*, unsigned int) */

void BC6BC7Util::D3DX_BC7::Purify(uchar *param_1,uint param_2)

{
  long lVar1;
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  ulong uVar5;
  uint in_w2;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined uVar11;
  ulong uVar12;
  undefined in_q1 [16];
  ulong uVar13;
  undefined in_q2 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  ulong uVar18;
  undefined in_q3 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined4 uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined4 local_148;
  float afStack_144 [15];
  undefined8 local_108 [8];
  undefined8 local_c8 [8];
  undefined8 local_88 [8];
  long local_48;
  
  uVar5 = (ulong)param_2;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ReadBlockData((D3DX_BC7 *)param_1,(BlockData *)&local_148);
  if (((byte)local_148._0_1_ < 8) && ((1 << (ulong)((byte)local_148._0_1_ & 0x1f) & 0x8aU) != 0)) {
    if ((local_148._1_1_ & 0xfe) != 0x3e) goto LAB_00a85234;
  }
  else if ((((byte)local_148._0_1_ & 0xfd) != 0) ||
          ((((byte)local_148._0_1_ != 0 || ((local_148._1_1_ & 0xfe) != 0xe)) &&
           ((0x3f < local_148._1_1_ ||
            ((1L << ((ulong)local_148._1_1_ & 0x3f) & 0xc800000180000000U) == 0))))))
  goto LAB_00a85234;
  if (uVar5 == 0) {
    Decode((D3DX_BC7 *)param_1,(HDRColorA *)&local_148,false);
  }
  else {
    lVar6 = 0;
    puVar7 = local_c8;
    do {
      uVar12 = (ulong)in_w2 + lVar6;
      uVar13 = (ulong)(in_w2 * 2) + lVar6;
      uVar18 = (ulong)(in_w2 * 3) + lVar6;
      iVar8 = (int)uVar12;
      uVar23 = *(undefined4 *)(uVar5 + lVar6);
      lVar6 = lVar6 + 4;
      auVar25._1_15_ = in_q1._1_15_;
      auVar25[0] = *(undefined *)(uVar5 + (uVar12 & 0xffffffff));
      auVar14._1_15_ = in_q2._1_15_;
      auVar14[0] = *(undefined *)(uVar5 + (uVar13 & 0xffffffff));
      iVar9 = (int)uVar13;
      uVar11 = (undefined)((uint)uVar23 >> 8);
      auVar19._1_15_ = in_q3._1_15_;
      auVar19[0] = *(undefined *)(uVar5 + (uVar18 & 0xffffffff));
      auVar17._3_13_ = in_q1._3_13_;
      auVar17._0_2_ = auVar25._0_2_;
      auVar17[2] = *(undefined *)(uVar5 + (iVar8 + 1));
      iVar10 = (int)uVar18;
      auVar15._3_13_ = in_q2._3_13_;
      auVar15._0_2_ = auVar14._0_2_;
      auVar15[2] = *(undefined *)(uVar5 + (iVar9 + 1));
      auVar20._3_13_ = in_q3._3_13_;
      auVar20._0_2_ = auVar19._0_2_;
      auVar20[2] = *(undefined *)(uVar5 + (iVar10 + 1));
      auVar2._1_11_ = in_q1._5_11_;
      auVar2[0] = *(undefined *)(uVar5 + (iVar8 + 2));
      auVar3._1_11_ = in_q2._5_11_;
      auVar3[0] = *(undefined *)(uVar5 + (iVar9 + 2));
      auVar24._6_2_ = 0;
      auVar24._0_6_ =
           (uint6)CONCAT14(uVar11,(uint)CONCAT12(uVar11,(ushort)(byte)uVar23)) & 0xffff0000ffff;
      auVar24[8] = (char)((uint)uVar23 >> 0x10);
      auVar24._9_3_ = 0;
      auVar24[12] = (char)((uint)uVar23 >> 0x18);
      auVar24._13_3_ = 0;
      auVar4._1_11_ = in_q3._5_11_;
      auVar4[0] = *(undefined *)(uVar5 + (iVar10 + 2));
      auVar25 = NEON_ucvtf(auVar24,4);
      uVar12 = CONCAT26((short)CONCAT91(in_q1._7_9_,*(undefined *)(uVar5 + (iVar8 + 3))),
                        CONCAT24(auVar2._0_2_,CONCAT22(auVar17._2_2_,auVar17._0_2_))) &
               0xff00ff00ff00ff;
      uVar13 = CONCAT26((short)CONCAT91(in_q2._7_9_,*(undefined *)(uVar5 + (iVar9 + 3))),
                        CONCAT24(auVar3._0_2_,CONCAT22(auVar15._2_2_,auVar15._0_2_))) &
               0xff00ff00ff00ff;
      uVar18 = CONCAT26((short)CONCAT91(in_q3._7_9_,*(undefined *)(uVar5 + (iVar10 + 3))),
                        CONCAT24(auVar4._0_2_,CONCAT22(auVar20._2_2_,auVar20._0_2_))) &
               0xff00ff00ff00ff;
      auVar22._2_2_ = 0;
      auVar22._0_2_ = (ushort)uVar12;
      auVar22._4_2_ = (short)(uVar12 >> 0x10);
      auVar22._6_2_ = 0;
      auVar22._8_2_ = (short)(uVar12 >> 0x20);
      auVar22._10_2_ = 0;
      auVar22._12_2_ = (short)(uVar12 >> 0x30);
      auVar22._14_2_ = 0;
      auVar16._2_2_ = 0;
      auVar16._0_2_ = (ushort)uVar13;
      auVar16._4_2_ = (short)(uVar13 >> 0x10);
      auVar16._6_2_ = 0;
      auVar16._8_2_ = (short)(uVar13 >> 0x20);
      auVar16._10_2_ = 0;
      auVar16._12_2_ = (short)(uVar13 >> 0x30);
      auVar16._14_2_ = 0;
      *(float *)(puVar7 + -0xe) = auVar25._8_4_ * 0.003921569;
      *(float *)((long)puVar7 + -0x6c) = auVar25._12_4_ * 0.003921569;
      *(float *)(puVar7 + -0x10) = auVar25._0_4_ * 0.003921569;
      *(float *)((long)puVar7 + -0x7c) = auVar25._4_4_ * 0.003921569;
      auVar21._2_2_ = 0;
      auVar21._0_2_ = (ushort)uVar18;
      auVar21._4_2_ = (short)(uVar18 >> 0x10);
      auVar21._6_2_ = 0;
      auVar21._8_2_ = (short)(uVar18 >> 0x20);
      auVar21._10_2_ = 0;
      auVar21._12_2_ = (short)(uVar18 >> 0x30);
      auVar21._14_2_ = 0;
      auVar25 = NEON_ucvtf(auVar22,4);
      auVar17 = NEON_ucvtf(auVar16,4);
      auVar22 = NEON_ucvtf(auVar21,4);
      in_q1._0_8_ = CONCAT44(auVar25._4_4_ * 0.003921569,auVar25._0_4_ * 0.003921569);
      in_q1._8_4_ = auVar25._8_4_ * 0.003921569;
      in_q1._12_4_ = auVar25._12_4_ * 0.003921569;
      in_q2._0_8_ = CONCAT44(auVar17._4_4_ * 0.003921569,auVar17._0_4_ * 0.003921569);
      in_q2._8_4_ = auVar17._8_4_ * 0.003921569;
      in_q2._12_4_ = auVar17._12_4_ * 0.003921569;
      in_q3._0_8_ = CONCAT44(auVar22._4_4_ * 0.003921569,auVar22._0_4_ * 0.003921569);
      in_q3._8_4_ = auVar22._8_4_ * 0.003921569;
      in_q3._12_4_ = auVar22._12_4_ * 0.003921569;
      puVar7[-7] = in_q1._8_8_;
      puVar7[-8] = in_q1._0_8_;
      puVar7[1] = in_q2._8_8_;
      *puVar7 = in_q2._0_8_;
      puVar7[9] = in_q3._8_8_;
      puVar7[8] = in_q3._0_8_;
      puVar7 = puVar7 + 2;
    } while (lVar6 != 0x10);
  }
  Encode((D3DX_BC7 *)param_1,(HDRColorA *)&local_148,3,true);
LAB_00a85234:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


