// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00884a10
// Size: 256 bytes
// Signature: undefined __thiscall update(SteeringTargetWander * this, float param_1)


/* SteeringTargetWander::update(float) */

void __thiscall SteeringTargetWander::update(SteeringTargetWander *this,float param_1)

{
  float fVar1;
  float fVar2;
  float local_8;
  float fStack_4;
  
  fVar2 = *(float *)(this + 0x30);
  *(float *)(this + 0x30) = fVar2 - param_1;
  if (0.0 <= fVar2 - param_1) {
    fVar2 = *(float *)(this + 0x2c);
  }
  else {
    *(undefined4 *)(this + 0x30) = 0x3dcccccd;
    fVar2 = (float)MathUtil::getRandom();
    fVar1 = -*(float *)(this + 0x34);
    if (0.5 <= fVar2) {
      fVar1 = *(float *)(this + 0x34);
    }
    fVar1 = *(float *)(this + 0x2c) + fVar1;
    fVar2 = fVar1 + -6.283185;
    if (fVar1 <= 6.283185) {
      fVar2 = fVar1;
    }
    *(float *)(this + 0x2c) = fVar2;
    if (fVar2 < 0.0) {
      fVar2 = fVar2 + 6.283185;
      *(float *)(this + 0x2c) = fVar2;
    }
  }
  sincosf(fVar2,&fStack_4,&local_8);
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x20);
  fVar2 = (float)*(undefined8 *)(this + 0x20);
  *(ulong *)(this + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) +
                fVar1 * *(float *)(this + 0x3c) +
                (local_8 * fVar1 + fStack_4 * fVar2) * *(float *)(this + 0x38),
                (float)*(undefined8 *)(this + 0x18) + fVar2 * *(float *)(this + 0x3c) +
                (fStack_4 * -fVar1 + local_8 * fVar2) * *(float *)(this + 0x38));
  return;
}


