// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAvoidParameters
// Entry Point: 00881a78
// Size: 92 bytes
// Signature: undefined __thiscall setAvoidParameters(DeerBehaviorContext * this, TransformGroup * param_1, float param_2)


/* DeerBehaviorContext::setAvoidParameters(TransformGroup*, float) */

void __thiscall
DeerBehaviorContext::setAvoidParameters
          (DeerBehaviorContext *this,TransformGroup *param_1,float param_2)

{
  *(TransformGroup **)(this + 0x120) = param_1;
  *(float *)(this + 0x130) = param_2;
  if (*(DeerStateIdle **)(this + 0xf8) != (DeerStateIdle *)0x0) {
    DeerStateIdle::setPlayerData(*(DeerStateIdle **)(this + 0xf8),param_1,param_2);
  }
  if (*(SteeringTargetEntityAvoid **)(this + 0x110) != (SteeringTargetEntityAvoid *)0x0) {
    SteeringTargetEntityAvoid::reset
              (*(SteeringTargetEntityAvoid **)(this + 0x110),param_1,60.0,10.0);
    return;
  }
  return;
}


