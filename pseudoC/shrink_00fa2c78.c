// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: shrink
// Entry Point: 00fa2c78
// Size: 2708 bytes
// Signature: undefined __thiscall shrink(btConvexHullInternal * this, float param_1, float param_2)


/* btConvexHullInternal::shrink(float, float) */

btConvexHullInternal * __thiscall
btConvexHullInternal::shrink(btConvexHullInternal *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  bool bVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *plVar27;
  int iVar28;
  undefined8 *puVar29;
  ulong uVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  uint uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  float fVar42;
  undefined4 uVar43;
  btConvexHullInternal *pbVar50;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  ulong local_160;
  ulong local_158;
  long *local_150;
  uint local_13c;
  undefined auStack_d0 [4];
  ulong local_cc;
  long local_c0;
  char local_b8;
  float local_b0 [4];
  float local_a0 [4];
  long local_90;
  
  lVar12 = tpidr_el0;
  local_90 = *(long *)(lVar12 + 0x28);
  if (*(long *)(this + 0xb8) == 0) {
    pbVar50._0_4_ = (btConvexHullInternal *)0x0;
    goto LAB_00fa36a0;
  }
  iVar6 = *(int *)(this + 0xa0) + -1;
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  *(int *)(this + 0xa0) = iVar6;
  puVar14 = PTR_FUN_01048e38;
  *(int *)(*(long *)(this + 0xb8) + 0x78) = iVar6;
  puVar16 = (undefined8 *)(*(code *)puVar14)(8,0x10);
  uVar33 = 0;
  uVar35 = 0;
  uVar34 = 1;
  local_158 = 0;
  local_150 = (long *)0x0;
  local_13c = 0;
  *puVar16 = *(undefined8 *)(this + 0xb8);
  lVar21 = *(long *)(this + 0xb8);
  iVar2 = *(int *)(lVar21 + 0x68);
  iVar3 = *(int *)(lVar21 + 0x6c);
  iVar4 = *(int *)(lVar21 + 0x70);
  local_160 = 1;
  do {
    uVar34 = uVar34 - 1;
    lVar21 = puVar16[uVar34];
    plVar32 = *(long **)(lVar21 + 0x10);
    if (plVar32 != (long *)0x0) {
      do {
        if (*(int *)(plVar32[3] + 0x78) != iVar6) {
          *(int *)(plVar32[3] + 0x78) = iVar6;
          puVar17 = puVar16;
          if (uVar34 == (uint)local_160) {
            uVar20 = uVar34 << 1;
            if (uVar34 == 0) {
              uVar20 = 1;
            }
            local_160 = (ulong)uVar20;
            if ((int)uVar34 < (int)uVar20) {
              if (uVar20 == 0) {
                puVar17 = (undefined8 *)0x0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                puVar17 = (undefined8 *)
                          (*(code *)PTR_FUN_01048e38)
                                    (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | local_160 << 3,
                                     0x10);
              }
              if ((int)uVar34 < 1) {
                if (puVar16 == (undefined8 *)0x0) goto LAB_00fa2ee4;
              }
              else {
                uVar22 = (ulong)uVar34;
                if ((uVar34 < 4) || ((puVar17 < puVar16 + uVar22 && (puVar16 < puVar17 + uVar22))))
                {
                  uVar25 = 0;
                }
                else {
                  uVar25 = uVar22 & 0xfffffffc;
                  puVar26 = puVar16 + 2;
                  puVar29 = puVar17 + 2;
                  uVar30 = uVar25;
                  do {
                    puVar1 = puVar26 + -1;
                    uVar18 = puVar26[-2];
                    uVar40 = puVar26[1];
                    uVar39 = *puVar26;
                    uVar30 = uVar30 - 4;
                    puVar26 = puVar26 + 4;
                    puVar29[-1] = *puVar1;
                    puVar29[-2] = uVar18;
                    puVar29[1] = uVar40;
                    *puVar29 = uVar39;
                    puVar29 = puVar29 + 4;
                  } while (uVar30 != 0);
                  if (uVar25 == uVar22) goto LAB_00fa2eb4;
                }
                lVar23 = uVar22 - uVar25;
                puVar26 = puVar16 + uVar25;
                puVar29 = puVar17 + uVar25;
                do {
                  lVar23 = lVar23 + -1;
                  *puVar29 = *puVar26;
                  puVar26 = puVar26 + 1;
                  puVar29 = puVar29 + 1;
                } while (lVar23 != 0);
              }
LAB_00fa2eb4:
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)(puVar16);
            }
            else {
              local_160 = (ulong)uVar34;
            }
          }
LAB_00fa2ee4:
          puVar17[(int)uVar34] = plVar32[3];
          uVar34 = uVar34 + 1;
          puVar16 = puVar17;
        }
        if (*(int *)(plVar32 + 5) != iVar6) {
          puVar17 = *(undefined8 **)(this + 0x70);
          if (puVar17 == (undefined8 *)0x0) {
            puVar17 = *(undefined8 **)(this + 0x68);
            if (puVar17 == (undefined8 *)0x0) {
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              puVar17 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x18,0x10);
              iVar28 = *(int *)(this + 0x78);
              puVar17[2] = 0;
              *(int *)(puVar17 + 1) = iVar28;
              gNumAlignedAllocs = gNumAlignedAllocs + 1;
              uVar18 = (*(code *)PTR_FUN_01048e38)((long)iVar28 * 0x48,0x10);
              *puVar17 = uVar18;
              puVar17[2] = *(undefined8 *)(this + 0x60);
              *(undefined8 **)(this + 0x60) = puVar17;
            }
            else {
              *(undefined8 *)(this + 0x68) = puVar17[2];
            }
            uVar20 = *(uint *)(puVar17 + 1);
            puVar17 = (undefined8 *)*puVar17;
            if (0 < (int)uVar20) {
              if (uVar20 - 1 == 0) {
                uVar22 = 0;
                puVar26 = puVar17;
              }
              else {
                uVar25 = (ulong)(uVar20 - 1) + 1;
                uVar30 = 0;
                uVar22 = uVar25 & 0x1fffffffe;
                puVar26 = puVar17 + 9;
                do {
                  iVar28 = (int)uVar30;
                  uVar30 = uVar30 + 2;
                  puVar29 = puVar26 + 9;
                  puVar1 = puVar26;
                  if ((int)uVar20 <= iVar28 + 1) {
                    puVar1 = (undefined8 *)0x0;
                  }
                  if ((int)uVar20 <= (int)uVar30) {
                    puVar29 = (undefined8 *)0x0;
                  }
                  puVar26[-9] = puVar1;
                  *puVar26 = puVar29;
                  puVar26 = puVar26 + 0x12;
                } while (uVar22 != uVar30);
                if (uVar25 == uVar22) goto LAB_00fa3030;
                puVar26 = puVar17 + uVar22 * 9;
              }
              do {
                uVar11 = (int)uVar22 + 1;
                uVar22 = (ulong)uVar11;
                puVar29 = puVar26 + 9;
                if ((int)uVar20 <= (int)uVar11) {
                  puVar29 = (undefined8 *)0x0;
                }
                *puVar26 = puVar29;
                puVar26 = puVar26 + 9;
              } while (uVar20 != uVar11);
            }
          }
LAB_00fa3030:
          *(undefined8 *)(this + 0x70) = *puVar17;
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
          lVar23 = plVar32[3];
          lVar24 = *(long *)(*(long *)(plVar32[2] + 8) + 0x18);
          puVar17[1] = lVar23;
          uVar18 = *(undefined8 *)(lVar23 + 0x68);
          puVar17[4] = *(undefined8 *)(lVar23 + 0x70);
          puVar17[3] = uVar18;
          iVar28 = *(int *)(lVar24 + 0x70);
          iVar5 = *(int *)(lVar23 + 0x70);
          puVar17[5] = CONCAT44(*(int *)(lVar24 + 0x6c) - *(int *)(lVar23 + 0x6c),
                                *(int *)(lVar24 + 0x68) - *(int *)(lVar23 + 0x68));
          puVar17[6] = (ulong)(uint)(iVar28 - iVar5) | 0xffffffff00000000;
          iVar28 = *(int *)(lVar21 + 0x70);
          iVar5 = *(int *)(lVar23 + 0x70);
          puVar17[7] = CONCAT44(*(int *)(lVar21 + 0x6c) - *(int *)(lVar23 + 0x6c),
                                *(int *)(lVar21 + 0x68) - *(int *)(lVar23 + 0x68));
          puVar17[8] = (ulong)(uint)(iVar28 - iVar5) | 0xffffffff00000000;
          puVar26 = (undefined8 *)(lVar23 + 0x18);
          if (*(long *)(lVar23 + 0x20) != 0) {
            puVar26 = (undefined8 *)(*(long *)(lVar23 + 0x20) + 0x10);
          }
          *puVar26 = puVar17;
          *(undefined8 **)(lVar23 + 0x20) = puVar17;
          if (local_13c == (uint)local_158) {
            uVar20 = local_13c << 1;
            if (local_13c == 0) {
              uVar20 = 1;
            }
            local_158 = (ulong)uVar20;
            if ((int)local_13c < (int)uVar20) {
              if (uVar20 == 0) {
                plVar19 = (long *)0x0;
              }
              else {
                gNumAlignedAllocs = gNumAlignedAllocs + 1;
                plVar19 = (long *)(*(code *)PTR_FUN_01048e38)
                                            (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 |
                                             local_158 << 3,0x10);
              }
              if ((int)local_13c < 1) {
                bVar15 = local_150 == (long *)0x0;
                local_150 = plVar19;
                if (bVar15) goto LAB_00fa31f8;
              }
              else {
                uVar22 = (ulong)local_13c;
                if ((local_13c < 4) ||
                   ((plVar19 < local_150 + uVar22 && (local_150 < plVar19 + uVar22)))) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = uVar22 & 0xfffffffc;
                  plVar27 = local_150 + 2;
                  plVar31 = plVar19 + 2;
                  uVar30 = uVar25;
                  do {
                    plVar13 = plVar27 + -1;
                    lVar23 = plVar27[-2];
                    lVar41 = plVar27[1];
                    lVar24 = *plVar27;
                    uVar30 = uVar30 - 4;
                    plVar27 = plVar27 + 4;
                    plVar31[-1] = *plVar13;
                    plVar31[-2] = lVar23;
                    plVar31[1] = lVar41;
                    *plVar31 = lVar24;
                    plVar31 = plVar31 + 4;
                  } while (uVar30 != 0);
                  if (uVar25 == uVar22) goto LAB_00fa31d0;
                }
                lVar23 = uVar22 - uVar25;
                plVar27 = local_150 + uVar25;
                plVar31 = plVar19 + uVar25;
                do {
                  lVar23 = lVar23 + -1;
                  *plVar31 = *plVar27;
                  plVar27 = plVar27 + 1;
                  plVar31 = plVar31 + 1;
                } while (lVar23 != 0);
              }
LAB_00fa31d0:
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
              local_150 = plVar19;
            }
            else {
              local_158 = (ulong)local_13c;
            }
          }
LAB_00fa31f8:
          local_150[(int)local_13c] = (long)puVar17;
          lVar23 = 0;
          plVar19 = plVar32;
          lVar24 = 0;
          do {
            if ((lVar23 != 0) && (lVar24 != 0)) {
              iVar28 = *(int *)(lVar23 + 0x70) - iVar4;
              iVar5 = *(int *)(lVar23 + 0x6c) - iVar3;
              iVar7 = *(int *)(lVar24 + 0x6c) - iVar3;
              iVar8 = *(int *)(lVar24 + 0x68) - iVar2;
              iVar9 = *(int *)(lVar24 + 0x70) - iVar4;
              iVar10 = *(int *)(lVar23 + 0x68) - iVar2;
              uVar22 = (long)(iVar9 * iVar5 - iVar7 * iVar28) *
                       (long)(*(int *)(lVar21 + 0x68) - iVar2) +
                       (long)(iVar7 * iVar10 - iVar8 * iVar5) *
                       (long)(*(int *)(lVar21 + 0x70) - iVar4) +
                       (long)(iVar8 * iVar28 - iVar9 * iVar10) *
                       (long)(*(int *)(lVar21 + 0x6c) - iVar3);
              bVar15 = CARRY8(uVar33,uVar22);
              uVar33 = uVar33 + uVar22;
              if (bVar15) {
                uVar35 = uVar35 + 1;
              }
              uVar35 = uVar35 + ((long)uVar22 >> 0x3f);
            }
            plVar27 = plVar19 + 3;
            *(int *)(plVar19 + 5) = iVar6;
            plVar19[4] = (long)puVar17;
            plVar19 = *(long **)(plVar19[2] + 8);
            lVar23 = lVar24;
            lVar24 = *plVar27;
          } while (plVar19 != plVar32);
          local_13c = local_13c + 1;
        }
        plVar32 = (long *)*plVar32;
      } while (plVar32 != (long *)*(long *)(lVar21 + 0x10));
    }
  } while (0 < (int)uVar34);
  pbVar50._0_4_ = (btConvexHullInternal *)0x0;
  if ((-1 < (long)uVar35) && ((uVar35 | uVar33) != 0)) {
    fVar36 = (float)Int128::toScalar();
    local_b0[*(int *)(this + 0xa8)] = fVar36;
    fVar36 = (float)Int128::toScalar();
    local_b0[*(int *)(this + 0xac)] = fVar36;
    fVar36 = (float)Int128::toScalar();
    local_b0[*(int *)(this + 0xa4)] = fVar36;
    fVar36 = (float)Int128::toScalar();
    fVar36 = 0.25 / fVar36;
    fVar42 = *(float *)(this + 8);
    fVar37 = *(float *)this;
    fVar38 = *(float *)(this + 4);
    local_b0[0] = fVar36 * local_b0[0] * fVar37;
    local_b0[1] = fVar36 * local_b0[1] * fVar38;
    local_b0[2] = fVar36 * local_b0[2] * fVar42;
    if (0.0 < param_2) {
      if ((int)local_13c < 1) {
        fVar36 = 3.402823e+38;
      }
      else {
        iVar2 = *(int *)(this + 0xa8);
        iVar3 = *(int *)(this + 0xb0);
        uVar33 = (ulong)local_13c;
        iVar4 = *(int *)(this + 0xa4);
        fVar36 = 3.402823e+38;
        plVar32 = local_150;
        do {
          lVar21 = *plVar32;
          uVar33 = uVar33 - 1;
          local_a0[iVar2] = (float)*(int *)(lVar21 + 0x28);
          local_a0[iVar3] = (float)*(int *)(lVar21 + 0x2c);
          local_a0[iVar4] = (float)*(int *)(lVar21 + 0x30);
          fVar47 = local_a0[2];
          fVar46 = fVar38 * local_a0[1];
          fVar44 = fVar37 * local_a0[0];
          local_a0[iVar2] = (float)*(int *)(lVar21 + 0x38);
          local_a0[iVar3] = (float)*(int *)(lVar21 + 0x3c);
          local_a0[iVar4] = (float)*(int *)(lVar21 + 0x40);
          lVar21 = *plVar32;
          fVar49 = (float)NEON_fnmsub(local_a0[1] * fVar38,fVar44,local_a0[0] * fVar37 * fVar46);
          fVar46 = (float)NEON_fnmsub(local_a0[2] * fVar42,fVar46,
                                      local_a0[1] * fVar38 * fVar42 * fVar47);
          uVar43 = NEON_fnmsub(local_a0[0] * fVar37,fVar42 * fVar47,local_a0[2] * fVar42 * fVar44);
          uVar45 = NEON_fmadd(fVar46,fVar46,fVar49 * fVar49);
          local_a0[iVar2] = (float)*(int *)(lVar21 + 0x18);
          fVar44 = (float)NEON_fmadd(uVar43,uVar43,uVar45);
          local_a0[iVar3] = (float)*(int *)(lVar21 + 0x1c);
          local_a0[iVar4] = (float)*(int *)(lVar21 + 0x20);
          fVar47 = (float)NEON_fnmsub(local_a0[0],fVar37,local_b0[0]);
          uVar48 = NEON_fnmsub(local_a0[1],fVar38,local_b0[1]);
          uVar45 = NEON_fnmsub(local_a0[2],fVar42,local_b0[2]);
          uVar43 = NEON_fmadd(uVar48,uVar43,fVar47 * fVar46);
          fVar47 = (float)NEON_fmadd(uVar45,fVar49,uVar43);
          fVar36 = (float)NEON_fminnm(fVar47 / SQRT(fVar44),fVar36);
          plVar32 = plVar32 + 1;
        } while (uVar33 != 0);
        pbVar50._0_4_ = (btConvexHullInternal *)0x0;
        if (fVar36 <= 0.0) goto joined_r0x00fa3648;
      }
      param_1 = (float)NEON_fminnm(fVar36 * param_2,param_1);
    }
    pbVar50._0_4_ = (btConvexHullInternal *)param_1;
    if (0 < (int)local_13c) {
      uVar35 = (ulong)local_13c;
      uVar20 = 0x3b7f7;
      plVar32 = local_150;
      uVar33 = uVar35;
      do {
        uVar11 = 0;
        if (local_13c != 0) {
          uVar11 = uVar20 / local_13c;
        }
        uVar33 = uVar33 - 1;
        lVar21 = *plVar32;
        uVar11 = uVar20 - uVar11 * local_13c;
        uVar20 = uVar20 * 0x19660d + 0x3c6ef35f;
        *plVar32 = local_150[uVar11];
        local_150[uVar11] = lVar21;
        plVar32 = plVar32 + 1;
        plVar19 = local_150;
      } while (uVar33 != 0);
      do {
        local_b8 = '\x01';
        local_c0 = 0;
        local_cc = (ulong)uVar34;
        uVar33 = shiftFace((btConvexHullInternal *)param_1,this,*plVar19,auStack_d0);
        if ((local_c0 != 0) && (local_b8 != '\0')) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(local_c0);
        }
        local_b8 = 1;
        local_c0 = 0;
        local_cc = 0;
        if ((uVar33 & 1) == 0) {
          pbVar50._0_4_ = (btConvexHullInternal *)-param_1;
          break;
        }
        uVar35 = uVar35 - 1;
        plVar19 = plVar19 + 1;
      } while (uVar35 != 0);
    }
  }
joined_r0x00fa3648:
  if (local_150 != (long *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (puVar16 != (undefined8 *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)(puVar16);
  }
LAB_00fa36a0:
  if (*(long *)(lVar12 + 0x28) == local_90) {
    return (undefined4)pbVar50._0_4_;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


