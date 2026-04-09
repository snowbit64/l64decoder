// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f164
// Entry Point: 00e4f164
// Size: 720 bytes
// Signature: undefined FUN_00e4f164(void)


ulong FUN_00e4f164(long param_1,long param_2,uint param_3,uint *param_4)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined8 uStack_bc;
  undefined local_b0 [8];
  undefined auStack_a8 [8];
  undefined auStack_a0 [4];
  undefined auStack_9c [8];
  undefined auStack_94 [12];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  auStack_94._4_8_ = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_a8 = (undefined  [8])0x0;
  local_b0 = (undefined  [8])0x0;
  stack0xffffffffffffff68 = 0;
  _auStack_a0 = 0;
  if ((int)param_3 < 1) {
    uVar15 = 0;
LAB_00e4f1c4:
    uVar14 = (uint)uVar15;
    if (uVar14 != param_3) {
      uVar15 = uVar15 & 0xffffffff;
      if (*(char *)(param_1 + 0x1b) == '\0') {
        (*(undefined4 **)(param_1 + 0x28))[uVar15] = 0;
        bVar3 = *(byte *)(param_2 + uVar15);
      }
      else {
        uVar2 = *(undefined *)(param_2 + uVar15);
        **(undefined4 **)(param_1 + 0x28) = 0;
        **(undefined **)(param_1 + 8) = uVar2;
        *param_4 = uVar14;
        bVar3 = *(byte *)(param_2 + uVar15);
      }
      if (bVar3 != 0) {
        uVar15 = (ulong)bVar3;
        if (bVar3 < 8) {
          uVar19 = 1;
        }
        else {
          uVar12 = uVar15 & 0xf8;
          uVar19 = uVar12 | 1;
          puVar13 = (undefined8 *)(auStack_a0 + 4);
          iVar22 = 3;
          iVar23 = 4;
          iVar20 = 1;
          iVar21 = 2;
          uVar16 = uVar12;
          do {
            auVar24._0_4_ = 0x20 - iVar20;
            auVar24._4_4_ = 0x20 - iVar21;
            auVar24._8_4_ = 0x20 - iVar22;
            auVar24._12_4_ = 0x20 - iVar23;
            uVar16 = uVar16 - 8;
            auVar26._0_4_ = 0x1c - iVar20;
            auVar26._4_4_ = 0x1c - iVar21;
            auVar26._8_4_ = 0x1c - iVar22;
            auVar26._12_4_ = 0x1c - iVar23;
            iVar20 = iVar20 + 8;
            iVar21 = iVar21 + 8;
            iVar22 = iVar22 + 8;
            iVar23 = iVar23 + 8;
            auVar28._8_4_ = 1;
            auVar28._0_8_ = 0x100000001;
            auVar28._12_4_ = 1;
            auVar28 = NEON_ushl(auVar28,auVar24,4);
            auVar31._8_4_ = 1;
            auVar31._0_8_ = 0x100000001;
            auVar31._12_4_ = 1;
            auVar31 = NEON_ushl(auVar31,auVar26,4);
            puVar13[-1] = auVar28._8_8_;
            puVar13[-2] = auVar28._0_8_;
            puVar13[1] = auVar31._8_8_;
            *puVar13 = auVar31._0_8_;
            puVar13 = puVar13 + 4;
          } while (uVar16 != 0);
          if (uVar12 == uVar15) goto LAB_00e4f2a8;
        }
        lVar8 = (uVar15 - uVar19) + 1;
        uVar18 = 0x20 - (int)uVar19;
        piVar17 = (int *)(local_b0 + uVar19 * 4);
        do {
          uVar4 = uVar18 & 0x1f;
          lVar8 = lVar8 + -1;
          uVar18 = uVar18 - 1;
          *piVar17 = 1 << (ulong)uVar4;
          piVar17 = piVar17 + 1;
        } while (lVar8 != 0);
      }
LAB_00e4f2a8:
      uVar15 = (ulong)(uVar14 + 1);
      uVar16 = 1;
      if ((int)(uVar14 + 1) < (int)param_3) {
        uVar19 = 1;
        do {
          bVar3 = *(byte *)(param_2 + uVar15);
          uVar16 = (ulong)bVar3;
          if (bVar3 != 0xff) {
            if (bVar3 == 0) {
              uVar16 = 0;
              break;
            }
            lVar8 = -uVar16;
            while (uVar14 = *(uint *)(local_b0 + (uVar16 & 0xffffffff) * 4), uVar14 == 0) {
              uVar16 = uVar16 - 1;
              lVar8 = lVar8 + 1;
              if ((int)uVar16 == 0) goto LAB_00e4f40c;
            }
            cVar1 = *(char *)(param_1 + 0x1b);
            uVar18 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
            uVar18 = (uVar18 & 0xcccccccc) >> 2 | (uVar18 & 0x33333333) << 2;
            uVar18 = (uVar18 & 0xf0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f) << 4;
            uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
            uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
            lVar11 = *(long *)(param_1 + 0x28);
            *(undefined4 *)(local_b0 + (uVar16 & 0xffffffff) * 4) = 0;
            if (cVar1 == '\0') {
              *(uint *)(lVar11 + uVar15 * 4) = uVar18;
            }
            else {
              uVar12 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
              *(uint *)(lVar11 + uVar12) = uVar18;
              *(byte *)(*(long *)(param_1 + 8) + (long)(int)uVar19) = bVar3;
              *(int *)((long)param_4 + uVar12) = (int)uVar15;
            }
            bVar3 = *(byte *)(param_2 + uVar15);
            uVar12 = (ulong)bVar3;
            uVar19 = (ulong)((int)uVar19 + 1);
            if ((int)uVar16 < (int)(uint)bVar3) {
              uVar10 = uVar12 - uVar16;
              if (7 < uVar10) {
                auVar25._1_3_ = 0;
                auVar25[0] = bVar3;
                auVar25._4_4_ = bVar3 - 1;
                auVar25._8_4_ = bVar3 - 2;
                auVar25._12_4_ = bVar3 - 3;
                uVar9 = uVar12 + lVar8 & 0xfffffffffffffff8;
                puVar13 = (undefined8 *)((long)&uStack_bc + uVar12 * 4);
                do {
                  iVar20 = auVar25._0_4_;
                  auVar27._0_4_ = 0x20 - iVar20;
                  iVar21 = auVar25._4_4_;
                  auVar27._4_4_ = 0x20 - iVar21;
                  iVar22 = auVar25._8_4_;
                  auVar27._8_4_ = 0x20 - iVar22;
                  iVar23 = auVar25._12_4_;
                  auVar27._12_4_ = 0x20 - iVar23;
                  uVar9 = uVar9 - 8;
                  auVar30._0_4_ = 0x24 - iVar20;
                  auVar30._4_4_ = 0x24 - iVar21;
                  auVar30._8_4_ = 0x24 - iVar22;
                  auVar30._12_4_ = 0x24 - iVar23;
                  auVar25._0_4_ = iVar20 + -8;
                  auVar25._4_4_ = iVar21 + -8;
                  auVar25._8_4_ = iVar22 + -8;
                  auVar25._12_4_ = iVar23 + -8;
                  auVar6._8_4_ = 1;
                  auVar6._0_8_ = 0x100000001;
                  auVar6._12_4_ = 1;
                  auVar28 = NEON_ushl(auVar6,auVar27,4);
                  auVar7._8_4_ = 1;
                  auVar7._0_8_ = 0x100000001;
                  auVar7._12_4_ = 1;
                  auVar31 = NEON_ushl(auVar7,auVar30,4);
                  auVar29._0_4_ = auVar28._0_4_ + uVar14;
                  auVar29._4_4_ = auVar28._4_4_ + uVar14;
                  auVar29._8_4_ = auVar28._8_4_ + uVar14;
                  auVar29._12_4_ = auVar28._12_4_ + uVar14;
                  auVar32._0_4_ = auVar31._0_4_ + uVar14;
                  auVar32._4_4_ = auVar31._4_4_ + uVar14;
                  auVar32._8_4_ = auVar31._8_4_ + uVar14;
                  auVar32._12_4_ = auVar31._12_4_ + uVar14;
                  auVar28 = NEON_rev64(auVar29,4);
                  auVar31 = NEON_rev64(auVar32,4);
                  auVar28 = NEON_ext(auVar28,auVar28,8,1);
                  auVar31 = NEON_ext(auVar31,auVar31,8,1);
                  puVar13[-1] = auVar31._8_8_;
                  puVar13[-2] = auVar31._0_8_;
                  puVar13[1] = auVar28._8_8_;
                  *puVar13 = auVar28._0_8_;
                  puVar13 = puVar13 + -4;
                } while (uVar9 != 0);
                uVar12 = uVar12 - (uVar10 & 0xfffffffffffffff8);
                if (uVar10 == (uVar10 & 0xfffffffffffffff8)) goto LAB_00e4f2e8;
              }
              uVar18 = 0x20 - (int)uVar12;
              do {
                uVar4 = uVar18 & 0x1f;
                uVar18 = uVar18 + 1;
                *(uint *)(local_b0 + uVar12 * 4) = (1 << (ulong)uVar4) + uVar14;
                uVar12 = uVar12 - 1;
              } while ((long)uVar16 < (long)uVar12);
            }
          }
LAB_00e4f2e8:
          uVar15 = uVar15 + 1;
          uVar16 = 1;
        } while ((int)uVar15 < (int)param_3);
      }
      goto LAB_00e4f40c;
    }
  }
  else {
    uVar15 = 0;
    do {
      if (*(char *)(param_2 + uVar15) != -1) goto LAB_00e4f1c4;
      uVar15 = uVar15 + 1;
    } while (param_3 != uVar15);
  }
  uVar16 = 1;
LAB_00e4f40c:
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


