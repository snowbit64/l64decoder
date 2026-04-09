// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveSingleIteration
// Entry Point: 00f2c504
// Size: 2480 bytes
// Signature: undefined __cdecl solveSingleIteration(int param_1, btCollisionObject * * param_2, int param_3, btPersistentManifold * * param_4, int param_5, btTypedConstraint * * param_6, int param_7, btContactSolverInfo * param_8, btIDebugDraw * param_9)


/* btSequentialImpulseConstraintSolver::solveSingleIteration(int, btCollisionObject**, int,
   btPersistentManifold**, int, btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*)
    */

undefined  [16]
btSequentialImpulseConstraintSolver::solveSingleIteration
          (int param_1,btCollisionObject **param_2,int param_3,btPersistentManifold **param_4,
          int param_5,btTypedConstraint **param_6,int param_7,btContactSolverInfo *param_8,
          btIDebugDraw *param_9)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  int iVar12;
  int iVar13;
  btSequentialImpulseConstraintSolver *this;
  long **pplVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  
  pplVar14 = (long **)(ulong)(uint)param_7;
  this = (btSequentialImpulseConstraintSolver *)(ulong)(uint)param_1;
  uVar23 = (ulong)param_8 & 0xffffffff;
  if (((byte)param_9[0x40] & 1) != 0) {
    uVar2 = *(uint *)(this + 0x4c);
    uVar3 = *(uint *)(this + 0x2c);
    uVar4 = *(uint *)(this + 0x6c);
    uVar17 = *(ulong *)(this + 0x140);
    if (0 < (int)uVar2) {
      uVar6 = (int)uVar17 * 0x19660d + 0x3c6ef35f;
      uVar17 = (ulong)uVar6;
      if (uVar2 != 1) {
        uVar7 = uVar6 * 0x19660d + 0x3c6ef35f;
        uVar17 = (ulong)uVar7;
        uVar6 = uVar7 ^ uVar7 >> 0x10;
        uVar6 = uVar6 ^ uVar6 >> 8;
        uVar6 = uVar6 ^ uVar6 >> 4;
        uVar6 = uVar6 >> 2 ^ uVar6;
        lVar20 = ((ulong)(uVar6 ^ uVar6 >> 1) & 1) * 4;
        lVar18 = *(long *)(this + 0xd8);
        uVar5 = *(undefined4 *)(lVar18 + 4);
        *(undefined4 *)(lVar18 + 4) = *(undefined4 *)(lVar18 + lVar20);
        *(undefined4 *)(lVar18 + lVar20) = uVar5;
        if (uVar2 != 2) {
          uVar6 = uVar7 * 0x19660d + 0x3c6ef35f;
          uVar17 = (ulong)uVar6;
          uVar5 = *(undefined4 *)(lVar18 + 8);
          uVar7 = uVar6 ^ uVar6 >> 0x10;
          uVar7 = uVar7 ^ uVar7 >> 8;
          uVar7 = uVar7 ^ uVar7 >> 4;
          uVar21 = CONCAT44(0,uVar7 ^ uVar7 >> 2);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar21;
          lVar20 = (uVar21 - (uVar21 / 3 +
                             (SUB168(auVar9 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe)))
                   * 4;
          *(undefined4 *)(lVar18 + 8) = *(undefined4 *)(lVar18 + lVar20);
          *(undefined4 *)(lVar18 + lVar20) = uVar5;
          if (uVar2 != 3) {
            uVar6 = uVar6 * 0x19660d + 0x3c6ef35f;
            uVar17 = (ulong)uVar6;
            uVar5 = *(undefined4 *)(lVar18 + 0xc);
            uVar6 = uVar6 ^ uVar6 >> 0x10;
            uVar6 = uVar6 ^ uVar6 >> 8;
            uVar6 = uVar6 >> 4 ^ uVar6;
            lVar20 = ((ulong)(uVar6 ^ uVar6 >> 2) & 3) * 4;
            *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(lVar18 + lVar20);
            *(undefined4 *)(lVar18 + lVar20) = uVar5;
            if (uVar2 != 4) {
              uVar21 = 4;
              do {
                uVar6 = (int)uVar17 * 0x19660d + 0x3c6ef35f;
                uVar17 = (ulong)uVar6;
                uVar19 = uVar17;
                if (uVar21 >> 0x10 == 0) {
                  uVar6 = uVar6 ^ uVar6 >> 0x10;
                  uVar19 = (ulong)uVar6;
                  if (uVar21 < 0x100) {
                    uVar6 = uVar6 ^ uVar6 >> 8;
                    uVar19 = (ulong)uVar6;
                    if (uVar21 < 0x10) {
                      uVar19 = (ulong)(uVar6 ^ uVar6 >> 4);
                    }
                  }
                }
                uVar1 = uVar21 + 1;
                uVar5 = *(undefined4 *)(lVar18 + uVar21 * 4);
                uVar8 = 0;
                if (uVar1 != 0) {
                  uVar8 = uVar19 / uVar1;
                }
                lVar20 = (uVar19 - uVar8 * uVar1) * 4;
                *(undefined4 *)(lVar18 + uVar21 * 4) = *(undefined4 *)(lVar18 + lVar20);
                *(undefined4 *)(lVar18 + lVar20) = uVar5;
                uVar21 = uVar1;
              } while (uVar2 != uVar1);
            }
          }
        }
      }
      *(ulong *)(this + 0x140) = uVar17;
    }
    if (0 < (int)uVar3) {
      uVar2 = (int)uVar17 * 0x19660d + 0x3c6ef35f;
      uVar17 = (ulong)uVar2;
      if (uVar3 != 1) {
        uVar6 = uVar2 * 0x19660d + 0x3c6ef35f;
        uVar17 = (ulong)uVar6;
        uVar2 = uVar6 ^ uVar6 >> 0x10;
        uVar2 = uVar2 ^ uVar2 >> 8;
        uVar2 = uVar2 ^ uVar2 >> 4;
        uVar2 = uVar2 >> 2 ^ uVar2;
        lVar20 = ((ulong)(uVar2 ^ uVar2 >> 1) & 1) * 4;
        lVar18 = *(long *)(this + 0xb8);
        uVar5 = *(undefined4 *)(lVar18 + 4);
        *(undefined4 *)(lVar18 + 4) = *(undefined4 *)(lVar18 + lVar20);
        *(undefined4 *)(lVar18 + lVar20) = uVar5;
        if (uVar3 != 2) {
          uVar2 = uVar6 * 0x19660d + 0x3c6ef35f;
          uVar17 = (ulong)uVar2;
          uVar5 = *(undefined4 *)(lVar18 + 8);
          uVar6 = uVar2 ^ uVar2 >> 0x10;
          uVar6 = uVar6 ^ uVar6 >> 8;
          uVar6 = uVar6 ^ uVar6 >> 4;
          uVar21 = CONCAT44(0,uVar6 ^ uVar6 >> 2);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar21;
          lVar20 = (uVar21 - (uVar21 / 3 +
                             (SUB168(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe))
                   ) * 4;
          *(undefined4 *)(lVar18 + 8) = *(undefined4 *)(lVar18 + lVar20);
          *(undefined4 *)(lVar18 + lVar20) = uVar5;
          if (uVar3 != 3) {
            uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
            uVar17 = (ulong)uVar2;
            uVar5 = *(undefined4 *)(lVar18 + 0xc);
            uVar2 = uVar2 ^ uVar2 >> 0x10;
            uVar2 = uVar2 ^ uVar2 >> 8;
            uVar2 = uVar2 >> 4 ^ uVar2;
            lVar20 = ((ulong)(uVar2 ^ uVar2 >> 2) & 3) * 4;
            *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(lVar18 + lVar20);
            *(undefined4 *)(lVar18 + lVar20) = uVar5;
            if (uVar3 != 4) {
              uVar21 = 4;
              do {
                uVar2 = (int)uVar17 * 0x19660d + 0x3c6ef35f;
                uVar17 = (ulong)uVar2;
                uVar19 = uVar17;
                if (uVar21 >> 0x10 == 0) {
                  uVar2 = uVar2 ^ uVar2 >> 0x10;
                  uVar19 = (ulong)uVar2;
                  if (uVar21 < 0x100) {
                    uVar2 = uVar2 ^ uVar2 >> 8;
                    uVar19 = (ulong)uVar2;
                    if (uVar21 < 0x10) {
                      uVar19 = (ulong)(uVar2 ^ uVar2 >> 4);
                    }
                  }
                }
                uVar1 = uVar21 + 1;
                uVar5 = *(undefined4 *)(lVar18 + uVar21 * 4);
                uVar8 = 0;
                if (uVar1 != 0) {
                  uVar8 = uVar19 / uVar1;
                }
                lVar20 = (uVar19 - uVar8 * uVar1) * 4;
                *(undefined4 *)(lVar18 + uVar21 * 4) = *(undefined4 *)(lVar18 + lVar20);
                *(undefined4 *)(lVar18 + lVar20) = uVar5;
                uVar21 = uVar1;
              } while (uVar3 != uVar1);
            }
          }
        }
      }
      *(ulong *)(this + 0x140) = uVar17;
    }
    if (0 < (int)uVar4) {
      uVar2 = (int)uVar17 * 0x19660d + 0x3c6ef35f;
      uVar17 = (ulong)uVar2;
      if (uVar4 != 1) {
        uVar3 = uVar2 * 0x19660d + 0x3c6ef35f;
        uVar17 = (ulong)uVar3;
        uVar2 = uVar3 ^ uVar3 >> 0x10;
        uVar2 = uVar2 ^ uVar2 >> 8;
        uVar2 = uVar2 ^ uVar2 >> 4;
        uVar2 = uVar2 >> 2 ^ uVar2;
        lVar20 = ((ulong)(uVar2 ^ uVar2 >> 1) & 1) * 4;
        lVar18 = *(long *)(this + 0xf8);
        uVar5 = *(undefined4 *)(lVar18 + 4);
        *(undefined4 *)(lVar18 + 4) = *(undefined4 *)(lVar18 + lVar20);
        *(undefined4 *)(lVar18 + lVar20) = uVar5;
        if (uVar4 != 2) {
          uVar2 = uVar3 * 0x19660d + 0x3c6ef35f;
          uVar17 = (ulong)uVar2;
          uVar5 = *(undefined4 *)(lVar18 + 8);
          uVar3 = uVar2 ^ uVar2 >> 0x10;
          uVar3 = uVar3 ^ uVar3 >> 8;
          uVar3 = uVar3 ^ uVar3 >> 4;
          uVar21 = CONCAT44(0,uVar3 ^ uVar3 >> 2);
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar21;
          lVar20 = (uVar21 - (uVar21 / 3 +
                             (SUB168(auVar11 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe))
                   ) * 4;
          *(undefined4 *)(lVar18 + 8) = *(undefined4 *)(lVar18 + lVar20);
          *(undefined4 *)(lVar18 + lVar20) = uVar5;
          if (uVar4 != 3) {
            uVar2 = uVar2 * 0x19660d + 0x3c6ef35f;
            uVar17 = (ulong)uVar2;
            uVar5 = *(undefined4 *)(lVar18 + 0xc);
            uVar2 = uVar2 ^ uVar2 >> 0x10;
            uVar2 = uVar2 ^ uVar2 >> 8;
            uVar2 = uVar2 >> 4 ^ uVar2;
            lVar20 = ((ulong)(uVar2 ^ uVar2 >> 2) & 3) * 4;
            *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(lVar18 + lVar20);
            *(undefined4 *)(lVar18 + lVar20) = uVar5;
            if (uVar4 != 4) {
              uVar21 = 4;
              do {
                uVar2 = (int)uVar17 * 0x19660d + 0x3c6ef35f;
                uVar17 = (ulong)uVar2;
                uVar19 = uVar17;
                if (uVar21 >> 0x10 == 0) {
                  uVar2 = uVar2 ^ uVar2 >> 0x10;
                  uVar19 = (ulong)uVar2;
                  if (uVar21 < 0x100) {
                    uVar2 = uVar2 ^ uVar2 >> 8;
                    uVar19 = (ulong)uVar2;
                    if (uVar21 < 0x10) {
                      uVar19 = (ulong)(uVar2 ^ uVar2 >> 4);
                    }
                  }
                }
                uVar1 = uVar21 + 1;
                uVar5 = *(undefined4 *)(lVar18 + uVar21 * 4);
                uVar8 = 0;
                if (uVar1 != 0) {
                  uVar8 = uVar19 / uVar1;
                }
                lVar20 = (uVar19 - uVar8 * uVar1) * 4;
                *(undefined4 *)(lVar18 + uVar21 * 4) = *(undefined4 *)(lVar18 + lVar20);
                *(undefined4 *)(lVar18 + lVar20) = uVar5;
                uVar21 = uVar1;
              } while (uVar4 != uVar1);
            }
          }
        }
      }
      *(ulong *)(this + 0x140) = uVar17;
    }
  }
  if (((byte)param_9[0x41] & 1) == 0) {
    if (0 < *(int *)(this + 0x4c)) {
      lVar18 = 0;
      do {
        lVar20 = *(long *)(this + 0x58) + (long)*(int *)(*(long *)(this + 0xd8) + lVar18 * 4) * 0xa0
        ;
        FUN_00f2b324(*(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                     *(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(this + 0x4c));
    }
    if (0 < (int)param_8) {
      do {
        if (*(char *)((long)*pplVar14 + 0x1c) != '\0') {
          iVar12 = getOrInitSolverBody(this,(btCollisionObject *)(*pplVar14)[5],
                                       *(float *)(param_9 + 0xc));
          iVar13 = getOrInitSolverBody(this,(btCollisionObject *)(*pplVar14)[6],
                                       *(float *)(param_9 + 0xc));
          (**(code **)(**pplVar14 + 0x30))
                    (*(undefined4 *)(param_9 + 0xc),*pplVar14,
                     *(long *)(this + 0x18) + (long)iVar12 * 0xf8,
                     *(long *)(this + 0x18) + (long)iVar13 * 0xf8);
        }
        uVar23 = uVar23 - 1;
        pplVar14 = pplVar14 + 1;
      } while (uVar23 != 0);
    }
    uVar2 = *(uint *)(this + 0x2c);
    if (0 < (int)uVar2) {
      lVar18 = 0;
      do {
        lVar20 = *(long *)(this + 0x38) + (long)*(int *)(*(long *)(this + 0xb8) + lVar18) * 0xa0;
        FUN_00f2b504(*(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                     *(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
        lVar18 = lVar18 + 4;
      } while ((ulong)uVar2 * 4 - lVar18 != 0);
    }
    uVar2 = *(uint *)(this + 0x6c);
    if (0 < (int)uVar2) {
      lVar18 = 0;
      do {
        fVar24 = *(float *)(*(long *)(this + 0x38) +
                            (long)*(int *)(*(long *)(this + 0x78) +
                                           (long)*(int *)(*(long *)(this + 0xf8) + lVar18) * 0xa0 +
                                          0x94) * 0xa0 + 100);
        if (0.0 < fVar24) {
          lVar20 = *(long *)(this + 0x78) + (long)*(int *)(*(long *)(this + 0xf8) + lVar18) * 0xa0;
          lVar15 = *(long *)(this + 0x18);
          *(float *)(lVar20 + 0x78) = *(float *)(lVar20 + 0x68) * -fVar24;
          *(float *)(lVar20 + 0x7c) = *(float *)(lVar20 + 0x68) * fVar24;
          FUN_00f2b324(lVar15 + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                       lVar15 + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
        }
        lVar18 = lVar18 + 4;
      } while ((ulong)uVar2 * 4 - lVar18 != 0);
    }
    uVar2 = *(uint *)(this + 0x8c);
    if (0 < (int)uVar2) {
      lVar18 = 0;
      do {
        lVar20 = *(long *)(this + 0x98) + lVar18;
        fVar24 = *(float *)(*(long *)(this + 0x38) + (long)*(int *)(lVar20 + 0x94) * 0xa0 + 100);
        if (0.0 < fVar24) {
          lVar15 = *(long *)(this + 0x18);
          fVar24 = (float)NEON_fminnm(*(float *)(lVar20 + 0x68) * fVar24,*(float *)(lVar20 + 0x68));
          *(float *)(lVar20 + 0x78) = -fVar24;
          *(float *)(lVar20 + 0x7c) = fVar24;
          FUN_00f2b324(lVar15 + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                       lVar15 + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
        }
        lVar18 = lVar18 + 0xa0;
      } while ((ulong)uVar2 * 0xa0 - lVar18 != 0);
    }
  }
  else {
    if (0 < *(int *)(this + 0x4c)) {
      lVar18 = 0;
      do {
        lVar20 = *(long *)(this + 0x58) + (long)*(int *)(*(long *)(this + 0xd8) + lVar18 * 4) * 0xa0
        ;
        FUN_00f2b324(*(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                     *(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(this + 0x4c));
    }
    if (0 < (int)param_8) {
      do {
        if (*(char *)((long)*pplVar14 + 0x1c) != '\0') {
          iVar12 = getOrInitSolverBody(this,(btCollisionObject *)(*pplVar14)[5],
                                       *(float *)(param_9 + 0xc));
          iVar13 = getOrInitSolverBody(this,(btCollisionObject *)(*pplVar14)[6],
                                       *(float *)(param_9 + 0xc));
          (**(code **)(**pplVar14 + 0x30))
                    (*(undefined4 *)(param_9 + 0xc),*pplVar14,
                     *(long *)(this + 0x18) + (long)iVar12 * 0xf8,
                     *(long *)(this + 0x18) + (long)iVar13 * 0xf8);
        }
        uVar23 = uVar23 - 1;
        pplVar14 = pplVar14 + 1;
      } while (uVar23 != 0);
    }
    uVar2 = *(uint *)(this + 0x2c);
    if ((*(uint *)(param_9 + 0x40) >> 9 & 1) == 0) {
      if (0 < (int)uVar2) {
        lVar18 = 0;
        do {
          lVar20 = *(long *)(this + 0x38) + (long)*(int *)(*(long *)(this + 0xb8) + lVar18) * 0xa0;
          FUN_00f2b504(*(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                       *(long *)(this + 0x18) + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
          lVar18 = lVar18 + 4;
        } while ((ulong)uVar2 * 4 - lVar18 != 0);
      }
      uVar2 = *(uint *)(this + 0x6c);
      if (0 < (int)uVar2) {
        lVar18 = 0;
        do {
          fVar24 = *(float *)(*(long *)(this + 0x38) +
                              (long)*(int *)(*(long *)(this + 0x78) +
                                             (long)*(int *)(*(long *)(this + 0xf8) + lVar18) * 0xa0
                                            + 0x94) * 0xa0 + 100);
          if (0.0 < fVar24) {
            lVar20 = *(long *)(this + 0x78) + (long)*(int *)(*(long *)(this + 0xf8) + lVar18) * 0xa0
            ;
            lVar15 = *(long *)(this + 0x18);
            *(float *)(lVar20 + 0x78) = *(float *)(lVar20 + 0x68) * -fVar24;
            *(float *)(lVar20 + 0x7c) = *(float *)(lVar20 + 0x68) * fVar24;
            FUN_00f2b324(lVar15 + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                         lVar15 + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
          }
          lVar18 = lVar18 + 4;
        } while ((ulong)uVar2 * 4 - lVar18 != 0);
      }
      uVar2 = *(uint *)(this + 0x8c);
      if (0 < (int)uVar2) {
        lVar18 = 0;
        do {
          lVar20 = *(long *)(this + 0x98) + lVar18;
          fVar24 = *(float *)(*(long *)(this + 0x38) + (long)*(int *)(lVar20 + 0x94) * 0xa0 + 100);
          if (0.0 < fVar24) {
            lVar15 = *(long *)(this + 0x18);
            fVar24 = (float)NEON_fminnm(*(float *)(lVar20 + 0x68) * fVar24,*(float *)(lVar20 + 0x68)
                                       );
            *(float *)(lVar20 + 0x78) = -fVar24;
            *(float *)(lVar20 + 0x7c) = fVar24;
            FUN_00f2b324(lVar15 + (long)*(int *)(lVar20 + 0x98) * 0xf8,
                         lVar15 + (long)*(int *)(lVar20 + 0xa0) * 0xf8);
          }
          lVar18 = lVar18 + 0xa0;
        } while ((ulong)uVar2 * 0xa0 - lVar18 != 0);
      }
    }
    else if (0 < (int)uVar2) {
      lVar20 = 0;
      lVar18 = 0;
      lVar15 = 4;
      if ((*(uint *)(param_9 + 0x40) & 0x10) != 0) {
        lVar15 = 8;
      }
      do {
        lVar22 = *(long *)(this + 0x38) + (long)*(int *)(*(long *)(this + 0xb8) + lVar18) * 0xa0;
        FUN_00f2b504(*(long *)(this + 0x18) + (long)*(int *)(lVar22 + 0x98) * 0xf8,
                     *(long *)(this + 0x18) + (long)*(int *)(lVar22 + 0xa0) * 0xf8,lVar22);
        fVar24 = *(float *)(lVar22 + 100);
        if (0.0 < fVar24) {
          lVar22 = *(long *)(this + 0x78) + (long)*(int *)(*(long *)(this + 0xf8) + lVar20) * 0xa0;
          lVar16 = *(long *)(this + 0x18);
          *(float *)(lVar22 + 0x78) = *(float *)(lVar22 + 0x68) * -fVar24;
          *(float *)(lVar22 + 0x7c) = *(float *)(lVar22 + 0x68) * fVar24;
          FUN_00f2b324(lVar16 + (long)*(int *)(lVar22 + 0x98) * 0xf8,
                       lVar16 + (long)*(int *)(lVar22 + 0xa0) * 0xf8);
        }
        if ((((byte)param_9[0x40] >> 4 & 1) != 0) && (0.0 < fVar24)) {
          lVar22 = *(long *)(this + 0x78) +
                   (long)*(int *)(*(long *)(this + 0xf8) + lVar20 + 4) * 0xa0;
          lVar16 = *(long *)(this + 0x18);
          *(float *)(lVar22 + 0x78) = *(float *)(lVar22 + 0x68) * -fVar24;
          *(float *)(lVar22 + 0x7c) = *(float *)(lVar22 + 0x68) * fVar24;
          FUN_00f2b324(lVar16 + (long)*(int *)(lVar22 + 0x98) * 0xf8,
                       lVar16 + (long)*(int *)(lVar22 + 0xa0) * 0xf8);
        }
        lVar18 = lVar18 + 4;
        lVar20 = lVar20 + lVar15;
      } while ((ulong)uVar2 * 4 - lVar18 != 0);
    }
  }
  return ZEXT816(0);
}


