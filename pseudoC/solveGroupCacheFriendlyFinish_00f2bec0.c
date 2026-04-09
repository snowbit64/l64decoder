// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlyFinish
// Entry Point: 00f2bec0
// Size: 1604 bytes
// Signature: undefined __thiscall solveGroupCacheFriendlyFinish(btSequentialImpulseConstraintSolver * this, btCollisionObject * * param_1, int param_2, btContactSolverInfo * param_3)


/* btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyFinish(btCollisionObject**, int,
   btContactSolverInfo const&) */

undefined  [16] __thiscall
btSequentialImpulseConstraintSolver::solveGroupCacheFriendlyFinish
          (btSequentialImpulseConstraintSolver *this,btCollisionObject **param_1,int param_2,
          btContactSolverInfo *param_3)

{
  long *plVar1;
  long lVar2;
  btCollisionObject **extraout_x1;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((*(uint *)(param_3 + 0x40) >> 2 & 1) != 0) &&
     (uVar3 = (ulong)*(uint *)(this + 0x2c), 0 < (int)*(uint *)(this + 0x2c))) {
    lVar4 = *(long *)(this + 0x78);
    if ((*(uint *)(param_3 + 0x40) >> 4 & 1) == 0) {
      piVar8 = (int *)(*(long *)(this + 0x38) + 0x94);
      do {
        lVar10 = *(long *)(piVar8 + -3);
        uVar3 = uVar3 - 1;
        *(int *)(lVar10 + 0x7c) = piVar8[-0xc];
        iVar7 = *piVar8;
        piVar8 = piVar8 + 0x28;
        *(undefined4 *)(lVar10 + 0x80) = *(undefined4 *)(lVar4 + (long)iVar7 * 0xa0 + 100);
      } while (uVar3 != 0);
    }
    else {
      piVar8 = (int *)(*(long *)(this + 0x38) + 0x94);
      do {
        lVar10 = *(long *)(piVar8 + -3);
        uVar3 = uVar3 - 1;
        *(int *)(lVar10 + 0x7c) = piVar8[-0xc];
        iVar7 = *piVar8;
        piVar8 = piVar8 + 0x28;
        lVar11 = lVar4 + (long)iVar7 * 0xa0;
        *(undefined4 *)(lVar10 + 0x80) = *(undefined4 *)(lVar11 + 100);
        *(undefined4 *)(lVar10 + 0x84) = *(undefined4 *)(lVar11 + 0x104);
      } while (uVar3 != 0);
    }
  }
  uVar3 = (ulong)*(uint *)(this + 0x4c);
  if (0 < (int)*(uint *)(this + 0x4c)) {
    pfVar5 = (float *)(*(long *)(this + 0x58) + 100);
    do {
      lVar4 = *(long *)(pfVar5 + 9);
      puVar9 = *(undefined8 **)(lVar4 + 0x40);
      if (puVar9 != (undefined8 *)0x0) {
        lVar10 = *(long *)(lVar4 + 0x28);
        fVar12 = *pfVar5 / *(float *)(param_3 + 0xc);
        uVar13 = NEON_fmadd(fVar12 * pfVar5[-0x13],*(undefined4 *)(lVar10 + 0x1a8),
                            *(undefined4 *)(puVar9 + 1));
        *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar10 + 0x1a0) >> 0x20) *
                           (float)((ulong)*(undefined8 *)(pfVar5 + -0x15) >> 0x20) * fVar12,
                           (float)*puVar9 +
                           (float)*(undefined8 *)(lVar10 + 0x1a0) *
                           (float)*(undefined8 *)(pfVar5 + -0x15) * fVar12);
        *(undefined4 *)(puVar9 + 1) = uVar13;
        lVar11 = *(long *)(lVar4 + 0x30);
        fVar12 = *pfVar5 / *(float *)(param_3 + 0xc);
        uVar13 = NEON_fmadd(fVar12 * pfVar5[-0xb],*(undefined4 *)(lVar11 + 0x1a8),
                            *(undefined4 *)(puVar9 + 5));
        puVar9[4] = CONCAT44((float)((ulong)puVar9[4] >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar11 + 0x1a0) >> 0x20) *
                             (float)((ulong)*(undefined8 *)(pfVar5 + -0xd) >> 0x20) * fVar12,
                             (float)puVar9[4] +
                             (float)*(undefined8 *)(lVar11 + 0x1a0) *
                             (float)*(undefined8 *)(pfVar5 + -0xd) * fVar12);
        *(undefined4 *)(puVar9 + 5) = uVar13;
        fVar12 = *pfVar5 / *(float *)(param_3 + 0xc);
        uVar13 = NEON_fmadd(fVar12 * pfVar5[-0x17],*(undefined4 *)(lVar10 + 0x280),
                            *(undefined4 *)(puVar9 + 3));
        puVar9[2] = CONCAT44((float)((ulong)puVar9[2] >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar10 + 0x278) >> 0x20) *
                             (float)((ulong)*(undefined8 *)(pfVar5 + -0x19) >> 0x20) * fVar12,
                             (float)puVar9[2] +
                             (float)*(undefined8 *)(lVar10 + 0x278) *
                             (float)*(undefined8 *)(pfVar5 + -0x19) * fVar12);
        *(undefined4 *)(puVar9 + 3) = uVar13;
        fVar12 = *pfVar5 / *(float *)(param_3 + 0xc);
        uVar13 = NEON_fmadd(fVar12 * pfVar5[-0xf],*(undefined4 *)(lVar11 + 0x280),
                            *(undefined4 *)(puVar9 + 7));
        puVar9[6] = CONCAT44((float)((ulong)puVar9[6] >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar11 + 0x278) >> 0x20) *
                             (float)((ulong)*(undefined8 *)(pfVar5 + -0x11) >> 0x20) * fVar12,
                             (float)puVar9[6] +
                             (float)*(undefined8 *)(lVar11 + 0x278) *
                             (float)*(undefined8 *)(pfVar5 + -0x11) * fVar12);
        *(undefined4 *)(puVar9 + 7) = uVar13;
      }
      fVar12 = *pfVar5;
      *(float *)(lVar4 + 0x38) = fVar12;
      if (*(float *)(lVar4 + 0x18) <= ABS(fVar12)) {
        *(undefined *)(lVar4 + 0x1c) = 0;
      }
      uVar3 = uVar3 - 1;
      pfVar5 = pfVar5 + 0x28;
    } while (uVar3 != 0);
  }
  iVar7 = *(int *)(this + 0xc);
  if (0 < iVar7) {
    lVar4 = 0;
    lVar11 = *(long *)(this + 0x18);
    lVar10 = 0xf0;
    do {
      lVar6 = *(long *)(lVar11 + lVar10);
      if (lVar6 != 0) {
        if (*(int *)(param_3 + 0x2c) == 0) {
          lVar16 = lVar11 + lVar10;
          lVar15 = CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + -0x40) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar16 + -0xb0) >> 0x20),
                            (float)*(undefined8 *)(lVar16 + -0x40) +
                            (float)*(undefined8 *)(lVar16 + -0xb0));
          fVar12 = *(float *)(lVar16 + -0x38) + *(float *)(lVar16 + -0xa8);
          *(long *)(lVar16 + -0x40) = lVar15;
          *(float *)(lVar16 + -0x38) = fVar12;
          *(ulong *)(lVar16 + -0x30) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + -0x30) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar16 + -0xa0) >> 0x20),
                        (float)*(undefined8 *)(lVar16 + -0x30) +
                        (float)*(undefined8 *)(lVar16 + -0xa0));
          *(float *)(lVar16 + -0x28) = *(float *)(lVar16 + -0x28) + *(float *)(lVar16 + -0x98);
        }
        else {
          lVar6 = lVar11 + lVar10;
          param_1 = (btCollisionObject **)(lVar6 + -0x60);
          fVar12 = *(float *)(param_3 + 0xc);
          fVar14 = *(float *)(param_3 + 0x34);
          *(float *)(lVar6 + -0x38) = *(float *)(lVar6 + -0x38) + *(float *)(lVar6 + -0xa8);
          *(ulong *)(lVar6 + -0x40) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + -0x40) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar6 + -0xb0) >> 0x20),
                        (float)*(undefined8 *)(lVar6 + -0x40) +
                        (float)*(undefined8 *)(lVar6 + -0xb0));
          *(ulong *)(lVar6 + -0x30) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + -0x30) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar6 + -0xa0) >> 0x20),
                        (float)*(undefined8 *)(lVar6 + -0x30) +
                        (float)*(undefined8 *)(lVar6 + -0xa0));
          *(float *)(lVar6 + -0x28) = *(float *)(lVar6 + -0x28) + *(float *)(lVar6 + -0x98);
          if (((*(float *)param_1 == 0.0) && (*(float *)(lVar6 + -0x5c) == 0.0)) &&
             (*(float *)(lVar6 + -0x58) == 0.0)) {
            uVar17 = *(undefined8 *)(lVar11 + lVar10 + -0x4c);
            if (*(float *)(lVar6 + -0x50) != 0.0) goto LAB_00f2c218;
            uVar18 = NEON_fcmeq(uVar17,0,4);
            if (((~(byte)uVar18 & 1) != 0) || ((~(byte)((ulong)uVar18 >> 0x20) & 1) != 0))
            goto LAB_00f2c218;
          }
          else {
            uVar17 = *(undefined8 *)(lVar6 + -0x4c);
LAB_00f2c218:
            local_b8 = *(float *)(lVar6 + -0x50) * fVar14;
            local_b4 = CONCAT44((float)((ulong)uVar17 >> 0x20) * fVar14,(float)uVar17 * fVar14);
            lVar11 = lVar11 + lVar10;
            local_ac = 0;
            btTransformUtil::integrateTransform
                      ((btTransform *)(lVar11 + -0xf0),(btVector3 *)param_1,(btVector3 *)&local_b8,
                       fVar12,(btTransform *)&local_a8);
            *(undefined8 *)(lVar11 + -0xe8) = uStack_a0;
            *(undefined8 *)(lVar11 + -0xf0) = local_a8;
            *(undefined8 *)(lVar11 + -0xd8) = uStack_90;
            *(undefined8 *)(lVar11 + -0xe0) = local_98;
            *(undefined8 *)(lVar11 + -200) = uStack_80;
            *(undefined8 *)(lVar11 + -0xd0) = local_88;
            *(undefined8 *)(lVar11 + -0xb8) = uStack_70;
            *(undefined8 *)(lVar11 + -0xc0) = local_78;
            lVar11 = *(long *)(this + 0x18);
            param_1 = extraout_x1;
          }
          plVar1 = (long *)(lVar11 + lVar10);
          lVar6 = *plVar1;
          lVar15 = plVar1[-8];
          fVar12 = *(float *)(plVar1 + -7);
        }
        uVar17 = *(undefined8 *)(lVar11 + lVar10 + -0x20);
        fVar14 = *(float *)(lVar11 + lVar10 + -0x18);
        *(undefined4 *)(lVar6 + 0x188) = 0;
        *(int *)(lVar6 + 0x148) = *(int *)(lVar6 + 0x148) + 1;
        *(ulong *)(lVar6 + 0x17c) =
             CONCAT44((float)((ulong)uVar17 >> 0x20) + (float)((ulong)lVar15 >> 0x20),
                      (float)uVar17 + (float)lVar15);
        *(float *)(lVar6 + 0x184) = fVar14 + fVar12;
        plVar1 = (long *)(*(long *)(this + 0x18) + lVar10);
        lVar11 = *plVar1;
        lVar6 = plVar1[-6];
        lVar16 = plVar1[-2];
        fVar12 = *(float *)(plVar1 + -5);
        fVar14 = *(float *)(plVar1 + -1);
        *(undefined4 *)(lVar11 + 0x198) = 0;
        *(ulong *)(lVar11 + 0x18c) =
             CONCAT44((float)((ulong)lVar16 >> 0x20) + (float)((ulong)lVar6 >> 0x20),
                      (float)lVar16 + (float)lVar6);
        *(float *)(lVar11 + 0x194) = fVar14 + fVar12;
        *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
        if (*(int *)(param_3 + 0x2c) != 0) {
          plVar1 = (long *)(*(long *)(this + 0x18) + lVar10);
          lVar11 = *plVar1;
          *(int *)(lVar11 + 0x148) = *(int *)(lVar11 + 0x148) + 1;
          lVar6 = plVar1[-0x1e];
          *(long *)(lVar11 + 0x10) = plVar1[-0x1d];
          *(long *)(lVar11 + 8) = lVar6;
          lVar6 = plVar1[-0x1c];
          *(long *)(lVar11 + 0x20) = plVar1[-0x1b];
          *(long *)(lVar11 + 0x18) = lVar6;
          lVar6 = plVar1[-0x1a];
          *(long *)(lVar11 + 0x30) = plVar1[-0x19];
          *(long *)(lVar11 + 0x28) = lVar6;
          lVar6 = plVar1[-0x18];
          *(long *)(lVar11 + 0x40) = plVar1[-0x17];
          *(long *)(lVar11 + 0x38) = lVar6;
        }
        lVar11 = *(long *)(this + 0x18);
        *(undefined4 *)(*(long *)(lVar11 + lVar10) + 0xe8) = 0xffffffff;
        iVar7 = *(int *)(this + 0xc);
      }
      lVar4 = lVar4 + 1;
      lVar10 = lVar10 + 0xf8;
    } while (lVar4 < iVar7);
  }
  if ((*(int *)(this + 0x2c) < 0) && (*(int *)(this + 0x30) < 0)) {
    if ((*(long *)(this + 0x38) != 0) && (this[0x40] != (btSequentialImpulseConstraintSolver)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(*(long *)(this + 0x38),param_1);
    }
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    this[0x40] = (btSequentialImpulseConstraintSolver)0x1;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  if ((*(int *)(this + 0x4c) < 0) && (*(int *)(this + 0x50) < 0)) {
    if ((*(long *)(this + 0x58) != 0) && (this[0x60] != (btSequentialImpulseConstraintSolver)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    this[0x60] = (btSequentialImpulseConstraintSolver)0x1;
  }
  *(undefined4 *)(this + 0x4c) = 0;
  if ((*(int *)(this + 0x6c) < 0) && (*(int *)(this + 0x70) < 0)) {
    if ((*(long *)(this + 0x78) != 0) && (this[0x80] != (btSequentialImpulseConstraintSolver)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    this[0x80] = (btSequentialImpulseConstraintSolver)0x1;
  }
  *(undefined4 *)(this + 0x6c) = 0;
  if ((*(int *)(this + 0x8c) < 0) && (*(int *)(this + 0x90) < 0)) {
    if ((*(long *)(this + 0x98) != 0) && (this[0xa0] != (btSequentialImpulseConstraintSolver)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    this[0xa0] = (btSequentialImpulseConstraintSolver)0x1;
  }
  *(undefined4 *)(this + 0x8c) = 0;
  if ((*(int *)(this + 0xc) < 0) && (*(int *)(this + 0x10) < 0)) {
    if ((*(long *)(this + 0x18) != 0) && (this[0x20] != (btSequentialImpulseConstraintSolver)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    this[0x20] = (btSequentialImpulseConstraintSolver)0x1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ZEXT816(0);
}


