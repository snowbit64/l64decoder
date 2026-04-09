// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementClampAngularSpeed
// Entry Point: 0070dff0
// Size: 292 bytes
// Signature: undefined __thiscall movementClampAngularSpeed(AnimalLocomotionSystem * this, Vector2 * param_1, float param_2)


/* AnimalLocomotionSystem::movementClampAngularSpeed(Vector2&, float) */

void __thiscall
AnimalLocomotionSystem::movementClampAngularSpeed
          (AnimalLocomotionSystem *this,Vector2 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  
  fVar7 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  uVar4 = *(undefined4 *)(this + 0x434);
  fVar5 = *(float *)(this + 0x438);
  fVar1 = (float)NEON_fmadd(fVar7,fVar7,fVar6 * fVar6);
  fVar1 = SQRT(fVar1);
  if (0.0001 <= fVar1) {
    fVar7 = (1.0 / fVar1) * fVar7;
    fVar6 = (1.0 / fVar1) * fVar6;
  }
  fVar8 = *(float *)(this + 0x488);
  fVar3 = (float)NEON_fmadd(fVar7,uVar4,fVar5 * fVar6);
  fVar2 = (float)AnimalAnimationSystem::getMaxTurnAngle();
  fVar2 = fVar2 * param_2;
  if (this[0x4a5] != (AnimalLocomotionSystem)0x0) {
    fVar2 = fVar2 * (*(float *)(this + 0x488) / *(float *)(*(long *)(this + 0x68) + 0x18));
  }
  fVar3 = acosf(fVar3);
  if (fVar2 <= fVar3 / fVar8) {
    fVar7 = (float)NEON_fmadd(fVar6,*(undefined4 *)(*(long *)(this + 0x3b8) + 0xc),
                              *(float *)(*(long *)(this + 0x3b8) + 0x14) * -fVar7);
    fVar6 = -fVar2;
    if (0.0 <= fVar7) {
      fVar6 = fVar2;
    }
    sincosf(fVar6,&fStack_64,&local_68);
    fVar6 = (float)NEON_fmadd(uVar4,local_68,fStack_64 * -fVar5);
    fVar5 = (float)NEON_fmadd(uVar4,fStack_64,fVar5 * local_68);
    *(float *)param_1 = fVar1 * fVar6;
    *(float *)(param_1 + 4) = fVar1 * fVar5;
  }
  return;
}


