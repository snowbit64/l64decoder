// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitNewParticles
// Entry Point: 008d73c0
// Size: 680 bytes
// Signature: undefined __thiscall emitNewParticles(ParticleSystem * this, Matrix4x4 * param_1, float param_2)


/* ParticleSystem::emitNewParticles(Matrix4x4 const&, float) */

void __thiscall
ParticleSystem::emitNewParticles(ParticleSystem *this,Matrix4x4 *param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  Vector3 aVStack_c8 [16];
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  if ((((*(long **)(this + 0x1a0) != (long *)0x0) &&
       (this[0x118] != (ParticleSystem)0x0 || 0.0 < *(float *)(this + 0xd8))) &&
      (*(float *)(this + 0xd4) <= 0.0)) &&
     ((0.0 < param_2 && (*(uint *)(this + 0xd0) < *(uint *)(this + 0x124))))) {
    fVar14 = *(float *)(this + 0x120);
    *(float *)(this + 0xcc) = *(float *)(this + 0xcc) + param_2;
    fVar7 = (float)(**(code **)(**(long **)(this + 0x1a0) + 0x20))();
    fVar7 = fVar14 * fVar7 * *(float *)(this + 0x130);
    if (fVar7 <= 0.0) {
      *(undefined4 *)(this + 0xcc) = 0;
    }
    else {
      fVar14 = fVar7 * *(float *)(this + 0xcc);
      uVar6 = (uint)fVar14;
      uVar10 = NEON_ucvtf((int)fVar14);
      fVar14 = (float)NEON_fmsub(uVar10,1.0 / fVar7,*(float *)(this + 0xcc));
      *(float *)(this + 0xcc) = fVar14;
      (**(code **)(**(long **)(this + 0x1a0) + 0x30))(*(long **)(this + 0x1a0),&local_98,&local_a8);
      fVar8 = *(float *)(this + 0x184);
      if ((uint)(*(int *)(this + 0x11c) - *(int *)(this + 0x1b0)) <= uVar6) {
        uVar6 = *(int *)(this + 0x11c) - *(int *)(this + 0x1b0);
      }
      uVar1 = *(int *)(this + 0x124) - *(int *)(this + 0xd0);
      local_a8 = CONCAT44((float)((ulong)local_a8 >> 0x20) * fVar8,(float)local_a8 * fVar8);
      local_a0 = fVar8 * local_a0;
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      *(uint *)(this + 0xd0) = uVar6 + *(int *)(this + 0xd0);
      uVar3 = local_98;
      fVar8 = local_90;
      while (uVar6 != 0) {
        uVar6 = uVar6 - 1;
        local_98 = uVar3;
        local_90 = fVar8;
        uVar4 = (**(code **)(**(long **)(this + 0x1a0) + 0x28))
                          (*(long **)(this + 0x1a0),&local_b8,aVStack_c8);
        if ((uVar4 & 1) != 0) {
          fVar9 = -fVar14 / param_2;
          fVar15 = fVar14 * *(float *)(this + 0xfc);
          local_b0 = fVar9 * fVar8 + local_b0;
          local_b8 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar9 +
                              (float)((ulong)local_b8 >> 0x20),
                              (float)uVar3 * fVar9 + (float)local_b8);
          puVar5 = (undefined4 *)
                   emitParticle(this,(Vector3 *)&local_b8,aVStack_c8,(Vector3 *)&local_a8,
                                *(float *)(this + 0xc4) - fVar15,param_1);
          if (0.0 < fVar14) {
            fVar8 = powf(1.0 - *(float *)(this + 0x188),fVar15 * 0.001);
            uVar13 = NEON_fmadd(puVar5[3],fVar15,*puVar5);
            uVar10 = NEON_fmadd(puVar5[4],fVar15,puVar5[1]);
            uVar12 = NEON_fmadd(puVar5[5],fVar15,puVar5[2]);
            fVar11 = (float)puVar5[3] * fVar8;
            fVar9 = fVar8 * (float)puVar5[4];
            fVar8 = fVar8 * (float)puVar5[5];
            *puVar5 = uVar13;
            puVar5[1] = uVar10;
            puVar5[2] = uVar12;
            puVar5[3] = fVar11;
            puVar5[4] = fVar9;
            puVar5[5] = fVar8;
            if (this[0x15c] != (ParticleSystem)0x0) {
              fVar15 = fVar15 * 1e-05;
              uVar10 = NEON_fmadd(*(undefined4 *)(this + 0x160),fVar15,fVar11);
              puVar5[3] = uVar10;
              uVar10 = NEON_fmadd(*(undefined4 *)(this + 0x164),fVar15,fVar9);
              puVar5[4] = uVar10;
              uVar10 = NEON_fmadd(*(undefined4 *)(this + 0x168),fVar15,fVar8);
              puVar5[5] = uVar10;
            }
          }
        }
        fVar14 = 1.0 / fVar7 + fVar14;
        uVar3 = local_98;
        fVar8 = local_90;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


