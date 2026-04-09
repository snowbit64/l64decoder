// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008d6fe4
// Size: 700 bytes
// Signature: undefined __thiscall update(ParticleSystem * this, float param_1)


/* ParticleSystem::update(float) */

void __thiscall ParticleSystem::update(ParticleSystem *this,float param_1)

{
  ParticleSystem PVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 0x18))(param_1);
    updateBoundingVolume();
  }
  if ((this[0xc0] != (ParticleSystem)0x0) ||
     ((*(int *)(this + 0x1b0) != 0 && (this[0x138] == (ParticleSystem)0x0)))) {
    EngineManager::getInstance();
    uVar3 = EngineManager::getParticleSystemSimulationEnabled();
    if ((uVar3 & 1) != 0) {
      fVar22 = *(float *)(this + 0xfc) * 30.0;
      fVar12 = (*(float *)(this + 200) + param_1) * 0.03333334;
      iVar9 = (int)fVar12;
      fVar11 = (float)NEON_ucvtf((int)fVar12);
      uVar16 = NEON_fmsub(fVar11,0x41f00000,*(float *)(this + 200) + param_1);
      *(undefined4 *)(this + 200) = uVar16;
      fVar12 = powf(1.0 - *(float *)(this + 0x188),fVar22 * 0.001);
      fVar11 = *(float *)(this + 0xc4) + fVar22 * fVar11;
      *(float *)(this + 0xc4) = fVar11;
      if (this[0x138] == (ParticleSystem)0x0) {
        uVar4 = *(uint *)(this + 0x1b0);
        if (uVar4 != 0) {
          fVar13 = *(float *)(this + 0x134);
          uVar6 = 0;
          do {
            while (lVar10 = *(long *)(this + 0x1a8),
                  fVar11 - fVar13 <= *(float *)(lVar10 + (ulong)uVar6 * 0x24 + 0x18)) {
              uVar6 = uVar6 + 1;
              if (uVar4 <= uVar6) goto LAB_008d70d8;
            }
            puVar5 = (undefined8 *)(lVar10 + (ulong)(uVar4 - 1) * 0x24);
            puVar8 = (undefined8 *)(lVar10 + (ulong)uVar6 * 0x24);
            uVar18 = *puVar5;
            uVar15 = puVar5[3];
            uVar14 = puVar5[2];
            uVar16 = *(undefined4 *)(puVar5 + 4);
            puVar8[1] = puVar5[1];
            *puVar8 = uVar18;
            puVar8[3] = uVar15;
            puVar8[2] = uVar14;
            *(undefined4 *)(puVar8 + 4) = uVar16;
            uVar4 = *(int *)(this + 0x1b0) - 1;
            *(uint *)(this + 0x1b0) = uVar4;
          } while (uVar6 < uVar4);
        }
      }
      else {
        uVar4 = *(uint *)(this + 0x1b0);
      }
LAB_008d70d8:
      if (iVar9 != 0) {
        fVar11 = fVar22 * 1e-05;
        do {
          iVar9 = iVar9 + -1;
          if (uVar4 != 0) {
            PVar1 = this[0x15c];
            pfVar7 = (float *)(*(long *)(this + 0x1a8) + 0xc);
            uVar3 = (ulong)uVar4;
            do {
              fVar23 = (float)NEON_fmadd(*pfVar7,fVar22,pfVar7[-3]);
              fVar20 = (float)NEON_fmadd(pfVar7[1],fVar22,pfVar7[-2]);
              fVar21 = (float)NEON_fmadd(pfVar7[2],fVar22,pfVar7[-1]);
              fVar19 = fVar12 * *pfVar7;
              fVar17 = fVar12 * pfVar7[1];
              fVar13 = fVar12 * pfVar7[2];
              pfVar7[-3] = fVar23;
              pfVar7[-2] = fVar20;
              pfVar7[-1] = fVar21;
              *pfVar7 = fVar19;
              pfVar7[1] = fVar17;
              pfVar7[2] = fVar13;
              if (PVar1 != (ParticleSystem)0x0) {
                fVar19 = (float)NEON_fmadd(*(undefined4 *)(this + 0x160),fVar11,fVar19);
                *pfVar7 = fVar19;
                fVar17 = (float)NEON_fmadd(*(undefined4 *)(this + 0x164),fVar11,fVar17);
                pfVar7[1] = fVar17;
                fVar13 = (float)NEON_fmadd(*(undefined4 *)(this + 0x168),fVar11,fVar13);
                pfVar7[2] = fVar13;
              }
              uVar3 = uVar3 - 1;
              pfVar7 = pfVar7 + 9;
            } while (uVar3 != 0);
          }
        } while (iVar9 != 0);
      }
      if (this[0xc0] != (ParticleSystem)0x0) {
        lVar10 = *(long *)(this + 0xe0);
        uStack_88 = 0;
        local_90 = 0x3f800000;
        uStack_78 = 0;
        uStack_80 = 0x3f80000000000000;
        uStack_68 = 0x3f800000;
        local_70 = 0;
        uStack_58 = 0x3f80000000000000;
        uStack_60 = 0;
        if (lVar10 != 0) {
          RawTransformGroup::updateWorldTransformation();
          Matrix4x4::invert3x4((Matrix4x4 *)&local_90,(Matrix4x4 *)(lVar10 + 0xb8));
        }
        emitNewParticles(this,(Matrix4x4 *)&local_90,param_1);
      }
    }
  }
  this[0xc0] = (ParticleSystem)0x0;
  *(ulong *)(this + 0xd4) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xd4) >> 0x20) - param_1,
                (float)*(undefined8 *)(this + 0xd4) - param_1);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


