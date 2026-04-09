// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getContactBreakingThreshold
// Entry Point: 00f5efbc
// Size: 44 bytes
// Signature: undefined __thiscall getContactBreakingThreshold(btCollisionShape * this, float param_1)


/* btCollisionShape::getContactBreakingThreshold(float) const */

float __thiscall btCollisionShape::getContactBreakingThreshold(btCollisionShape *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x20))();
  return fVar1 * param_1;
}


