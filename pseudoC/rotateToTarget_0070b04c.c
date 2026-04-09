// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rotateToTarget
// Entry Point: 0070b04c
// Size: 544 bytes
// Signature: undefined __thiscall rotateToTarget(AnimalLocomotionSystem * this, Vector3 * param_1, bool param_2)


/* AnimalLocomotionSystem::rotateToTarget(Vector3 const&, bool) */

void __thiscall
AnimalLocomotionSystem::rotateToTarget(AnimalLocomotionSystem *this,Vector3 *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  pfVar8 = *(float **)(this + 0x3b8);
  fVar16 = 1.0;
  fVar11 = *(float *)(param_1 + 4) - pfVar8[1];
  fVar15 = *(float *)param_1 - *pfVar8;
  fVar10 = *(float *)(param_1 + 8) - pfVar8[2];
  uVar13 = NEON_fmadd(fVar15,fVar15,fVar11 * fVar11);
  fVar14 = (float)NEON_fmadd(fVar10,fVar10,uVar13);
  if (1e-06 < fVar14) {
    fVar16 = 1.0 / SQRT(fVar14);
  }
  puVar9 = (undefined8 *)(pfVar8 + 3);
  uVar17 = *(undefined4 *)puVar9;
  fVar14 = pfVar8[5];
  uVar13 = NEON_fmadd(fVar15 * fVar16,uVar17,fVar11 * fVar16 * pfVar8[4]);
  fVar11 = (float)NEON_fmadd(fVar10 * fVar16,fVar14,uVar13);
  fVar11 = acosf(fVar11);
  lVar2 = *(long *)(this + 0x410);
  uVar4 = 0x7fffffff;
  *(undefined4 *)(this + 0x400) = 0x7fffffff;
  if (*(long *)(this + 0x418) - lVar2 != 0) {
    uVar6 = 0;
    uVar4 = 0x7fffffff;
    fVar7 = 3.402823e+38;
    do {
      fVar12 = ABS(*(float *)(lVar2 + uVar6 * 0x20) - fVar11);
      if (fVar12 < fVar7) {
        *(int *)(this + 0x400) = (int)uVar6;
        uVar4 = uVar6;
        fVar7 = fVar12;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(*(long *)(this + 0x418) - lVar2 >> 5));
    if ((int)uVar4 == -1) {
      *(undefined4 *)(this + 0x28) = 0;
      *(undefined4 *)(this + 0x30) = 0;
      goto LAB_0070b240;
    }
  }
  fVar14 = (float)NEON_fmadd(fVar10 * fVar16,uVar17,fVar14 * -(fVar15 * fVar16));
  fVar10 = fVar11;
  if (!param_2) {
    fVar10 = *(float *)(lVar2 + (-(uVar4 >> 0x1f) & 0xffffffe000000000 | uVar4 << 5));
  }
  *(float *)(this + 100) = fVar10;
  lVar2 = lVar2 + (long)(int)uVar4 * 0x20;
  if (0.0 <= fVar14) {
    AnimalAnimationSystem::setState
              ((AnimalAnimationSystem *)(this + 0x78),3,*(uint *)(lVar2 + 0x10),false,0.0);
    puVar3 = (uint *)(*(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20 + 0x10);
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x14);
    *(float *)(this + 100) = -fVar10;
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),2,uVar1,false,0.0);
    puVar3 = (uint *)(*(long *)(this + 0x410) + (long)*(int *)(this + 0x400) * 0x20 + 0x14);
  }
  fVar10 = (float)AnimalAnimationSystem::getAnimationDuration
                            ((AnimalAnimationSystem *)(this + 0x78),*puVar3);
  *(float *)(this + 0x28) = fVar10;
  if (param_2) {
    lVar2 = *(long *)(this + 0x410);
    fVar10 = fVar10 * (fVar11 / *(float *)(lVar2 + (long)*(int *)(this + 0x400) * 0x20));
  }
  else {
    lVar2 = *(long *)(this + 0x410);
  }
  fVar10 = *(float *)(lVar2 + (long)*(int *)(this + 0x400) * 0x20 + 4) * fVar10;
  puVar9 = (undefined8 *)(*(long *)(this + 0x3b8) + 0xc);
  *(float *)(this + 0x28) = fVar10;
  *(float *)(this + 0x30) = fVar10;
LAB_0070b240:
  uVar5 = *puVar9;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(puVar9 + 1);
  *(undefined8 *)(this + 0x58) = uVar5;
  return;
}


