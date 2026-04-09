// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008849e0
// Size: 48 bytes
// Signature: undefined __thiscall reset(SteeringTargetWander * this, float param_1, float param_2, float param_3)


/* SteeringTargetWander::reset(float, float, float) */

void __thiscall
SteeringTargetWander::reset(SteeringTargetWander *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  *(float *)(this + 0x38) = param_2;
  *(float *)(this + 0x3c) = param_3;
  uVar1 = MathUtil::degreeToRadian(param_1);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = uVar1;
  return;
}


