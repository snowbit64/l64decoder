// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementUpdateWander
// Entry Point: 0070da0c
// Size: 588 bytes
// Signature: undefined __thiscall movementUpdateWander(AnimalLocomotionSystem * this, float param_1)


/* AnimalLocomotionSystem::movementUpdateWander(float) */

void __thiscall
AnimalLocomotionSystem::movementUpdateWander(AnimalLocomotionSystem *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  
  updateAvoidance();
  if (this[0x3f9] == (AnimalLocomotionSystem)0x0) {
    fVar2 = *(float *)(this + 0x498);
  }
  else {
    *(undefined4 *)(this + 0x494) = 0;
    fVar2 = 0.1;
  }
  *(float *)(this + 0x498) = fVar2 - param_1;
  if (0.0 <= fVar2 - param_1) {
    fVar2 = *(float *)(this + 0x494);
    pfVar1 = *(float **)(this + 0x68);
    goto LAB_0070db30;
  }
  *(undefined4 *)(this + 0x498) = 0x3dcccccd;
  if (this[0x4a6] == (AnimalLocomotionSystem)0x0) {
    fVar3 = (float)MathUtil::getRandom();
    pfVar1 = *(float **)(this + 0x68);
    fVar2 = -pfVar1[2];
    if (0.5 <= fVar3) {
      fVar2 = pfVar1[2];
    }
    fVar3 = *(float *)(this + 0x494);
  }
  else {
    fVar4 = *(float *)(this + 0x4a8);
    fVar2 = *(float *)(this + 0x494);
    pfVar1 = *(float **)(this + 0x68);
    fVar3 = pfVar1[2];
    if (3.141593 <= ABS(fVar4 - fVar2)) {
      if (fVar2 < fVar4) goto LAB_0070dad8;
    }
    else if (fVar4 < fVar2) {
LAB_0070dad8:
      fVar3 = -fVar3;
    }
  }
  fVar2 = fVar2 + fVar3;
  *(float *)(this + 0x494) = fVar2;
  fVar3 = fVar2 + -6.283185;
  if ((6.283185 < fVar2) || (fVar3 = fVar2, fVar2 < 0.0)) {
    fVar2 = fVar3 + 6.283185;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
    *(float *)(this + 0x494) = fVar2;
  }
LAB_0070db30:
  sincosf(fVar2,&local_24,&local_28);
  fVar2 = *(float *)(this + 0x438);
  fVar5 = *(float *)(this + 0x434);
  fVar4 = (float)NEON_fmadd(fVar5,local_24,local_28 * fVar2);
  fVar3 = (float)NEON_fmadd(fVar5,local_28,local_24 * -fVar2);
  fVar2 = fVar4 * pfVar1[1] + fVar2 * *pfVar1 + *(float *)(this + 0x430);
  fVar4 = fVar3 * pfVar1[1] + *(float *)(this + 0x42c) + fVar5 * *pfVar1;
  fVar3 = fVar2 - *(float *)(this + 0x430);
  *(float *)(this + 0x450) = fVar2;
  fVar2 = fVar4 - *(float *)(this + 0x42c);
  *(float *)(this + 0x44c) = fVar4;
  fVar4 = (float)NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  fVar4 = SQRT(fVar4);
  if (0.0001 <= fVar4) {
    fVar2 = fVar2 * (1.0 / fVar4);
    fVar3 = fVar3 * (1.0 / fVar4);
  }
  *(float *)(this + 0x49c) = fVar4;
  fVar3 = fVar3 * *(float *)(this + 0x48c) * *(float *)(this + 0x4a0) - *(float *)(this + 0x440);
  fVar2 = fVar2 * *(float *)(this + 0x48c) * *(float *)(this + 0x4a0) - *(float *)(this + 0x43c);
  fVar4 = (float)NEON_fmadd(fVar2,fVar2,fVar3 * fVar3);
  if (25.0 < fVar4) {
    fVar5 = 1.0;
    if (1e-06 < fVar4) {
      fVar5 = 1.0 / SQRT(fVar4);
    }
    fVar2 = fVar2 * fVar5 * 5.0;
    fVar3 = fVar3 * fVar5 * 5.0;
  }
  movementApplyForce(fVar2,fVar3,this,0);
  return;
}


