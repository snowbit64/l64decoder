// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recoverFromPenetration
// Entry Point: 009bd428
// Size: 940 bytes
// Signature: undefined __thiscall recoverFromPenetration(Bt2KinematicCharacterController * this, btCollisionWorld * param_1)


/* Bt2KinematicCharacterController::recoverFromPenetration(btCollisionWorld*) */

undefined4 __thiscall
Bt2KinematicCharacterController::recoverFromPenetration
          (Bt2KinematicCharacterController *this,btCollisionWorld *param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined auStack_a8 [16];
  undefined auStack_98 [16];
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  (**(code **)(**(long **)(this + 0x10) + 0x10))
            (*(long **)(this + 0x10),*(long *)(this + 8) + 8,auStack_98,auStack_a8);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x20))
            (*(long **)(param_1 + 0x60),*(undefined8 *)(*(long *)(this + 8) + 0xc0),auStack_98,
             auStack_a8,*(undefined8 *)(param_1 + 0x28));
  plVar7 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar7 + 0x40))
            (plVar7,*(undefined8 *)(*(long *)(this + 8) + 0x170),param_1 + 0x30,plVar7);
  lVar8 = *(long *)(this + 8);
  uVar22 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)(this + 0x58) = uVar22;
  iVar6 = (**(code **)(**(long **)(lVar8 + 0x170) + 0x48))();
  if (iVar6 < 1) {
    uVar17 = 0;
  }
  else {
    fVar24 = 0.0;
    lVar8 = 0;
    uVar17 = 0;
    do {
      lVar18 = (long)*(int *)(this + 0x84);
      if (*(int *)(this + 0x84) < 0) {
        if (*(int *)(this + 0x88) < 0) {
          if ((*(void **)(this + 0x90) != (void *)0x0) &&
             (this[0x98] != (Bt2KinematicCharacterController)0x0)) {
            btAlignedFreeInternal(*(void **)(this + 0x90));
          }
          this[0x98] = (Bt2KinematicCharacterController)0x1;
          *(undefined8 *)(this + 0x90) = 0;
          *(undefined4 *)(this + 0x88) = 0;
        }
        do {
          *(undefined8 *)(*(long *)(this + 0x90) + lVar18 * 8) = 0;
          bVar5 = lVar18 != -1;
          lVar18 = lVar18 + 1;
        } while (bVar5);
      }
      *(undefined4 *)(this + 0x84) = 0;
      lVar18 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x170) + 0x38))();
      if (((*(byte *)(**(long **)(*(long *)(lVar18 + 0x10) + lVar8 * 0x20) + 0xe0) >> 2 & 1) == 0)
         && (lVar18 = *(long *)(lVar18 + 0x10) + lVar8 * 0x20,
            (*(byte *)(**(long **)(lVar18 + 8) + 0xe0) >> 2 & 1) == 0)) {
        plVar7 = *(long **)(lVar18 + 0x10);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))(plVar7,this + 0x80);
        }
        uVar2 = *(uint *)(this + 0x84);
        if ((int)uVar2 < 1) {
LAB_009bd68c:
          uVar10 = 1;
        }
        else {
          uVar9 = 0;
          uVar10 = 0;
          do {
            lVar18 = *(long *)(*(long *)(this + 0x90) + uVar9 * 8);
            uVar3 = *(uint *)(lVar18 + 0x318);
            uVar11 = (ulong)uVar3;
            if (0 < (int)uVar3) {
              if (uVar3 == 1) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar11 & 0xfffffffe;
                iVar6 = 0;
                pfVar13 = (float *)(lVar18 + 0x118);
                uVar16 = uVar14;
                do {
                  pfVar1 = pfVar13 + -0x30;
                  fVar19 = *pfVar13;
                  pfVar13 = pfVar13 + 0x60;
                  if (*pfVar1 < 0.0) {
                    uVar10 = uVar10 + 1;
                  }
                  if (fVar19 < 0.0) {
                    iVar6 = iVar6 + 1;
                  }
                  uVar16 = uVar16 - 2;
                } while (uVar16 != 0);
                uVar10 = iVar6 + uVar10;
                if (uVar14 == uVar11) goto LAB_009bd5f8;
              }
              lVar12 = uVar11 - uVar14;
              pfVar13 = (float *)(lVar18 + uVar14 * 0xc0 + 0x58);
              do {
                if (*pfVar13 < 0.0) {
                  uVar10 = uVar10 + 1;
                }
                lVar12 = lVar12 + -1;
                pfVar13 = pfVar13 + 0x30;
              } while (lVar12 != 0);
            }
LAB_009bd5f8:
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar2);
          if (uVar10 == 0) goto LAB_009bd68c;
        }
        if (0 < (int)uVar2) {
          uVar9 = 0;
          fVar19 = 1.0 / (float)(ulong)uVar10;
          do {
            lVar18 = *(long *)(*(long *)(this + 0x90) + uVar9 * 8);
            iVar6 = *(int *)(lVar18 + 0x318);
            fVar20 = -1.0;
            if (*(long *)(lVar18 + 0x308) != *(long *)(this + 8)) {
              fVar20 = 1.0;
            }
            if (0 < iVar6) {
              lVar12 = 0;
              puVar15 = (undefined8 *)(lVar18 + 0x48);
              do {
                fVar21 = *(float *)(puVar15 + 2);
                if (fVar21 < 0.0) {
                  if (fVar21 < fVar24) {
                    uVar22 = *puVar15;
                    fVar24 = *(float *)(puVar15 + 1);
                    *(undefined4 *)(this + 0xb0) = 0;
                    *(ulong *)(this + 0xa4) =
                         CONCAT44(fVar20 * (float)((ulong)uVar22 >> 0x20),fVar20 * (float)uVar22);
                    *(float *)(this + 0xac) = fVar20 * fVar24;
                    iVar6 = *(int *)(lVar18 + 0x318);
                    fVar24 = fVar21;
                  }
                  uVar17 = 1;
                  fVar23 = *(float *)(puVar15 + 1);
                  *(ulong *)(this + 0x58) =
                       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) +
                                (float)((ulong)*puVar15 >> 0x20) * fVar20 * fVar21 * 1.02 * fVar19,
                                (float)*(undefined8 *)(this + 0x58) +
                                (float)*puVar15 * fVar20 * fVar21 * 1.02 * fVar19);
                  *(float *)(this + 0x60) =
                       fVar19 * fVar21 * fVar20 * fVar23 * 1.02 + *(float *)(this + 0x60);
                }
                lVar12 = lVar12 + 1;
                puVar15 = puVar15 + 0x18;
              } while (lVar12 < iVar6);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar2);
        }
      }
      lVar8 = lVar8 + 1;
      iVar6 = (**(code **)(**(long **)(*(long *)(this + 8) + 0x170) + 0x48))();
    } while (lVar8 < iVar6);
  }
  lVar8 = *(long *)(this + 8);
  uVar22 = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(lVar8 + 0x38) = uVar22;
  *(int *)(lVar8 + 0x148) = *(int *)(lVar8 + 0x148) + 1;
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}


