// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00884b1c
// Size: 56 bytes
// Signature: undefined __thiscall reset(SteeringTargetEntityAvoid * this, TransformGroup * param_1, float param_2, float param_3)


/* SteeringTargetEntityAvoid::reset(TransformGroup*, float, float) */

void __thiscall
SteeringTargetEntityAvoid::reset
          (SteeringTargetEntityAvoid *this,TransformGroup *param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  *(float *)(this + 0x3c) = param_2;
  *(TransformGroup **)(this + 0x30) = param_1;
  fVar1 = (float)MathUtil::getRandomMinMax(-param_3,param_3);
  uVar2 = MathUtil::degreeToRadian(fVar1);
  *(undefined4 *)(this + 0x38) = uVar2;
  return;
}


