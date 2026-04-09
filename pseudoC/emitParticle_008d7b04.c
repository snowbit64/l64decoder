// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitParticle
// Entry Point: 008d7b04
// Size: 808 bytes
// Signature: undefined __thiscall emitParticle(ParticleSystem * this, Vector3 * param_1, Vector3 * param_2, Vector3 * param_3, float param_4, Matrix4x4 * param_5)


/* ParticleSystem::emitParticle(Vector3 const&, Vector3 const&, Vector3 const&, float, Matrix4x4
   const&) */

float * __thiscall
ParticleSystem::emitParticle
          (ParticleSystem *this,Vector3 *param_1,Vector3 *param_2,Vector3 *param_3,float param_4,
          Matrix4x4 *param_5)

{
  undefined2 uVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar4 = *(long *)(this + 0x1a8);
  uVar5 = (ulong)*(uint *)(this + 0x1b0);
  uVar6 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)param_5,
                     *(float *)(param_1 + 4) * *(float *)(param_5 + 0x10));
  pfVar3 = (float *)(lVar4 + uVar5 * 0x24);
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_5 + 0x20),uVar6);
  fVar8 = *(float *)(param_5 + 0x30);
  *(uint *)(this + 0x1b0) = *(uint *)(this + 0x1b0) + 1;
  *pfVar3 = fVar7 + fVar8;
  uVar6 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(param_5 + 4),
                     *(float *)(param_1 + 4) * *(float *)(param_5 + 0x14));
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_5 + 0x24),uVar6);
  pfVar3[1] = fVar7 + *(float *)(param_5 + 0x34);
  uVar6 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)(param_5 + 8),
                     *(float *)(param_1 + 4) * *(float *)(param_5 + 0x18));
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_5 + 0x28),uVar6);
  pfVar3[2] = fVar7 + *(float *)(param_5 + 0x38);
  fVar7 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 4);
  uVar6 = NEON_fmadd(fVar7,fVar7,fVar8 * fVar8);
  fVar10 = *(float *)(param_2 + 8);
  fVar13 = (float)NEON_fmadd(fVar10,fVar10,uVar6);
  fVar12 = 1.0;
  if (1e-06 < fVar13) {
    fVar12 = 1.0 / SQRT(fVar13);
  }
  fVar7 = fVar7 * fVar12;
  fVar8 = fVar8 * fVar12;
  fVar10 = fVar10 * fVar12;
  fVar12 = *(float *)(this + 0x154);
  fVar17 = fVar7 * fVar12;
  fVar13 = fVar8 * fVar12;
  fVar12 = fVar10 * fVar12;
  if (*(float *)(this + 0x158) != 0.0) {
    fVar14 = fVar10;
    if (0.9 <= ABS(fVar7)) {
      fVar14 = -fVar7;
    }
    fVar18 = -fVar8;
    fVar15 = 0.0;
    if (0.9 <= ABS(fVar7)) {
      fVar18 = 0.0;
      fVar15 = fVar8;
    }
    fVar9 = (float)NEON_fmadd(fVar8,fVar18,fVar14 * -fVar10);
    fVar8 = (float)NEON_fmadd(fVar7,fVar14,fVar15 * -fVar8);
    fVar7 = (float)NEON_fmadd(fVar10,fVar15,fVar18 * -fVar7);
    uVar6 = MathUtil::getRandom();
    fVar19 = (float)NEON_fmadd(uVar6,0x40000000,0xbf800000);
    uVar6 = MathUtil::getRandom();
    fVar11 = (float)NEON_fmadd(uVar6,0x40000000,0xbf800000);
    fVar7 = fVar14 * fVar19 + fVar7 * fVar11;
    fVar10 = fVar15 * fVar19 + fVar9 * fVar11;
    fVar14 = 1.0;
    fVar8 = fVar18 * fVar19 + fVar8 * fVar11;
    uVar6 = NEON_fmadd(fVar10,fVar10,fVar7 * fVar7);
    fVar15 = (float)NEON_fmadd(fVar8,fVar8,uVar6);
    if (1e-06 < fVar15) {
      fVar14 = 1.0 / SQRT(fVar15);
    }
    fVar14 = *(float *)(this + 0x158) * fVar14;
    fVar17 = fVar17 + fVar10 * fVar14;
    fVar13 = fVar13 + fVar7 * fVar14;
    fVar12 = fVar12 + fVar8 * fVar14;
  }
  uVar16 = *(undefined4 *)(this + 0x14c);
  uVar6 = MathUtil::getRandom();
  lVar2 = lVar4 + uVar5 * 0x24;
  fVar7 = (float)NEON_fmadd(uVar6,*(undefined4 *)(this + 0x150),uVar16);
  fVar8 = *(float *)(param_3 + 4) + fVar13 * fVar7;
  fVar10 = *(float *)param_3 + fVar17 * fVar7;
  fVar7 = fVar12 * fVar7 + *(float *)(param_3 + 8);
  uVar6 = NEON_fmadd(fVar10,*(undefined4 *)param_5,fVar8 * *(float *)(param_5 + 0x10));
  uVar6 = NEON_fmadd(fVar7,*(undefined4 *)(param_5 + 0x20),uVar6);
  *(undefined4 *)(lVar2 + 0xc) = uVar6;
  uVar6 = NEON_fmadd(fVar10,*(undefined4 *)(param_5 + 4),fVar8 * *(float *)(param_5 + 0x14));
  uVar6 = NEON_fmadd(fVar7,*(undefined4 *)(param_5 + 0x24),uVar6);
  *(undefined4 *)(lVar2 + 0x10) = uVar6;
  uVar6 = NEON_fmadd(fVar10,*(undefined4 *)(param_5 + 8),fVar8 * *(float *)(param_5 + 0x18));
  uVar16 = *(undefined4 *)(param_5 + 0x28);
  *(float *)(lVar2 + 0x18) = param_4;
  uVar6 = NEON_fmadd(fVar7,uVar16,uVar6);
  *(undefined4 *)(lVar2 + 0x14) = uVar6;
  fVar7 = (float)MathUtil::getRandom();
  if (fVar7 * 32768.0 <= 32767.0) {
    fVar7 = (float)MathUtil::getRandom();
    uVar1 = (undefined2)(int)(fVar7 * 32768.0);
  }
  else {
    uVar1 = 0x7fff;
  }
  *(undefined2 *)(lVar4 + uVar5 * 0x24 + 0x1c) = uVar1;
  return pfVar3;
}


