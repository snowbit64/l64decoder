// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleCollisions
// Entry Point: 00725f38
// Size: 1728 bytes
// Signature: undefined handleCollisions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DynamicAvoidance::handleCollisions() */

void DynamicAvoidance::handleCollisions(void)

{
  Obstacle **ppOVar1;
  Obstacle **ppOVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  float *in_x0;
  DynamicAvoidance *this;
  vector *pvVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  Obstacle *this_00;
  uint uVar16;
  void *__s;
  long *plVar17;
  long lVar18;
  size_t __n;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float in_s1;
  float fVar24;
  float in_s2;
  float in_s3;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_c0;
  float local_bc;
  ulong local_b8 [4];
  long local_98;
  
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  lVar18 = *(long *)(in_x0 + 2);
  if (lVar18 == *(long *)(in_x0 + 4)) goto LAB_007265b4;
  fVar27 = in_x0[0x1f];
  uVar10 = (ulong)(uint)fVar27;
  if (fVar27 != 0.0) {
    if (fVar27 == 1.401298e-45) {
      uVar14 = 0;
    }
    else {
      uVar14 = uVar10 & 0xfffffffe;
      plVar17 = (long *)(lVar18 + 0x20);
      uVar19 = uVar14;
      do {
        uVar19 = uVar19 - 2;
        lVar11 = *plVar17;
        *(undefined *)(plVar17[-4] + 0x39) = 0;
        *(undefined *)(lVar11 + 0x39) = 0;
        plVar17 = plVar17 + 8;
      } while (uVar19 != 0);
      if (uVar14 == uVar10) goto LAB_00725fe0;
    }
    lVar11 = uVar10 - uVar14;
    plVar17 = (long *)(lVar18 + uVar14 * 0x20);
    do {
      lVar11 = lVar11 + -1;
      *(undefined *)(*plVar17 + 0x39) = 0;
      plVar17 = plVar17 + 4;
    } while (lVar11 != 0);
  }
LAB_00725fe0:
  if (in_x0[0x1e] == 0.0) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = 0.0;
    fVar28 = 1.401298e-45;
    while( true ) {
      lVar18 = *(long *)(lVar18 + (ulong)((int)fVar28 - 1) * 0x20);
      fVar22 = (float)StoppingPath::getStoppingTime();
      if (fVar27 < fVar22) {
        fVar27 = fVar22;
      }
      if (*(int *)(lVar18 + 0x1c) == 3) {
        *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)(lVar18 + 0x40);
      }
      if (fVar28 == in_x0[0x1e]) break;
      lVar18 = *(long *)(in_x0 + 2);
      fVar28 = (float)((int)fVar28 + 1);
    }
  }
  uVar10 = *(ulong *)(in_x0 + 0x14);
  if (uVar10 != 0) {
    __s = *(void **)(in_x0 + 0x12);
    __n = (uVar10 >> 6) * 8;
    memset(__s,0,__n);
    if ((uVar10 & 0x3f) != 0) {
      *(ulong *)((long)__s + __n) =
           *(ulong *)((long)__s + __n) &
           (0xffffffffffffffffU >> (-(uVar10 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
  }
  if ((int)(fVar27 / 0.2) != -1) {
    fVar28 = 0.0;
    iVar8 = 0;
    do {
      local_bc = 0.0;
      if (in_x0[0x1e] != 0.0) {
        do {
          uVar19 = (ulong)(uint)local_bc;
          lVar18 = *(long *)(in_x0 + 2);
          plVar17 = *(long **)(lVar18 + uVar19 * 0x20);
          uVar10 = (plVar17[1] - *plVar17 >> 2) * 0xb6db6db7;
          if ((int)uVar10 != 0) {
            lVar11 = 0;
            lVar21 = 0x18;
            do {
              StoppingPath::getOffsetPose
                        ((StoppingPath *)(plVar17[4] + lVar11),(PlanarPose *)local_b8,&local_c0,
                         fVar28);
              lVar9 = *plVar17;
              lVar11 = lVar11 + 0x28;
              *(ulong *)(lVar9 + lVar21 + -0x10) = local_b8[1];
              *(ulong *)(lVar9 + lVar21 + -0x18) = local_b8[0];
              *(float *)(*plVar17 + lVar21) = local_c0;
              lVar21 = lVar21 + 0x1c;
              in_s1 = local_c0;
            } while (((uVar10 & 0xffffffff) + (uVar10 & 0xffffffff) * 4) * 8 - lVar11 != 0);
          }
          fVar22 = (float)Obstacle::computeBounds();
          lVar18 = lVar18 + uVar19 * 0x20;
          fVar23 = (float)NEON_fmadd(in_s2 - fVar22,0x3f000000,fVar22);
          fVar24 = (float)NEON_fmadd(in_s3 - in_s1,0x3f000000,in_s1);
          in_s3 = (in_s3 - in_s1) * 0.5 + 0.25;
          *(float *)(lVar18 + 0x10) = fVar23;
          *(float *)(lVar18 + 0x14) = fVar24;
          *(float *)(lVar18 + 8) = (in_s2 - fVar22) * 0.5 + 0.25;
          *(float *)(lVar18 + 0xc) = in_s3;
          in_s2 = *in_x0;
          in_s1 = fVar24 / in_s2;
          uVar10 = (long)in_s1 * 0x127409f ^ (long)(fVar23 / in_s2) * 0x70b209;
          if (uVar10 != *(ulong *)(lVar18 + 0x18)) {
            HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::remove
                      ((HashTable<unsigned_int,DynamicAvoidance::ObstacleHash> *)in_x0,
                       (uint *)&local_bc);
            *(ulong *)(lVar18 + 0x18) = uVar10;
            uVar10 = (ulong)(uint)local_bc;
            uVar14 = *(ulong *)(in_x0 + 0x10);
            lVar18 = *(long *)(in_x0 + 8);
            uVar19 = uVar14 & *(ulong *)(*(long *)(in_x0 + 2) + uVar10 * 0x20 + 0x18);
            puVar15 = (ulong *)(lVar18 + uVar19 * 8);
            uVar16 = *(uint *)((long)puVar15 + 4);
            if (uVar16 == 0xffffffff) {
              uVar19 = 0;
            }
            else {
              uVar12 = 0;
              do {
                if (uVar16 < uVar12) {
                  uVar14 = uVar10 | (ulong)uVar12 << 0x20;
                  uVar10 = (ulong)*(uint *)puVar15;
                  uVar12 = *(uint *)((long)puVar15 + 4);
                  *puVar15 = uVar14;
                  uVar14 = *(ulong *)(in_x0 + 0x10);
                  lVar18 = *(long *)(in_x0 + 8);
                }
                uVar12 = uVar12 + 1;
                uVar19 = uVar14 & uVar19 + 1;
                puVar15 = (ulong *)(lVar18 + uVar19 * 8);
                uVar16 = *(uint *)((long)puVar15 + 4);
              } while (uVar16 != 0xffffffff);
              uVar19 = (ulong)uVar12 << 0x20;
            }
            *puVar15 = uVar19 | uVar10;
            uVar19 = (*(long *)(in_x0 + 0xe) + 1) * 2;
            uVar10 = *(long *)(in_x0 + 10) - *(long *)(in_x0 + 8) >> 3;
            *(long *)(in_x0 + 0xe) = *(long *)(in_x0 + 0xe) + 1;
            if (uVar10 <= uVar19 && uVar19 - uVar10 != 0) {
              HashTable<unsigned_int,DynamicAvoidance::ObstacleHash>::rehash();
            }
          }
          local_bc = (float)((int)local_bc + 1);
        } while (local_bc != in_x0[0x1e]);
      }
      fVar22 = in_x0[0x1f];
      if (fVar22 != 0.0) {
        fVar23 = 0.0;
        uVar10 = *(ulong *)(in_x0 + 0x10);
        do {
          lVar18 = *(long *)(in_x0 + 2);
          uVar16 = 0;
          uVar12 = 0;
          fVar24 = *in_x0;
          ppOVar1 = (Obstacle **)(lVar18 + (ulong)(uint)fVar23 * 0x20);
          this_00 = *ppOVar1;
          in_s1 = *(float *)(ppOVar1 + 2);
          in_s2 = *(float *)((long)ppOVar1 + 0x14);
          do {
            fVar25 = 20.0;
            if ((uVar16 & 1) != 0) {
              fVar25 = -20.0;
            }
            fVar26 = 20.0;
            if ((uVar16 & 2) != 0) {
              fVar26 = -20.0;
            }
            in_s3 = (in_s1 + fVar25) / fVar24;
            uVar19 = ((long)((in_s2 + fVar26) / fVar24) * 0x127409f ^ (long)in_s3 * 0x70b209) &
                     uVar10;
            if (uVar12 != 0) {
              uVar14 = (ulong)uVar12;
              puVar15 = local_b8;
              do {
                if (*puVar15 == uVar19) goto LAB_00726364;
                uVar14 = uVar14 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar14 != 0);
            }
            local_b8[(int)uVar12] = uVar19;
            uVar12 = uVar12 + 1;
LAB_00726364:
            uVar16 = uVar16 + 1;
          } while (uVar16 != 4);
          if (uVar12 != 0) {
            lVar18 = lVar18 + (ulong)(uint)fVar23 * 0x20;
            uVar19 = 0;
            lVar11 = *(long *)(in_x0 + 8);
            do {
              uVar14 = local_b8[uVar19];
              uVar16 = *(uint *)(lVar11 + uVar14 * 8 + 4);
              if (uVar16 + 1 < 2) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                do {
                  uVar13 = uVar13 + 1;
                  uVar14 = uVar14 + 1 & uVar10;
                  uVar16 = *(uint *)(lVar11 + uVar14 * 8 + 4);
                } while ((uVar16 != 0xffffffff && uVar13 <= uVar16) &&
                         (uVar16 == 0xffffffff || uVar16 != uVar13));
              }
              for (; uVar16 == uVar13; uVar16 = uVar16 + 1) {
                fVar22 = *(float *)(lVar11 + uVar14 * 8);
                if ((uint)fVar23 < (uint)fVar22) {
                  uVar13 = (int)fVar23 + (((int)fVar22 - 1U) * (int)fVar22 >> 1);
                  uVar10 = (ulong)(uVar13 >> 6);
                  uVar20 = 1L << ((ulong)uVar13 & 0x3f);
                  if ((*(ulong *)(*(long *)(in_x0 + 0x12) + uVar10 * 8) & uVar20) == 0) {
                    ppOVar2 = (Obstacle **)(*(long *)(in_x0 + 2) + (ulong)(uint)fVar22 * 0x20);
                    in_s2 = *(float *)(ppOVar2 + 2);
                    in_s3 = *(float *)(ppOVar2 + 1);
                    in_s1 = *(float *)(lVar18 + 8) + in_s3;
                    if (ABS(*(float *)(ppOVar1 + 2) - in_s2) <= in_s1) {
                      in_s2 = *(float *)(lVar18 + 0xc);
                      in_s3 = *(float *)((long)ppOVar2 + 0xc);
                      in_s1 = in_s2 + in_s3;
                      if (ABS(*(float *)((long)ppOVar1 + 0x14) - *(float *)((long)ppOVar2 + 0x14))
                          <= in_s1) {
                        uVar3 = *(uint *)(*ppOVar1 + 0x18);
                        uVar4 = *(uint *)(*ppOVar2 + 0x18);
                        uVar13 = uVar3;
                        if (uVar4 <= uVar3) {
                          uVar13 = uVar4;
                          uVar4 = uVar3;
                        }
                        uVar13 = uVar13 + (uVar4 + uVar4 * uVar4 >> 1);
                        if (((*(ulong *)(*(long *)(in_x0 + 0x18) +
                                        ((ulong)(uVar13 >> 3) & 0x1ffffff8)) >>
                              ((ulong)uVar13 & 0x3f) & 1) == 0) &&
                           (this = (DynamicAvoidance *)Obstacle::overlaps(this_00,*ppOVar2,0.5),
                           ((ulong)this & 1) != 0)) {
                          lVar11 = uVar10 * 8;
                          *(ulong *)(*(long *)(in_x0 + 0x12) + lVar11) =
                               *(ulong *)(*(long *)(in_x0 + 0x12) + lVar11) | uVar20;
                          if ((uint)fVar22 < (uint)in_x0[0x1f]) {
                            handlePair(this,(StoppableObstacle *)this_00,
                                       (StoppableObstacle *)*ppOVar2);
                          }
                          else {
                            pvVar7 = (vector *)*ppOVar2;
                            this_00[0x39] = (Obstacle)0x1;
                            if (*(int *)(this_00 + 0x1c) == 3) {
                              EvasiveObstacle::addObstacles((EvasiveObstacle *)this_00,pvVar7);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar10 = *(ulong *)(in_x0 + 0x10);
                lVar11 = *(long *)(in_x0 + 8);
                uVar14 = uVar10 & uVar14 + 1;
                uVar13 = *(uint *)(lVar11 + uVar14 * 8 + 4);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != uVar12);
            fVar22 = in_x0[0x1f];
          }
          fVar23 = (float)((int)fVar23 + 1);
        } while (fVar23 != fVar22);
      }
      bVar6 = iVar8 != (int)(fVar27 / 0.2);
      fVar28 = fVar28 + 0.2;
      iVar8 = iVar8 + 1;
    } while (bVar6);
  }
LAB_007265b4:
  if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


