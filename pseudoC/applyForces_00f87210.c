// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyForces
// Entry Point: 00f87210
// Size: 928 bytes
// Signature: undefined applyForces(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::applyForces() */

void btSoftBody::applyForces(void)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  btVector3 *pbVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  btSoftBody *in_x0;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  timeval local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar8 = CProfileManager::Start_Profile("SoftBody applyForces");
  fVar27 = *(float *)(in_x0 + 400);
  fVar17 = *(float *)(in_x0 + 0x18c);
  uVar7 = *(uint *)(in_x0 + 0x374);
  uVar15 = (ulong)uVar7;
  bVar1 = 0.0 < *(float *)(in_x0 + 0x188);
  bVar2 = 0.0 < *(float *)(in_x0 + 0x184);
  if (fVar17 == 0.0) {
    fVar18 = 0.0;
    fVar19 = 0.0;
    if (fVar27 <= 0.0) goto LAB_00f87354;
  }
  fVar19 = 0.0;
  if ((0 < (int)uVar7) &&
     (uVar10 = (ulong)*(uint *)(in_x0 + 0x3b4), 0 < (int)*(uint *)(in_x0 + 0x3b4))) {
    lVar12 = *(long *)(in_x0 + 0x380);
    fVar19 = 0.0;
    fVar18 = *(float *)(lVar12 + 0x10);
    fVar20 = *(float *)(lVar12 + 0x14);
    plVar11 = (long *)(*(long *)(in_x0 + 0x3c0) + 0x20);
    fVar21 = *(float *)(lVar12 + 0x18);
    do {
      lVar12 = plVar11[-1];
      lVar16 = *plVar11;
      uVar10 = uVar10 - 1;
      lVar13 = plVar11[-2];
      plVar11 = plVar11 + 9;
      fVar22 = *(float *)(lVar12 + 0x14) - fVar20;
      fVar26 = *(float *)(lVar12 + 0x10) - fVar18;
      fVar24 = *(float *)(lVar16 + 0x10) - fVar18;
      fVar28 = *(float *)(lVar12 + 0x18) - fVar21;
      fVar29 = *(float *)(lVar16 + 0x14) - fVar20;
      fVar31 = *(float *)(lVar16 + 0x18) - fVar21;
      uVar30 = NEON_fnmsub(fVar29,fVar26,fVar24 * fVar22);
      uVar23 = NEON_fnmsub(fVar31,fVar22,fVar29 * fVar28);
      uVar30 = NEON_fmadd(uVar30,*(float *)(lVar13 + 0x18) - fVar21,fVar19);
      uVar25 = NEON_fnmsub(fVar24,fVar28,fVar31 * fVar26);
      uVar30 = NEON_fmadd(uVar23,*(float *)(lVar13 + 0x10) - fVar18,uVar30);
      fVar19 = (float)NEON_fmadd(uVar25,*(float *)(lVar13 + 0x14) - fVar20,uVar30);
    } while (uVar10 != 0);
    fVar19 = fVar19 * 0.1666667;
  }
  fVar18 = fVar17 / ABS(fVar19);
  fVar19 = (*(float *)(in_x0 + 0x25c) - fVar19) * fVar27;
LAB_00f87354:
  pbVar4 = (btVector3 *)(in_x0 + 0x658);
  if (0 < (int)uVar7) {
    if (fVar17 == 0.0) {
      if (fVar27 <= 0.0) {
        if (bVar1 || bVar2) {
          uVar10 = 0;
          lVar12 = 0x60;
          do {
            if (0.0 < *(float *)(*(long *)(in_x0 + 0x380) + lVar12)) {
              uVar8 = addAeroForceToNode(in_x0,pbVar4,(int)uVar10);
            }
            uVar10 = uVar10 + 1;
            lVar12 = lVar12 + 0x78;
          } while (uVar15 != uVar10);
        }
      }
      else {
        lVar12 = 0;
        uVar10 = 0;
        do {
          lVar16 = *(long *)(in_x0 + 0x380);
          if (0.0 < *(float *)(lVar16 + lVar12 + 0x60)) {
            if (bVar1 || bVar2) {
              uVar8 = addAeroForceToNode(in_x0,pbVar4,(int)uVar10);
            }
            lVar16 = lVar16 + lVar12;
            fVar17 = *(float *)(lVar16 + 100) * fVar19;
            uVar30 = NEON_fmadd(*(undefined4 *)(lVar16 + 0x58),fVar17,*(undefined4 *)(lVar16 + 0x48)
                               );
            *(ulong *)(lVar16 + 0x40) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar16 + 0x50) >> 0x20) * fVar17,
                          (float)*(undefined8 *)(lVar16 + 0x40) +
                          (float)*(undefined8 *)(lVar16 + 0x50) * fVar17);
            *(undefined4 *)(lVar16 + 0x48) = uVar30;
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x78;
        } while (uVar15 != uVar10);
      }
    }
    else {
      lVar12 = 0;
      uVar10 = 0;
      do {
        lVar16 = *(long *)(in_x0 + 0x380);
        if (0.0 < *(float *)(lVar16 + lVar12 + 0x60)) {
          if (bVar1 || bVar2) {
            uVar8 = addAeroForceToNode(in_x0,pbVar4,(int)uVar10);
          }
          lVar16 = lVar16 + lVar12;
          fVar24 = *(float *)(lVar16 + 100) * fVar18;
          fVar21 = (float)*(undefined8 *)(lVar16 + 0x50);
          fVar22 = (float)((ulong)*(undefined8 *)(lVar16 + 0x50) >> 0x20);
          fVar17 = (float)*(undefined8 *)(lVar16 + 0x40) + fVar21 * fVar24;
          fVar20 = (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) + fVar22 * fVar24;
          uVar30 = NEON_fmadd(*(undefined4 *)(lVar16 + 0x58),fVar24,*(undefined4 *)(lVar16 + 0x48));
          *(ulong *)(lVar16 + 0x40) = CONCAT44(fVar20,fVar17);
          *(undefined4 *)(lVar16 + 0x48) = uVar30;
          if (0.0 < fVar27) {
            fVar24 = *(float *)(lVar16 + 100) * fVar19;
            uVar30 = NEON_fmadd(*(undefined4 *)(lVar16 + 0x58),fVar24,uVar30);
            *(ulong *)(lVar16 + 0x40) = CONCAT44(fVar20 + fVar22 * fVar24,fVar17 + fVar21 * fVar24);
            *(undefined4 *)(lVar16 + 0x48) = uVar30;
          }
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x78;
      } while (uVar15 != uVar10);
    }
  }
  iVar9 = *(int *)(in_x0 + 0x3b4);
  if (0 < iVar9) {
    iVar14 = 0;
    do {
      uVar8 = addAeroForceToFace(in_x0,pbVar4,iVar14);
      iVar14 = iVar14 + 1;
    } while (iVar9 != iVar14);
  }
  puVar6 = CProfileManager::CurrentNode;
  piVar3 = (int *)(CProfileManager::CurrentNode + 8);
  iVar9 = *(int *)(CProfileManager::CurrentNode + 0x18) + -1;
  *(int *)(CProfileManager::CurrentNode + 0x18) = iVar9;
  if (iVar9 == 0 && *piVar3 != 0) {
    uVar7 = gettimeofday(&local_88,(__timezone_ptr_t)0x0);
    uVar8 = (ulong)uVar7;
    iVar9 = *(int *)(puVar6 + 0x18);
    uVar30 = NEON_fmadd((float)(unkuint9)
                               (ulong)((local_88.tv_usec +
                                       (local_88.tv_sec - *DAT_02125d68) * 1000000) -
                                      (DAT_02125d68[1] + *(long *)(puVar6 + 0x10))),0x3a83126f,
                        *(undefined4 *)(puVar6 + 0xc));
    *(undefined4 *)(puVar6 + 0xc) = uVar30;
  }
  if (iVar9 == 0) {
    CProfileManager::CurrentNode = *(undefined **)(CProfileManager::CurrentNode + 0x20);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


