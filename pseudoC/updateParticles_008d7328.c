// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParticles
// Entry Point: 008d7328
// Size: 152 bytes
// Signature: undefined __thiscall updateParticles(ParticleSystem * this, float param_1, float param_2)


/* ParticleSystem::updateParticles(float, float) */

void __thiscall ParticleSystem::updateParticles(ParticleSystem *this,float param_1,float param_2)

{
  ParticleSystem PVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar2 = (ulong)*(uint *)(this + 0x1b0);
  if (*(uint *)(this + 0x1b0) != 0) {
    pfVar3 = (float *)(*(long *)(this + 0x1a8) + 0xc);
    PVar1 = this[0x15c];
    fVar4 = param_1 * 1e-05;
    do {
      fVar10 = (float)NEON_fmadd(*pfVar3,param_1,pfVar3[-3]);
      fVar8 = (float)NEON_fmadd(pfVar3[1],param_1,pfVar3[-2]);
      fVar9 = (float)NEON_fmadd(pfVar3[2],param_1,pfVar3[-1]);
      fVar7 = *pfVar3 * param_2;
      fVar6 = pfVar3[1] * param_2;
      fVar5 = pfVar3[2] * param_2;
      pfVar3[-3] = fVar10;
      pfVar3[-2] = fVar8;
      pfVar3[-1] = fVar9;
      *pfVar3 = fVar7;
      pfVar3[1] = fVar6;
      pfVar3[2] = fVar5;
      if (PVar1 != (ParticleSystem)0x0) {
        fVar7 = (float)NEON_fmadd(*(undefined4 *)(this + 0x160),fVar4,fVar7);
        *pfVar3 = fVar7;
        fVar6 = (float)NEON_fmadd(*(undefined4 *)(this + 0x164),fVar4,fVar6);
        pfVar3[1] = fVar6;
        fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x168),fVar4,fVar5);
        pfVar3[2] = fVar5;
      }
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 9;
    } while (uVar2 != 0);
  }
  return;
}


