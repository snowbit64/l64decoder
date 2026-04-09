// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getScatteringDirection
// Entry Point: 00a549ac
// Size: 80 bytes
// Signature: undefined __thiscall getScatteringDirection(LightSource * this, Vector3 * param_1)


/* LightSource::getScatteringDirection(Vector3&) const */

bool __thiscall LightSource::getScatteringDirection(LightSource *this,Vector3 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(this + 0x17c);
  fVar3 = *(float *)(this + 0x180);
  fVar4 = *(float *)(this + 0x184);
  if ((fVar2 != 0.0 || fVar3 != 0.0) || fVar4 != 0.0) {
    uVar1 = *(undefined8 *)(this + 0x17c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x184);
    *(undefined8 *)param_1 = uVar1;
  }
  return (fVar2 != 0.0 || fVar3 != 0.0) || fVar4 != 0.0;
}


