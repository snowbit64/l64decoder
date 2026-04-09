// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00899750
// Size: 92 bytes
// Signature: undefined __thiscall update(PedestrianTransitionValue * this, float param_1)


/* PedestrianTransitionValue::update(float) */

void __thiscall PedestrianTransitionValue::update(PedestrianTransitionValue *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (this[0x18] != (PedestrianTransitionValue)0x0) {
    if (0.0 < *(float *)(this + 0x14)) {
      *(float *)(this + 0x14) = *(float *)(this + 0x14) - param_1;
      return;
    }
    fVar1 = *(float *)(this + 0xc) + param_1;
    *(float *)(this + 0xc) = fVar1;
    if (fVar1 <= *(float *)(this + 0x10)) {
      uVar2 = NEON_fmadd(*(float *)(this + 8) - *(float *)this,fVar1 / *(float *)(this + 0x10),
                         *(float *)this);
    }
    else {
      uVar2 = *(undefined4 *)(this + 8);
      this[0x18] = (PedestrianTransitionValue)0x0;
    }
    *(undefined4 *)(this + 4) = uVar2;
  }
  return;
}


