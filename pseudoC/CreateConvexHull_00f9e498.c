// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateConvexHull
// Entry Point: 00f9e498
// Size: 2180 bytes
// Signature: undefined __thiscall CreateConvexHull(HullLibrary * this, HullDesc * param_1, HullResult * param_2)


/* HullLibrary::CreateConvexHull(HullDesc const&, HullResult&) */

ulong __thiscall
HullLibrary::CreateConvexHull(HullLibrary *this,HullDesc *param_1,HullResult *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint *__src;
  int iVar4;
  btVector3 *pbVar5;
  ulong uVar6;
  btVector3 *__src_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  int local_a8;
  btVector3 *local_a0;
  btAlignedObjectArray abStack_98 [4];
  undefined8 local_94;
  uint *local_88;
  char local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar24 = *(uint *)(param_1 + 4);
  local_88 = (uint *)0x0;
  local_80 = '\x01';
  local_94 = 0;
  local_b0 = 0;
  uVar22 = uVar24;
  if (uVar24 < 9) {
    uVar22 = 8;
  }
  local_a8 = 0;
  local_a0 = (btVector3 *)0x0;
  if ((int)uVar22 < 0) {
    pbVar5 = (btVector3 *)0x0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    pbVar5 = (btVector3 *)(*(code *)PTR_FUN_01048e38)((ulong)uVar22 << 4,0x10);
    uVar24 = *(uint *)(param_1 + 4);
  }
  uVar6 = CleanupVertices(this,uVar24,*(btVector3 **)(param_1 + 8),*(uint *)(param_1 + 0x10),
                          &local_b8,pbVar5,*(float *)(param_1 + 0x14),(btVector3 *)&local_78);
  uVar22 = local_b8;
  if ((uVar6 & 1) != 0) {
    uVar6 = (ulong)local_b8;
    if (local_b8 == 0) {
      iVar4 = calchull(this,pbVar5,0,abStack_98,&local_b4,*(int *)(param_1 + 0x18));
      iVar12 = local_b4;
    }
    else {
      uVar24 = 0;
      do {
        puVar17 = (undefined8 *)(pbVar5 + (long)(int)uVar24 * 0x10);
        uVar24 = uVar24 + 1;
        *puVar17 = CONCAT44((float)((ulong)*puVar17 >> 0x20) * (float)((ulong)local_78 >> 0x20),
                            (float)*puVar17 * (float)local_78);
        *(float *)(puVar17 + 1) = *(float *)(puVar17 + 1) * local_70;
      } while (local_b8 != uVar24);
      iVar4 = calchull(this,pbVar5,local_b8,abStack_98,&local_b4,*(int *)(param_1 + 0x18));
      iVar12 = local_b4;
    }
    if (iVar4 != 0) {
      uVar21 = (ulong)iVar12;
      uVar8 = uVar21 * 3;
      uVar24 = (uint)uVar8;
      local_b0 = CONCAT44(uVar24,uVar22);
      local_a8 = iVar12;
      local_a0 = pbVar5;
      if ((int)uVar22 < 1) {
        __src_00 = (btVector3 *)0x0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        __src_00 = (btVector3 *)(*(code *)PTR_FUN_01048e38)(uVar6 << 4,0x10);
      }
      __src = local_88;
      BringOutYourDead(this,pbVar5,uVar22,__src_00,&local_b8,local_88,uVar24);
      if (((byte)*param_1 & 1) == 0) {
        uVar22 = *(uint *)(param_2 + 0xc);
        *param_2 = (HullResult)0x1;
        *(uint *)(param_2 + 4) = local_b8;
        if (((int)uVar22 < (int)local_b8) && (*(int *)(param_2 + 0x10) < (int)local_b8)) {
          if (local_b8 == 0) {
            lVar7 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar7 = (*(code *)PTR_FUN_01048e38)((long)(int)local_b8 << 4,0x10);
            uVar22 = *(uint *)(param_2 + 0xc);
          }
          if (0 < (int)uVar22) {
            lVar13 = 0;
            do {
              uVar23 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar13);
              ((undefined8 *)(lVar7 + lVar13))[1] =
                   ((undefined8 *)(*(long *)(param_2 + 0x18) + lVar13))[1];
              *(undefined8 *)(lVar7 + lVar13) = uVar23;
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar22 * 0x10 - lVar13 != 0);
          }
          if ((*(long *)(param_2 + 0x18) != 0) && (param_2[0x20] != (HullResult)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          *(long *)(param_2 + 0x18) = lVar7;
          *(uint *)(param_2 + 0x10) = local_b8;
          param_2[0x20] = (HullResult)0x1;
        }
        uVar22 = *(uint *)(param_2 + 0x34);
        uVar24 = iVar12 * 4;
        *(uint *)(param_2 + 0xc) = local_b8;
        *(int *)(param_2 + 0x28) = iVar12;
        *(uint *)(param_2 + 0x2c) = uVar24;
        if ((int)(uVar22 + iVar12 * -4) < 0 != SBORROW4(uVar22,uVar24)) {
          lVar7 = (long)(int)uVar22;
          if (*(int *)(param_2 + 0x38) + iVar12 * -4 < 0 ==
              SBORROW4(*(int *)(param_2 + 0x38),uVar24)) {
            uVar6 = *(ulong *)(param_2 + 0x40);
          }
          else {
            if (uVar24 == 0) {
              uVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar6 = (*(code *)PTR_FUN_01048e38)
                                (-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2,
                                 0x10);
              uVar22 = *(uint *)(param_2 + 0x34);
            }
            uVar8 = *(ulong *)(param_2 + 0x40);
            if ((int)uVar22 < 1) {
              if (uVar8 != 0) goto LAB_00f9e9ec;
            }
            else {
              uVar9 = (ulong)uVar22;
              if ((uVar22 < 8) || ((uVar6 < uVar8 + uVar9 * 4 && (uVar8 < uVar6 + uVar9 * 4)))) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar9 & 0xfffffff8;
                puVar17 = (undefined8 *)(uVar8 + 0x10);
                puVar19 = (undefined8 *)(uVar6 + 0x10);
                uVar20 = uVar14;
                do {
                  puVar3 = puVar17 + -1;
                  uVar23 = puVar17[-2];
                  uVar31 = puVar17[1];
                  uVar28 = *puVar17;
                  uVar20 = uVar20 - 8;
                  puVar17 = puVar17 + 4;
                  puVar19[-1] = *puVar3;
                  puVar19[-2] = uVar23;
                  puVar19[1] = uVar31;
                  *puVar19 = uVar28;
                  puVar19 = puVar19 + 4;
                } while (uVar20 != 0);
                if (uVar14 == uVar9) goto LAB_00f9e9ec;
              }
              lVar13 = uVar9 - uVar14;
              puVar15 = (undefined4 *)(uVar8 + uVar14 * 4);
              puVar16 = (undefined4 *)(uVar6 + uVar14 * 4);
              do {
                lVar13 = lVar13 + -1;
                *puVar16 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar16 = puVar16 + 1;
              } while (lVar13 != 0);
LAB_00f9e9ec:
              if (param_2[0x48] != (HullResult)0x0) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
            }
            *(ulong *)(param_2 + 0x40) = uVar6;
            *(uint *)(param_2 + 0x38) = uVar24;
            param_2[0x48] = (HullResult)0x1;
          }
          memset((void *)(uVar6 + lVar7 * 4),0,((int)uVar24 - lVar7) * 4);
        }
        *(uint *)(param_2 + 0x34) = uVar24;
        memcpy(*(void **)(param_2 + 0x18),__src_00,(ulong)local_b8 << 4);
        if (iVar12 != 0) {
          puVar10 = (uint *)(*(long *)(param_2 + 0x40) + 4);
          puVar11 = __src;
          do {
            puVar10[-1] = 3;
            if (((byte)*param_1 >> 1 & 1) == 0) {
              puVar18 = puVar11 + 2;
              uVar22 = *puVar11;
            }
            else {
              uVar22 = puVar11[2];
              puVar18 = puVar11;
            }
            *puVar10 = uVar22;
            uVar22 = (int)uVar21 - 1;
            uVar21 = (ulong)uVar22;
            puVar1 = puVar11 + 1;
            puVar11 = puVar11 + 3;
            puVar10[1] = *puVar1;
            puVar10[2] = *puVar18;
            puVar10 = puVar10 + 4;
          } while (uVar22 != 0);
        }
      }
      else {
        *param_2 = (HullResult)0x0;
        uVar22 = *(uint *)(param_2 + 0xc);
        *(uint *)(param_2 + 4) = local_b8;
        if (((int)uVar22 < (int)local_b8) && (*(int *)(param_2 + 0x10) < (int)local_b8)) {
          if (local_b8 == 0) {
            lVar7 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar7 = (*(code *)PTR_FUN_01048e38)((long)(int)local_b8 << 4,0x10);
            uVar22 = *(uint *)(param_2 + 0xc);
          }
          if (0 < (int)uVar22) {
            lVar13 = 0;
            do {
              uVar23 = *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar13);
              ((undefined8 *)(lVar7 + lVar13))[1] =
                   ((undefined8 *)(*(long *)(param_2 + 0x18) + lVar13))[1];
              *(undefined8 *)(lVar7 + lVar13) = uVar23;
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar22 * 0x10 - lVar13 != 0);
          }
          if ((*(long *)(param_2 + 0x18) != 0) && (param_2[0x20] != (HullResult)0x0)) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          *(long *)(param_2 + 0x18) = lVar7;
          *(uint *)(param_2 + 0x10) = local_b8;
          param_2[0x20] = (HullResult)0x1;
        }
        uVar22 = *(uint *)(param_2 + 0x34);
        *(uint *)(param_2 + 0xc) = local_b8;
        *(int *)(param_2 + 0x28) = iVar12;
        *(uint *)(param_2 + 0x2c) = uVar24;
        if ((int)uVar22 < (int)uVar24) {
          lVar7 = (long)(int)uVar22;
          if (*(int *)(param_2 + 0x38) < (int)uVar24) {
            if (iVar12 == 0) {
              uVar6 = 0;
            }
            else {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar6 = (*(code *)PTR_FUN_01048e38)
                                (-((uVar8 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 |
                                 (uVar8 & 0xffffffff) << 2,0x10);
              uVar22 = *(uint *)(param_2 + 0x34);
            }
            uVar21 = *(ulong *)(param_2 + 0x40);
            if ((int)uVar22 < 1) {
              if (uVar21 != 0) goto LAB_00f9eadc;
            }
            else {
              uVar9 = (ulong)uVar22;
              if ((uVar22 < 8) || ((uVar6 < uVar21 + uVar9 * 4 && (uVar21 < uVar6 + uVar9 * 4)))) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar9 & 0xfffffff8;
                puVar17 = (undefined8 *)(uVar21 + 0x10);
                puVar19 = (undefined8 *)(uVar6 + 0x10);
                uVar20 = uVar14;
                do {
                  puVar3 = puVar17 + -1;
                  uVar23 = puVar17[-2];
                  uVar31 = puVar17[1];
                  uVar28 = *puVar17;
                  uVar20 = uVar20 - 8;
                  puVar17 = puVar17 + 4;
                  puVar19[-1] = *puVar3;
                  puVar19[-2] = uVar23;
                  puVar19[1] = uVar31;
                  *puVar19 = uVar28;
                  puVar19 = puVar19 + 4;
                } while (uVar20 != 0);
                if (uVar14 == uVar9) goto LAB_00f9eadc;
              }
              lVar13 = uVar9 - uVar14;
              puVar15 = (undefined4 *)(uVar21 + uVar14 * 4);
              puVar16 = (undefined4 *)(uVar6 + uVar14 * 4);
              do {
                lVar13 = lVar13 + -1;
                *puVar16 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar16 = puVar16 + 1;
              } while (lVar13 != 0);
LAB_00f9eadc:
              if (param_2[0x48] != (HullResult)0x0) {
                gNumAlignedFree = gNumAlignedFree + 1;
                (*(code *)PTR_FUN_01048e40)();
              }
            }
            *(ulong *)(param_2 + 0x40) = uVar6;
            *(uint *)(param_2 + 0x38) = uVar24;
            param_2[0x48] = (HullResult)0x1;
          }
          else {
            uVar6 = *(ulong *)(param_2 + 0x40);
          }
          memset((void *)(uVar6 + lVar7 * 4),0,(uVar8 - lVar7) * 4);
        }
        *(uint *)(param_2 + 0x34) = uVar24;
        memcpy(*(void **)(param_2 + 0x18),__src_00,(ulong)local_b8 << 4);
        if (((byte)*param_1 >> 1 & 1) == 0) {
          memcpy(*(void **)(param_2 + 0x40),__src,(uVar8 & 0xffffffff) << 2);
        }
        else if (iVar12 != 0) {
          puVar10 = *(uint **)(param_2 + 0x40);
          uVar6 = (ulong)(iVar12 - 1U);
          if ((iVar12 - 1U < 7) ||
             ((puVar10 < __src + uVar6 * 3 + 3 && (__src < puVar10 + uVar6 * 3 + 3)))) {
            uVar8 = 0;
            puVar11 = puVar10;
            puVar10 = __src;
          }
          else {
            uVar8 = uVar6 + 1 & 0x1fffffff8;
            puVar11 = puVar10 + uVar8 * 3;
            puVar18 = __src;
            uVar21 = uVar8;
            do {
              uVar21 = uVar21 - 8;
              uVar22 = *puVar18;
              uVar27 = puVar18[1];
              uVar24 = puVar18[3];
              uVar29 = puVar18[4];
              uVar33 = puVar18[5];
              uVar25 = puVar18[6];
              uVar30 = puVar18[7];
              uVar34 = puVar18[8];
              uVar26 = puVar18[9];
              uVar32 = puVar18[10];
              uVar35 = puVar18[0xb];
              uVar36 = puVar18[0xc];
              uVar40 = puVar18[0xd];
              uVar44 = puVar18[0xe];
              uVar37 = puVar18[0xf];
              uVar41 = puVar18[0x10];
              uVar45 = puVar18[0x11];
              uVar38 = puVar18[0x12];
              uVar42 = puVar18[0x13];
              uVar46 = puVar18[0x14];
              uVar39 = puVar18[0x15];
              uVar43 = puVar18[0x16];
              uVar47 = puVar18[0x17];
              *puVar10 = puVar18[2];
              puVar10[1] = uVar27;
              puVar10[2] = uVar22;
              puVar10[3] = uVar33;
              puVar10[4] = uVar29;
              puVar10[5] = uVar24;
              puVar10[6] = uVar34;
              puVar10[7] = uVar30;
              puVar10[8] = uVar25;
              puVar10[9] = uVar35;
              puVar10[10] = uVar32;
              puVar10[0xb] = uVar26;
              puVar10[0xc] = uVar44;
              puVar10[0xd] = uVar40;
              puVar10[0xe] = uVar36;
              puVar10[0xf] = uVar45;
              puVar10[0x10] = uVar41;
              puVar10[0x11] = uVar37;
              puVar10[0x12] = uVar46;
              puVar10[0x13] = uVar42;
              puVar10[0x14] = uVar38;
              puVar10[0x15] = uVar47;
              puVar10[0x16] = uVar43;
              puVar10[0x17] = uVar39;
              puVar10 = puVar10 + 0x18;
              puVar18 = puVar18 + 0x18;
            } while (uVar21 != 0);
            if (uVar6 + 1 == uVar8) goto LAB_00f9ebd4;
            puVar10 = __src + uVar8 * 3;
          }
          iVar12 = iVar12 - (int)uVar8;
          puVar10 = puVar10 + 2;
          do {
            iVar12 = iVar12 + -1;
            *puVar11 = *puVar10;
            puVar11[1] = puVar10[-1];
            puVar18 = puVar10 + -2;
            puVar10 = puVar10 + 3;
            puVar11[2] = *puVar18;
            puVar11 = puVar11 + 3;
          } while (iVar12 != 0);
        }
      }
LAB_00f9ebd4:
      if ((int)local_94 != 0) {
        if ((__src != (uint *)0x0) && (local_80 != '\0')) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        local_88 = (uint *)0x0;
        local_94 = 0;
        local_80 = '\x01';
      }
      local_b0 = 0;
      local_a0 = (btVector3 *)0x0;
      if (__src_00 != (btVector3 *)0x0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)(__src_00);
        __src_00 = (btVector3 *)0x0;
      }
      goto LAB_00f9ec38;
    }
  }
  __src_00 = (btVector3 *)0x1;
LAB_00f9ec38:
  if (pbVar5 != (btVector3 *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(pbVar5);
  }
  if ((local_88 != (uint *)0x0) && (local_80 != '\0')) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (ulong)__src_00 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


