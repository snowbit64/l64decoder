// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAvoidance
// Entry Point: 0070b954
// Size: 2300 bytes
// Signature: undefined updateAvoidance(void)


/* WARNING: Removing unreachable block (ram,0x0070bb30) */
/* WARNING: Removing unreachable block (ram,0x0070bb38) */
/* WARNING: Removing unreachable block (ram,0x0070bb50) */
/* WARNING: Removing unreachable block (ram,0x0070bb54) */
/* WARNING: Removing unreachable block (ram,0x0070bb88) */
/* WARNING: Removing unreachable block (ram,0x0070bbac) */
/* WARNING: Removing unreachable block (ram,0x0070bbb0) */
/* WARNING: Removing unreachable block (ram,0x0070bbb4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::updateAvoidance() */

void AnimalLocomotionSystem::updateAvoidance(void)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  long in_x0;
  AnimalContext *pAVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float local_104;
  float fStack_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  bool local_ec [4];
  float local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  float afStack_d8 [4];
  float afStack_c8 [4];
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)(in_x0 + 0x43c);
  pAVar4 = *(AnimalContext **)(in_x0 + 0x3b8);
  *(undefined *)(in_x0 + 0x3f9) = 0;
  fVar3 = (float)AnimalHusbandry::getAnimalsForDetection
                           (*(AnimalHusbandry **)(*(long *)(in_x0 + 0x3b0) + 0x68),pAVar4,
                            (Vector3 *)pAVar4,*(float *)(pAVar4 + 0x4c) + *(float *)(pAVar4 + 0x4c),
                            (NearAnimal *)(pAVar4 + 0x58),8);
  puVar5 = *(undefined8 **)(in_x0 + 0x3b8);
  *(float *)((long)puVar5 + 0x54) = fVar3;
  if (fVar3 != 0.0 && *(int *)(in_x0 + 0x428) != 2) {
    lVar7 = 0;
    uVar9 = 0;
    do {
      fVar12 = *(float *)((long)puVar5 + lVar7 + 0x68) - *(float *)((long)puVar5 + 4);
      fVar3 = *(float *)((long)puVar5 + lVar7 + 100) - *(float *)puVar5;
      fVar13 = *(float *)((long)puVar5 + lVar7 + 0x6c) - *(float *)(puVar5 + 1);
      uVar11 = NEON_fmadd(fVar3,fVar3,fVar12 * fVar12);
      fVar17 = (float)NEON_fmadd(fVar13,fVar13,uVar11);
      fVar15 = 1.0;
      if (1e-06 < fVar17) {
        fVar15 = 1.0 / SQRT(fVar17);
      }
      uVar11 = NEON_fmadd(fVar3 * fVar15,*(float *)((long)puVar5 + 0xc),
                          fVar12 * fVar15 * *(float *)(puVar5 + 2));
      fVar3 = (float)NEON_fmadd(fVar13 * fVar15,*(float *)((long)puVar5 + 0x14),uVar11);
      if (0.5 < fVar3) {
        fVar12 = (float)AnimalAnimationSystem::setState
                                  ((AnimalAnimationSystem *)(in_x0 + 0x78),0xb,0xffffffff,false,0.0)
        ;
        puVar5 = *(undefined8 **)(in_x0 + 0x3b8);
        *(undefined2 *)(in_x0 + 0x4a4) = 1;
        *(undefined4 *)(in_x0 + 0x428) = 3;
        fVar3 = fVar12 * 0.5;
        if (*(float *)(in_x0 + 0x488) <= 4.0) {
          fVar3 = fVar12;
        }
        fVar12 = -1.0 / (fVar3 * 0.001);
        *(float *)(in_x0 + 0x484) = fVar3 * 0.001;
        *(ulong *)(in_x0 + 0x47c) =
             CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar12,(float)*puVar1 * fVar12);
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x24;
    } while (uVar9 < (uint)*(float *)((long)puVar5 + 0x54));
  }
  fVar3 = *(float *)(*(long *)(in_x0 + 0x68) + 0x28);
  fVar12 = fVar3 * 0.5;
  fVar3 = (float)NEON_fmadd(fVar3,0x3f000000,*(float *)((long)puVar5 + 0x4c));
  local_a8 = CONCAT44((float)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20) * fVar12 +
                      (float)((ulong)*puVar5 >> 0x20),
                      (float)*(undefined8 *)((long)puVar5 + 0xc) * fVar12 + (float)*puVar5);
  local_a0 = fVar12 * *(float *)((long)puVar5 + 0x14) + *(float *)(puVar5 + 1);
  fVar3 = (float)AnimalHusbandry::getAnimalsForDetection
                           (*(AnimalHusbandry **)(*(long *)(in_x0 + 0x3b0) + 0x68),
                            (AnimalContext *)puVar5,(Vector3 *)&local_a8,fVar3,
                            (NearAnimal *)(puVar5 + 0xb),8);
  pfVar6 = *(float **)(in_x0 + 0x3b8);
  pfVar6[0x15] = fVar3;
  if (fVar3 != 0.0) {
    fVar21 = pfVar6[0x19];
    fVar19 = *pfVar6;
    fVar18 = pfVar6[2];
    fVar23 = pfVar6[0x1b];
    fVar17 = fVar21 - fVar19;
    fVar20 = fVar23 - fVar18;
    fVar12 = *(float *)(*(long *)(in_x0 + 0x68) + 0x28);
    uVar9 = (ulong)(uint)fVar3;
    pfVar8 = pfVar6 + 0x24;
    uVar11 = NEON_fmadd(fVar17,fVar17,(pfVar6[0x1a] - pfVar6[1]) * (pfVar6[0x1a] - pfVar6[1]));
    fVar3 = fVar19 + pfVar6[3] * fVar12;
    fVar24 = fVar18 + pfVar6[5] * fVar12;
    fVar12 = (float)NEON_fmadd(fVar20,fVar20,uVar11);
    fVar13 = fVar3 - fVar19;
    fVar15 = fVar18 - fVar24;
    NEON_fmadd(fVar19,fVar24,fVar18 * -fVar3);
    NEON_fmadd(fVar15,fVar15,fVar13 * fVar13);
    fVar3 = 1.0;
    if (0.0001 <= SQRT(fVar12)) {
      fVar3 = 1.0 / SQRT(fVar12);
    }
    NEON_fmadd(fVar20 * fVar3,pfVar6[3],pfVar6[5] * fVar3 * -fVar17);
    while( true ) {
      uVar9 = uVar9 - 1;
      NEON_fmadd(fVar15,fVar21,fVar13 * fVar23);
      if (uVar9 == 0) break;
      fVar21 = pfVar8[-2];
      fVar23 = *pfVar8;
      pfVar8 = pfVar8 + 9;
    }
  }
  lVar7 = *(long *)(in_x0 + 0x3b0);
  local_ec[0] = false;
  fVar12 = pfVar6[1] - *(float *)(lVar7 + 0x38);
  fVar3 = *pfVar6 - *(float *)(lVar7 + 0x34);
  fVar13 = pfVar6[2] - *(float *)(lVar7 + 0x3c);
  uVar14 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 4),fVar12 * *(float *)(lVar7 + 8));
  uVar16 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0x14),fVar12 * *(float *)(lVar7 + 0x18));
  uVar11 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0x24),fVar12 * *(float *)(lVar7 + 0x28));
  local_b0 = NEON_fmadd(fVar13,*(undefined4 *)(lVar7 + 0x2c),uVar11);
  local_b8 = (float)NEON_fmadd(fVar13,*(undefined4 *)(lVar7 + 0xc),uVar14);
  uStack_b4 = NEON_fmadd(fVar13,*(undefined4 *)(lVar7 + 0x1c),uVar16);
  DetourNavigationMeshQuery::findDistanceToWall
            (*(DetourNavigationMeshQuery **)(lVar7 + 0x50),&local_b8,0.01,local_ec,afStack_c8,
             afStack_d8);
  if ((*(int *)(in_x0 + 0x428) == 2) || (local_ec[0] == false)) goto LAB_0070c178;
  lVar7 = *(long *)(in_x0 + 0x3b8);
  fVar3 = (float)MathUtil::degreeToRadian(15.0);
  sincosf(fVar3,&fStack_f8,&local_fc);
  fVar3 = *(float *)(lVar7 + 0x14);
  uVar11 = *(undefined4 *)(lVar7 + 0xc);
  lVar10 = *(long *)(in_x0 + 0x3b8);
  fVar15 = (float)NEON_fmadd(uVar11,fStack_f8,local_fc * fVar3);
  fVar18 = (float)NEON_fmadd(uVar11,local_fc,fStack_f8 * -fVar3);
  fVar3 = (float)MathUtil::degreeToRadian(-15.0);
  sincosf(fVar3,&fStack_100,&local_104);
  lVar7 = *(long *)(in_x0 + 0x3b0);
  fVar12 = *(float *)(lVar10 + 0x14);
  fVar17 = *(float *)(*(long *)(in_x0 + 0x68) + 0x28);
  pfVar6 = *(float **)(in_x0 + 0x3b8);
  uVar11 = *(undefined4 *)(lVar10 + 0xc);
  fVar13 = (fVar17 * 0.0 + pfVar6[1]) - *(float *)(lVar7 + 0x38);
  fVar3 = (fVar18 * fVar17 + *pfVar6) - *(float *)(lVar7 + 0x34);
  local_f4 = 3.402823e+38;
  local_f0 = 3.402823e+38;
  fVar18 = pfVar6[0x13];
  uVar22 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 4),fVar13 * *(float *)(lVar7 + 8));
  uVar16 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0x14),fVar13 * *(float *)(lVar7 + 0x18));
  uVar14 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0x24),fVar13 * *(float *)(lVar7 + 0x28));
  fVar3 = (fVar15 * fVar17 + pfVar6[2]) - *(float *)(lVar7 + 0x3c);
  local_e8 = (float)NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0xc),uVar22);
  uStack_e4 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0x1c),uVar16);
  local_e0 = NEON_fmadd(fVar3,*(undefined4 *)(lVar7 + 0x2c),uVar14);
  fVar13 = (float)NEON_fmadd(uVar11,fStack_100,local_104 * fVar12);
  fVar3 = fVar18 + fVar18;
  if (*(float *)(in_x0 + 0x4a0) <= 3.0) {
    fVar3 = fVar18;
  }
  fVar12 = (float)NEON_fmadd(uVar11,local_104,fStack_100 * -fVar12);
  uVar9 = DetourNavigationMeshQuery::raycast
                    (*(DetourNavigationMeshQuery **)(lVar7 + 0x50),&local_b8,&local_e8,&local_f0);
  if ((uVar9 & 1) == 0) {
    local_f0 = 3.402823e+38;
  }
  if (*(float *)(*(long *)(in_x0 + 0x68) + 0x28) * local_f0 < fVar3) {
    fVar18 = (float)AnimalAnimationSystem::setState
                              ((AnimalAnimationSystem *)(in_x0 + 0x78),0xb,0xffffffff,false,0.0);
    *(undefined4 *)(in_x0 + 0x428) = 3;
    fVar15 = fVar18 * 0.5;
    if (*(float *)(in_x0 + 0x488) <= 4.0) {
      fVar15 = fVar18;
    }
    *(undefined2 *)(in_x0 + 0x4a4) = 1;
    fVar18 = -1.0 / (fVar15 * 0.001);
    *(float *)(in_x0 + 0x484) = fVar15 * 0.001;
    *(ulong *)(in_x0 + 0x47c) =
         CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar18,(float)*puVar1 * fVar18);
  }
  pfVar6 = *(float **)(in_x0 + 0x3b8);
  lVar7 = *(long *)(in_x0 + 0x3b0);
  fVar15 = (fVar17 * 0.0 + pfVar6[1]) - *(float *)(lVar7 + 0x38);
  fVar12 = (fVar12 * fVar17 + *pfVar6) - *(float *)(lVar7 + 0x34);
  fVar13 = (fVar13 * fVar17 + pfVar6[2]) - *(float *)(lVar7 + 0x3c);
  uVar14 = NEON_fmadd(fVar12,*(undefined4 *)(lVar7 + 4),fVar15 * *(float *)(lVar7 + 8));
  uVar16 = NEON_fmadd(fVar12,*(undefined4 *)(lVar7 + 0x14),fVar15 * *(float *)(lVar7 + 0x18));
  uVar11 = NEON_fmadd(fVar12,*(undefined4 *)(lVar7 + 0x24),fVar15 * *(float *)(lVar7 + 0x28));
  local_e8 = (float)NEON_fmadd(fVar13,*(undefined4 *)(lVar7 + 0xc),uVar14);
  uStack_e4 = NEON_fmadd(fVar13,*(undefined4 *)(lVar7 + 0x1c),uVar16);
  local_e0 = NEON_fmadd(fVar13,*(undefined4 *)(lVar7 + 0x2c),uVar11);
  uVar9 = DetourNavigationMeshQuery::raycast
                    (*(DetourNavigationMeshQuery **)(lVar7 + 0x50),&local_b8,&local_e8,&local_f4);
  if ((uVar9 & 1) == 0) {
    local_f4 = 3.402823e+38;
  }
  fVar12 = local_f0;
  if ((local_f0 == 3.402823e+38) || (local_f4 != 3.402823e+38)) {
    if ((local_f0 == 3.402823e+38) && (local_f4 != 3.402823e+38)) {
      fVar13 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0xc);
      fVar15 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0x14);
      *(undefined4 *)(in_x0 + 0x3fc) = 2;
    }
    else {
      if ((local_f0 == 3.402823e+38) || (local_f4 == 3.402823e+38)) {
        *(undefined4 *)(in_x0 + 0x3fc) = 0;
        goto LAB_0070c178;
      }
      if (*(int *)(in_x0 + 0x3fc) != 2) {
        if (*(int *)(in_x0 + 0x3fc) == 1) {
          fVar15 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0x14);
          fVar13 = -*(float *)(*(long *)(in_x0 + 0x3b8) + 0xc);
        }
        else {
          if (local_f4 <= local_f0) {
            fVar12 = local_f4;
          }
          fVar15 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0x14);
          fVar13 = -*(float *)(*(long *)(in_x0 + 0x3b8) + 0xc);
        }
        goto LAB_0070c060;
      }
      fVar13 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0xc);
      fVar15 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0x14);
    }
    fVar13 = -fVar13;
    fVar12 = local_f4;
  }
  else {
    fVar13 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0xc);
    fVar15 = *(float *)(*(long *)(in_x0 + 0x3b8) + 0x14);
    *(undefined4 *)(in_x0 + 0x3fc) = 1;
    fVar13 = -fVar13;
  }
LAB_0070c060:
  if (fVar12 != 3.402823e+38) {
    *(undefined *)(in_x0 + 0x3f9) = 1;
    fVar17 = *(float *)(*(long *)(in_x0 + 0x68) + 0x28);
    fVar12 = fVar12 * fVar17;
    if (fVar3 <= fVar12) {
      fVar3 = (1.0 - (fVar12 - fVar3) / (fVar17 - fVar3)) *
              *(float *)(*(long *)(in_x0 + 0x68) + 0x20);
      movementApplyForce(fVar15 * fVar3,fVar13 * fVar3);
    }
    else {
      fVar12 = (float)AnimalAnimationSystem::setState
                                ((AnimalAnimationSystem *)(in_x0 + 0x78),0xb,0xffffffff,false,0.0);
      *(undefined2 *)(in_x0 + 0x4a4) = 1;
      fVar3 = fVar12 * 0.5;
      if (*(float *)(in_x0 + 0x488) <= 4.0) {
        fVar3 = fVar12;
      }
      *(undefined4 *)(in_x0 + 0x428) = 3;
      fVar12 = -1.0 / (fVar3 * 0.001);
      *(float *)(in_x0 + 0x484) = fVar3 * 0.001;
      *(ulong *)(in_x0 + 0x47c) =
           CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar12,(float)*puVar1 * fVar12);
    }
  }
LAB_0070c178:
  if (local_ec[0] == false) {
    fVar13 = 1.0;
    fVar12 = *(float *)(*(long *)(in_x0 + 0x3b0) + 0x8c) - *(float *)(in_x0 + 0x430);
    fVar3 = *(float *)(*(long *)(in_x0 + 0x3b0) + 0x84) - *(float *)(in_x0 + 0x42c);
    fVar15 = (float)NEON_fmadd(fVar3,fVar3,fVar12 * fVar12);
    if (1e-06 < fVar15) {
      fVar13 = 1.0 / SQRT(fVar15);
    }
    fVar13 = *(float *)(*(long *)(in_x0 + 0x68) + 0x20) * fVar13;
    movementApplyForce(fVar3 * fVar13,fVar12 * fVar13);
  }
  if (*(long *)(lVar2 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


