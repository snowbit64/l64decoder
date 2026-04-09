// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTargetValue
// Entry Point: 008996f8
// Size: 60 bytes
// Signature: undefined __thiscall setTargetValue(PedestrianTransitionValue * this, float param_1, float param_2, float param_3)


/* PedestrianTransitionValue::setTargetValue(float, float, float) */

void __thiscall
PedestrianTransitionValue::setTargetValue
          (PedestrianTransitionValue *this,float param_1,float param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(this + 8);
  if (this[0x18] != (PedestrianTransitionValue)0x0) {
    puVar1 = (undefined4 *)(this + 4);
  }
  uVar2 = *puVar1;
  *(float *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x18] = (PedestrianTransitionValue)0x1;
  *(float *)(this + 0x10) = param_2;
  *(undefined4 *)this = uVar2;
  *(undefined4 *)(this + 4) = uVar2;
  *(float *)(this + 0x14) = param_3;
  return;
}


