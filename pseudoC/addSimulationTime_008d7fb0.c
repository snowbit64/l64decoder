// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSimulationTime
// Entry Point: 008d7fb0
// Size: 724 bytes
// Signature: undefined __thiscall addSimulationTime(ParticleSystem * this, float param_1)


/* ParticleSystem::addSimulationTime(float) */

void __thiscall ParticleSystem::addSimulationTime(ParticleSystem *this,float param_1)

{
  ParticleSystem PVar1;
  long lVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(this + 0xe0);
  uStack_88 = 0;
  local_90 = 0x3f800000;
  uStack_78 = 0;
  uStack_80 = 0x3f80000000000000;
  uStack_68 = 0x3f800000;
  local_70 = 0;
  uStack_58 = 0x3f80000000000000;
  uStack_60 = 0;
  if (lVar9 != 0) {
    RawTransformGroup::updateWorldTransformation();
    Matrix4x4::invert3x4((Matrix4x4 *)&local_90,(Matrix4x4 *)(lVar9 + 0xb8));
  }
  fVar11 = *(float *)(this + 0xc4);
  *(float *)(this + 0xc4) = fVar11 + param_1;
  if (this[0x138] == (ParticleSystem)0x0) {
    uVar8 = *(uint *)(this + 0x1b0);
    if (uVar8 != 0) {
      fVar12 = *(float *)(this + 0x134);
      uVar3 = 0;
      do {
        while (lVar9 = *(long *)(this + 0x1a8),
              (fVar11 + param_1) - fVar12 <= *(float *)(lVar9 + (ulong)uVar3 * 0x24 + 0x18)) {
          uVar3 = uVar3 + 1;
          if (uVar8 <= uVar3) goto LAB_008d8038;
        }
        puVar7 = (undefined8 *)(lVar9 + (ulong)(uVar8 - 1) * 0x24);
        puVar5 = (undefined8 *)(lVar9 + (ulong)uVar3 * 0x24);
        uVar15 = *puVar7;
        uVar14 = puVar7[3];
        uVar17 = puVar7[2];
        uVar23 = *(undefined4 *)(puVar7 + 4);
        puVar5[1] = puVar7[1];
        *puVar5 = uVar15;
        puVar5[3] = uVar14;
        puVar5[2] = uVar17;
        *(undefined4 *)(puVar5 + 4) = uVar23;
        uVar8 = *(int *)(this + 0x1b0) - 1;
        *(uint *)(this + 0x1b0) = uVar8;
      } while (uVar3 < uVar8);
    }
  }
  else {
    uVar8 = *(uint *)(this + 0x1b0);
  }
LAB_008d8038:
  fVar12 = powf(1.0 - *(float *)(this + 0x188),0.03);
  uVar10 = (ulong)uVar8;
  fVar11 = param_1;
  if (30.0 < param_1) {
    uVar17 = NEON_fmov(0x41f00000,4);
    do {
      if (uVar8 != 0) {
        PVar1 = this[0x15c];
        puVar5 = (undefined8 *)(*(long *)(this + 0x1a8) + 0xc);
        uVar6 = uVar10;
        do {
          fVar13 = (float)*puVar5;
          fVar20 = fVar12 * fVar13;
          fVar16 = (float)((ulong)*puVar5 >> 0x20);
          uVar23 = NEON_fmadd(*(float *)(puVar5 + 1),0x41f00000,*(undefined4 *)((long)puVar5 + -4));
          fVar19 = fVar12 * fVar16;
          fVar18 = fVar12 * *(float *)(puVar5 + 1);
          *(float *)puVar5 = fVar20;
          *(ulong *)((long)puVar5 + -0xc) =
               CONCAT44((float)((ulong)*(undefined8 *)((long)puVar5 + -0xc) >> 0x20) +
                        (float)((ulong)uVar17 >> 0x20) * fVar16,
                        (float)*(undefined8 *)((long)puVar5 + -0xc) + (float)uVar17 * fVar13);
          *(undefined4 *)((long)puVar5 + -4) = uVar23;
          *(float *)((long)puVar5 + 4) = fVar19;
          *(float *)(puVar5 + 1) = fVar18;
          if (PVar1 != (ParticleSystem)0x0) {
            uVar23 = NEON_fmadd(*(undefined4 *)(this + 0x160),0x399d4951,fVar20);
            *(undefined4 *)puVar5 = uVar23;
            uVar23 = NEON_fmadd(*(undefined4 *)(this + 0x164),0x399d4951,fVar19);
            *(undefined4 *)((long)puVar5 + 4) = uVar23;
            uVar23 = NEON_fmadd(*(undefined4 *)(this + 0x168),0x399d4951,fVar18);
            *(undefined4 *)(puVar5 + 1) = uVar23;
          }
          uVar6 = uVar6 - 1;
          puVar5 = (undefined8 *)((long)puVar5 + 0x24);
        } while (uVar6 != 0);
      }
      fVar11 = fVar11 + -30.0;
    } while (30.0 < fVar11);
  }
  if ((0.0 < fVar11) && (fVar12 = powf(1.0 - *(float *)(this + 0x188),fVar11 * 0.001), uVar8 != 0))
  {
    pfVar4 = (float *)(*(long *)(this + 0x1a8) + 0xc);
    PVar1 = this[0x15c];
    fVar13 = fVar11 * 1e-05;
    do {
      fVar22 = (float)NEON_fmadd(*pfVar4,fVar11,pfVar4[-3]);
      fVar20 = (float)NEON_fmadd(pfVar4[1],fVar11,pfVar4[-2]);
      fVar21 = (float)NEON_fmadd(pfVar4[2],fVar11,pfVar4[-1]);
      fVar19 = fVar12 * *pfVar4;
      fVar16 = fVar12 * pfVar4[1];
      fVar18 = fVar12 * pfVar4[2];
      pfVar4[-3] = fVar22;
      pfVar4[-2] = fVar20;
      pfVar4[-1] = fVar21;
      *pfVar4 = fVar19;
      pfVar4[1] = fVar16;
      pfVar4[2] = fVar18;
      if (PVar1 != (ParticleSystem)0x0) {
        fVar19 = (float)NEON_fmadd(*(undefined4 *)(this + 0x160),fVar13,fVar19);
        *pfVar4 = fVar19;
        fVar16 = (float)NEON_fmadd(*(undefined4 *)(this + 0x164),fVar13,fVar16);
        pfVar4[1] = fVar16;
        fVar18 = (float)NEON_fmadd(*(undefined4 *)(this + 0x168),fVar13,fVar18);
        pfVar4[2] = fVar18;
      }
      uVar10 = uVar10 - 1;
      pfVar4 = pfVar4 + 9;
    } while (uVar10 != 0);
  }
  emitNewParticles(this,(Matrix4x4 *)&local_90,param_1);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


