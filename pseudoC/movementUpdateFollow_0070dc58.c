// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementUpdateFollow
// Entry Point: 0070dc58
// Size: 920 bytes
// Signature: undefined __cdecl movementUpdateFollow(float param_1)


/* AnimalLocomotionSystem::movementUpdateFollow(float) */

void AnimalLocomotionSystem::movementUpdateFollow(float param_1)

{
  uint uVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  bool local_6c [4];
  float afStack_68 [4];
  float afStack_58 [4];
  float local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  fVar7 = *(float *)(in_x0 + 0x430);
  fVar12 = *(float *)(in_x0 + 0x450) - fVar7;
  fVar9 = *(float *)(in_x0 + 0x42c);
  lVar3 = *(long *)(in_x0 + 0x460);
  fVar10 = *(float *)(in_x0 + 0x44c) - fVar9;
  uVar5 = *(long *)(in_x0 + 0x468) - lVar3;
  fVar14 = (float)NEON_fmadd(fVar10,fVar10,fVar12 * fVar12);
  *(float *)(in_x0 + 0x49c) = SQRT(fVar14);
  if ((SQRT(fVar14) < 4.0) && (uVar1 = *(int *)(in_x0 + 0x478) + 1, uVar1 < (uint)(uVar5 >> 3))) {
    *(uint *)(in_x0 + 0x478) = uVar1;
    uVar6 = *(undefined8 *)(lVar3 + (ulong)uVar1 * 8);
    *(undefined8 *)(in_x0 + 0x44c) = uVar6;
    fVar10 = (float)uVar6 - fVar9;
    fVar12 = (float)((ulong)uVar6 >> 0x20) - fVar7;
  }
  pfVar4 = (float *)(lVar3 + (ulong)((int)((long)uVar5 >> 3) - 1) * 8);
  fVar14 = pfVar4[1] - fVar7;
  fVar16 = *pfVar4 - fVar9;
  fVar14 = (float)NEON_fmadd(fVar16,fVar16,fVar14 * fVar14);
  *(float *)(in_x0 + 0x49c) = SQRT(fVar14);
  if (SQRT(fVar14) < 10.0) {
    *(undefined4 *)(in_x0 + 0x48c) = *(undefined4 *)(*(long *)(in_x0 + 0x68) + 0xc);
  }
  fVar14 = (float)NEON_fmadd(fVar10,fVar10,fVar12 * fVar12);
  fVar16 = 1.0;
  if (1e-06 < fVar14) {
    fVar16 = 1.0 / SQRT(fVar14);
  }
  fVar12 = fVar12 * fVar16;
  fVar14 = *(float *)(in_x0 + 0x438);
  fVar10 = fVar10 * fVar16;
  fVar16 = *(float *)(in_x0 + 0x434);
  fVar17 = (float)NEON_fmadd(fVar10,fVar16,fVar12 * fVar14);
  if (fVar17 < 0.0) {
    fVar12 = (float)NEON_fmadd(fVar10,fVar14,fVar16 * -fVar12);
    fVar17 = **(float **)(in_x0 + 0x68);
    fVar18 = (*(float **)(in_x0 + 0x68))[1];
    fVar10 = -fVar16;
    if (fVar12 <= 0.0) {
      fVar10 = fVar16;
    }
    fVar15 = fVar14;
    if (fVar12 <= 0.0) {
      fVar15 = -fVar14;
    }
    fVar7 = (fVar10 * fVar18 + fVar7 + fVar14 * fVar17) - fVar7;
    fVar9 = (fVar15 * fVar18 + fVar9 + fVar16 * fVar17) - fVar9;
    fVar10 = (float)NEON_fmadd(fVar9,fVar9,fVar7 * fVar7);
    fVar12 = 1.0;
    if (1e-06 < fVar10) {
      fVar12 = 1.0 / SQRT(fVar10);
    }
    fVar10 = fVar9 * fVar12;
    fVar12 = fVar7 * fVar12;
  }
  fVar7 = *(float *)(in_x0 + 0x48c) * *(float *)(in_x0 + 0x4a0);
  fVar9 = fVar12 * fVar7 - *(float *)(in_x0 + 0x440);
  fVar7 = fVar10 * fVar7 - *(float *)(in_x0 + 0x43c);
  fVar10 = (float)NEON_fmadd(fVar7,fVar7,fVar9 * fVar9);
  if (25.0 < fVar10) {
    fVar12 = 1.0;
    if (1e-06 < fVar10) {
      fVar12 = 1.0 / SQRT(fVar10);
    }
    fVar7 = fVar7 * fVar12 * 5.0;
    fVar9 = fVar9 * fVar12 * 5.0;
  }
  movementApplyForce(fVar7,fVar9);
  if (*(float *)(in_x0 + 0x48c) < *(float *)(in_x0 + 0x488)) {
    movementApplyForce(*(float *)(in_x0 + 0x434) * -4.0,*(float *)(in_x0 + 0x438) * -4.0);
  }
  pfVar4 = *(float **)(in_x0 + 0x3b8);
  local_6c[0] = false;
  lVar3 = *(long *)(in_x0 + 0x3b0);
  fVar9 = pfVar4[1] - *(float *)(lVar3 + 0x38);
  fVar7 = *pfVar4 - *(float *)(lVar3 + 0x34);
  fVar10 = pfVar4[2] - *(float *)(lVar3 + 0x3c);
  uVar11 = NEON_fmadd(fVar7,*(undefined4 *)(lVar3 + 4),fVar9 * *(float *)(lVar3 + 8));
  uVar13 = NEON_fmadd(fVar7,*(undefined4 *)(lVar3 + 0x14),fVar9 * *(float *)(lVar3 + 0x18));
  uVar8 = NEON_fmadd(fVar7,*(undefined4 *)(lVar3 + 0x24),fVar9 * *(float *)(lVar3 + 0x28));
  local_40 = NEON_fmadd(fVar10,*(undefined4 *)(lVar3 + 0x2c),uVar8);
  local_48 = (float)NEON_fmadd(fVar10,*(undefined4 *)(lVar3 + 0xc),uVar11);
  uStack_44 = NEON_fmadd(fVar10,*(undefined4 *)(lVar3 + 0x1c),uVar13);
  DetourNavigationMeshQuery::findDistanceToWall
            (*(DetourNavigationMeshQuery **)(lVar3 + 0x50),&local_48,0.01,local_6c,afStack_58,
             afStack_68);
  fVar7 = **(float **)(in_x0 + 0x3b8);
  fVar9 = (*(float **)(in_x0 + 0x3b8))[2];
  if (local_6c[0] == false) {
    fVar9 = fVar9 - *(float *)(in_x0 + 0x458);
    fVar7 = fVar7 - *(float *)(in_x0 + 0x454);
    fVar7 = (float)NEON_fmadd(fVar7,fVar7,fVar9 * fVar9);
    if (9.0 < fVar7) {
      *(undefined2 *)(in_x0 + 0x4a4) = 1;
      *(undefined4 *)(in_x0 + 0x428) = 3;
      fVar7 = 0.25;
      if (*(float *)(in_x0 + 0x488) <= 4.0) {
        fVar7 = 0.5;
      }
      *(float *)(in_x0 + 0x484) = fVar7;
      *(ulong *)(in_x0 + 0x47c) =
           CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x43c) >> 0x20) * (-1.0 / fVar7),
                    (float)*(undefined8 *)(in_x0 + 0x43c) * (-1.0 / fVar7));
    }
  }
  else {
    *(float *)(in_x0 + 0x454) = fVar7;
    *(float *)(in_x0 + 0x458) = fVar9;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


