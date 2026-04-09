// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTargetPositionBasedOnCollision
// Entry Point: 009bda18
// Size: 244 bytes
// Signature: undefined __thiscall updateTargetPositionBasedOnCollision(Bt2KinematicCharacterController * this, btVector3 * param_1, float param_2, float param_3)


/* Bt2KinematicCharacterController::updateTargetPositionBasedOnCollision(btVector3 const&, float,
   float) */

void __thiscall
Bt2KinematicCharacterController::updateTargetPositionBasedOnCollision
          (Bt2KinematicCharacterController *this,btVector3 *param_1,float param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *(undefined8 *)(this + 0x58);
  uVar4 = *(undefined8 *)(this + 0x6c);
  fVar7 = (float)uVar4 - (float)uVar2;
  fVar8 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
  fVar9 = *(float *)(this + 0x74) - *(float *)(this + 0x60);
  fVar1 = (float)NEON_fmadd(fVar9,fVar9,fVar8 * fVar8 + fVar7 * fVar7);
  fVar1 = SQRT(fVar1);
  if (1.192093e-07 < fVar1) {
    uVar2 = *(undefined8 *)param_1;
    fVar6 = *(float *)(param_1 + 8);
    *(undefined8 *)(this + 0x74) = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x6c) = *(undefined8 *)(this + 0x58);
    if (param_3 != 0.0) {
      fVar10 = 1.0 / fVar1;
      fVar1 = fVar1 * param_3;
      fVar5 = (float)((ulong)uVar2 >> 0x20);
      fVar3 = (float)uVar2;
      fVar11 = (float)NEON_fmadd(fVar9 * fVar10,fVar6,
                                 fVar8 * fVar10 * fVar5 + fVar3 * fVar7 * fVar10);
      fVar11 = fVar11 + fVar11;
      fVar7 = fVar7 * fVar10 - fVar3 * fVar11;
      fVar8 = fVar8 * fVar10 - fVar5 * fVar11;
      fVar9 = fVar9 * fVar10 - fVar6 * fVar11;
      fVar10 = (float)NEON_fmadd(fVar9,fVar9,fVar8 * fVar8 + fVar7 * fVar7);
      fVar10 = 1.0 / SQRT(fVar10);
      fVar11 = (float)NEON_fmadd(fVar9 * fVar10,fVar6,
                                 fVar5 * fVar8 * fVar10 + fVar3 * fVar7 * fVar10);
      *(ulong *)(this + 0x6c) =
           CONCAT44((fVar8 * fVar10 - fVar5 * fVar11) * fVar1 +
                    (float)((ulong)*(undefined8 *)(this + 0x6c) >> 0x20),
                    (fVar7 * fVar10 - fVar3 * fVar11) * fVar1 + (float)*(undefined8 *)(this + 0x6c))
      ;
      *(float *)(this + 0x74) = fVar1 * (fVar9 * fVar10 - fVar6 * fVar11) + *(float *)(this + 0x74);
    }
  }
  return;
}


