// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00885e70
// Size: 12 bytes
// Signature: undefined __thiscall reset(SteeringTargetEntity * this, TransformGroup * param_1, float param_2)


/* SteeringTargetEntity::reset(TransformGroup*, float) */

void __thiscall
SteeringTargetEntity::reset(SteeringTargetEntity *this,TransformGroup *param_1,float param_2)

{
  *(TransformGroup **)(this + 0x30) = param_1;
  *(float *)(this + 0x38) = param_2;
  return;
}


