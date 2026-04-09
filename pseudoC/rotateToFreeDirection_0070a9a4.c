// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rotateToFreeDirection
// Entry Point: 0070a9a4
// Size: 1704 bytes
// Signature: undefined __thiscall rotateToFreeDirection(AnimalLocomotionSystem * this, bool param_1, bool * param_2)


/* AnimalLocomotionSystem::rotateToFreeDirection(bool, bool&) */

void __thiscall
AnimalLocomotionSystem::rotateToFreeDirection
          (AnimalLocomotionSystem *this,bool param_1,bool *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  float *pfVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float local_1e4;
  float fStack_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  float local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined local_1b0;
  float local_1ac [6];
  undefined8 local_194;
  undefined local_18c;
  undefined8 local_170;
  undefined local_168;
  undefined8 local_14c;
  undefined local_144;
  undefined8 local_128;
  undefined local_120;
  undefined8 local_104;
  undefined local_fc;
  undefined8 local_e0;
  undefined local_d8;
  undefined8 local_bc;
  undefined local_b4;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  local_194 = 0;
  lVar17 = *(long *)(this + 0x410);
  local_18c = 0;
  local_b4 = 0;
  lVar7 = *(long *)(this + 0x418);
  local_170 = 0;
  local_168 = 0;
  local_14c = 0;
  local_144 = 0;
  local_128 = 0;
  local_120 = 0;
  local_104 = 0;
  local_e0 = 0;
  local_bc = 0;
  local_fc = 0;
  local_d8 = 0;
  fVar21 = *(float *)(*(long *)(this + 0x68) + 0x24);
  lVar10 = lVar7 - lVar17;
  local_1b0 = 0;
  local_1b8 = 0;
  if (lVar10 != 0) {
    uVar9 = 0;
    do {
      lVar1 = uVar9 * 0x20;
      uVar9 = (ulong)((int)uVar9 + 1);
      *(undefined8 *)(lVar17 + lVar1 + 0x18) = 0;
    } while (uVar9 < (ulong)(lVar10 >> 5));
  }
  pfVar12 = *(float **)(this + 0x3b8);
  local_1dc = 0.0;
  lVar10 = *(long *)(this + 0x3b0);
  fVar19 = pfVar12[1] - *(float *)(lVar10 + 0x38);
  fVar23 = *pfVar12 - *(float *)(lVar10 + 0x34);
  fVar31 = pfVar12[2] - *(float *)(lVar10 + 0x3c);
  uVar25 = NEON_fmadd(fVar23,*(undefined4 *)(lVar10 + 4),fVar19 * *(float *)(lVar10 + 8));
  uVar27 = NEON_fmadd(fVar23,*(undefined4 *)(lVar10 + 0x14),fVar19 * *(float *)(lVar10 + 0x18));
  uVar29 = NEON_fmadd(fVar23,*(undefined4 *)(lVar10 + 0x24),fVar19 * *(float *)(lVar10 + 0x28));
  local_1c8 = (float)NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0xc),uVar25);
  uStack_1c4 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x1c),uVar27);
  local_1c0 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x2c),uVar29);
  if (param_1) {
    fVar23 = (fVar21 * pfVar12[4] + pfVar12[1]) - *(float *)(lVar10 + 0x38);
    fVar19 = (fVar21 * pfVar12[3] + *pfVar12) - *(float *)(lVar10 + 0x34);
    fVar31 = (fVar21 * pfVar12[5] + pfVar12[2]) - *(float *)(lVar10 + 0x3c);
    uVar29 = NEON_fmadd(fVar19,*(undefined4 *)(lVar10 + 4),fVar23 * *(float *)(lVar10 + 8));
    uVar27 = NEON_fmadd(fVar19,*(undefined4 *)(lVar10 + 0x14),*(float *)(lVar10 + 0x18) * fVar23);
    uVar25 = NEON_fmadd(fVar19,*(undefined4 *)(lVar10 + 0x24),*(float *)(lVar10 + 0x28) * fVar23);
    local_1d8 = (float)NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0xc),uVar29);
    uStack_1d4 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x1c),uVar27);
    local_1d0 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x2c),uVar25);
    bVar4 = DetourNavigationMeshQuery::raycast
                      (*(DetourNavigationMeshQuery **)(lVar10 + 0x50),&local_1c8,&local_1d8,
                       &local_1dc);
    bVar4 = bVar4 ^ 1;
    lVar17 = *(long *)(this + 0x410);
    if (*(long *)(this + 0x418) != lVar17) {
LAB_0070ab80:
      uVar9 = 0;
      do {
        pfVar12 = *(float **)(this + 0x3b8);
        sincosf(*(float *)(lVar17 + uVar9 * 0x20),&fStack_1e0,&local_1e4);
        fVar23 = fStack_1e0;
        fVar19 = local_1e4;
        fVar24 = pfVar12[5];
        fVar22 = pfVar12[3];
        lVar10 = *(long *)(this + 0x3b0);
        fVar26 = local_1e4 * fVar24;
        fVar20 = (float)NEON_fmadd(fVar22,fStack_1e0,fVar26);
        fVar31 = (float)NEON_fmadd(fVar22,local_1e4,fStack_1e0 * -fVar24);
        fVar18 = (fVar21 * 0.0 + pfVar12[1]) - *(float *)(lVar10 + 0x38);
        fVar20 = (fVar21 * fVar20 + pfVar12[2]) - *(float *)(lVar10 + 0x3c);
        fVar31 = (*pfVar12 + fVar21 * fVar31) - *(float *)(lVar10 + 0x34);
        uVar27 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 4),fVar18 * *(float *)(lVar10 + 8));
        uVar29 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x14),fVar18 * *(float *)(lVar10 + 0x18)
                           );
        uVar25 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x24),fVar18 * *(float *)(lVar10 + 0x28)
                           );
        local_1d8 = (float)NEON_fmadd(fVar20,*(undefined4 *)(lVar10 + 0xc),uVar27);
        uStack_1d4 = NEON_fmadd(fVar20,*(undefined4 *)(lVar10 + 0x1c),uVar29);
        local_1d0 = NEON_fmadd(fVar20,*(undefined4 *)(lVar10 + 0x2c),uVar25);
        uVar16 = DetourNavigationMeshQuery::raycast
                           (*(DetourNavigationMeshQuery **)(lVar10 + 0x50),&local_1c8,&local_1d8,
                            &local_1dc);
        if ((uVar16 & 1) != 0) {
          lVar10 = lVar17 + uVar9 * 0x20;
          *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 2;
        }
        pfVar12 = *(float **)(this + 0x3b8);
        lVar10 = *(long *)(this + 0x3b0);
        fVar31 = (float)NEON_fmsub(fVar22,fVar23,fVar26);
        fVar19 = (float)NEON_fmadd(fVar22,fVar19,fVar23 * fVar24);
        fVar23 = (fVar21 * 0.0 + pfVar12[1]) - *(float *)(lVar10 + 0x38);
        fVar19 = (fVar21 * fVar19 + *pfVar12) - *(float *)(lVar10 + 0x34);
        fVar31 = (fVar21 * fVar31 + pfVar12[2]) - *(float *)(lVar10 + 0x3c);
        uVar27 = NEON_fmadd(fVar19,*(undefined4 *)(lVar10 + 4),fVar23 * *(float *)(lVar10 + 8));
        uVar29 = NEON_fmadd(fVar19,*(undefined4 *)(lVar10 + 0x14),fVar23 * *(float *)(lVar10 + 0x18)
                           );
        uVar25 = NEON_fmadd(fVar19,*(undefined4 *)(lVar10 + 0x24),fVar23 * *(float *)(lVar10 + 0x28)
                           );
        local_1d8 = (float)NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0xc),uVar27);
        uStack_1d4 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x1c),uVar29);
        local_1d0 = NEON_fmadd(fVar31,*(undefined4 *)(lVar10 + 0x2c),uVar25);
        uVar16 = DetourNavigationMeshQuery::raycast
                           (*(DetourNavigationMeshQuery **)(lVar10 + 0x50),&local_1c8,&local_1d8,
                            &local_1dc);
        if ((uVar16 & 1) != 0) {
          lVar17 = lVar17 + uVar9 * 0x20;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 2;
        }
        uVar9 = (ulong)((int)uVar9 + 1);
        lVar17 = *(long *)(this + 0x410);
      } while (uVar9 < (ulong)(*(long *)(this + 0x418) - lVar17 >> 5));
    }
  }
  else {
    bVar4 = 1;
    if (lVar7 != lVar17) goto LAB_0070ab80;
  }
  uVar5 = AnimalHusbandry::getNearAnimals
                    (*(AnimalHusbandry **)(*(long *)(this + 0x3b0) + 0x68),
                     *(AnimalContext **)(this + 0x3b8),(NearAnimal *)&local_1b8,8,fVar21);
  lVar17 = *(long *)(this + 0x410);
  lVar10 = *(long *)(this + 0x418) - lVar17;
  pfVar12 = *(float **)(this + 0x3b8);
  if (uVar5 != 0) {
    fVar21 = *pfVar12;
    fVar19 = pfVar12[1];
    fVar31 = pfVar12[4];
    fVar23 = pfVar12[5];
    uVar9 = 0;
    fVar18 = pfVar12[2];
    fVar20 = pfVar12[3];
    do {
      fVar22 = local_1ac[uVar9 * 9 + 1] - fVar19;
      fVar24 = local_1ac[uVar9 * 9] - fVar21;
      fVar26 = local_1ac[uVar9 * 9 + 2] - fVar18;
      uVar25 = NEON_fmadd(fVar24,fVar24,fVar22 * fVar22);
      fVar30 = (float)NEON_fmadd(fVar26,fVar26,uVar25);
      fVar28 = 1.0;
      if (1e-06 < fVar30) {
        fVar28 = 1.0 / SQRT(fVar30);
      }
      uVar25 = NEON_fmadd(fVar24 * fVar28,fVar20,fVar22 * fVar28 * fVar31);
      fVar22 = (float)NEON_fmadd(fVar26 * fVar28,fVar23,uVar25);
      if (lVar10 != 0) {
        uVar16 = 0;
        fVar24 = (float)NEON_fmadd(fVar26 * fVar28,fVar20,fVar23 * -(fVar24 * fVar28));
        do {
          lVar7 = lVar17 + uVar16 * 0x20;
          if (*(float *)(lVar7 + 8) <= fVar22 && fVar22 <= *(float *)(lVar7 + 0xc)) {
            piVar14 = (int *)(lVar7 + 0x18);
            if (fVar24 <= 0.0) {
              piVar14 = (int *)(lVar7 + 0x1c);
            }
            *piVar14 = *piVar14 + 1;
            break;
          }
          uVar16 = (ulong)((int)uVar16 + 1);
        } while (uVar16 < (ulong)(lVar10 >> 5));
      }
      uVar9 = uVar9 + 1;
      bVar4 = fVar22 <= 0.75 & bVar4;
    } while (uVar9 != uVar5);
  }
  if ((param_1) && ((bVar4 & 1) != 0)) {
    uVar6 = 0;
    goto LAB_0070b008;
  }
  iVar15 = 0x7fffffff;
  *(undefined4 *)(this + 0x400) = 0x7fffffff;
  if (lVar10 == 0) {
    uVar5 = 0x7fffffff;
LAB_0070aef4:
    pfVar12 = (float *)(lVar17 + (long)(int)uVar5 * 0x20);
    *param_2 = 0 < iVar15;
    fVar21 = *pfVar12;
    *(float *)(this + 100) = fVar21;
    if ((int)pfVar12[6] < (int)pfVar12[7]) {
      fVar21 = pfVar12[4];
LAB_0070af5c:
      AnimalAnimationSystem::setState
                ((AnimalAnimationSystem *)(this + 0x78),3,(uint)fVar21,false,0.0);
      puVar8 = (uint *)(*(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20 + 0x10);
    }
    else {
      if ((int)pfVar12[7] < (int)pfVar12[6]) {
        lVar17 = lVar17 + (long)(int)uVar5 * 0x20;
      }
      else {
        fVar21 = (float)MathUtil::getRandom();
        if (0.5 < fVar21) {
          fVar21 = *(float *)(*(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20 + 0x10);
          goto LAB_0070af5c;
        }
        fVar21 = *(float *)(this + 100);
        lVar17 = *(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20;
      }
      *(float *)(this + 100) = -fVar21;
      AnimalAnimationSystem::setState
                ((AnimalAnimationSystem *)(this + 0x78),2,*(uint *)(lVar17 + 0x14),false,0.0);
      puVar8 = (uint *)(*(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20 + 0x14);
    }
    fVar21 = (float)AnimalAnimationSystem::getAnimationDuration
                              ((AnimalAnimationSystem *)(this + 0x78),*puVar8);
    uVar6 = 1;
    pfVar12 = *(float **)(this + 0x3b8);
    fVar21 = *(float *)(*(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20 + 4) * fVar21;
    *(float *)(this + 0x28) = fVar21;
    *(float *)(this + 0x30) = fVar21;
  }
  else {
    uVar13 = 0;
    piVar14 = (int *)(lVar17 + 0x1c);
    uVar5 = 0x7fffffff;
    iVar15 = 0x7fffffff;
    do {
      iVar2 = piVar14[-1];
      if (iVar2 < iVar15) {
        *(uint *)(this + 0x400) = uVar13;
        iVar15 = iVar2;
        uVar5 = uVar13;
      }
      iVar2 = *piVar14;
      if (iVar2 < iVar15) {
        *(uint *)(this + 0x400) = uVar13;
        iVar15 = iVar2;
        uVar5 = uVar13;
      }
      uVar13 = uVar13 + 1;
      piVar14 = piVar14 + 8;
    } while ((ulong)uVar13 < (ulong)(lVar10 >> 5));
    if (uVar5 != 0xffffffff) goto LAB_0070aef4;
    uVar6 = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  uVar11 = *(undefined8 *)(pfVar12 + 3);
  *(float *)(this + 0x60) = pfVar12[5];
  *(undefined8 *)(this + 0x58) = uVar11;
LAB_0070b008:
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


