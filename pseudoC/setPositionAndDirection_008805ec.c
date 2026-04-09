// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPositionAndDirection
// Entry Point: 008805ec
// Size: 84 bytes
// Signature: undefined __thiscall setPositionAndDirection(AnimalSteering * this, Vector3 * param_1, Vector3 * param_2)


/* AnimalSteering::setPositionAndDirection(Vector3 const&, Vector3 const&) */

void __thiscall
AnimalSteering::setPositionAndDirection(AnimalSteering *this,Vector3 *param_1,Vector3 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = uVar2;
  fVar1 = *(float *)(param_2 + 8);
  fVar3 = *(float *)param_2;
  fVar5 = (float)NEON_fmadd(fVar3,fVar3,fVar1 * fVar1);
  fVar4 = 1.0;
  if (1e-06 < fVar5) {
    fVar4 = 1.0 / SQRT(fVar5);
  }
  *(float *)(this + 0xc) = fVar3 * fVar4;
  *(float *)(this + 0x10) = fVar1 * fVar4;
  return;
}


