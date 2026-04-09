// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertex
// Entry Point: 00f57a94
// Size: 176 bytes
// Signature: undefined __thiscall localGetSupportingVertex(btBoxShape * this, btVector3 * param_1)


/* btBoxShape::localGetSupportingVertex(btVector3 const&) const */

float __thiscall btBoxShape::localGetSupportingVertex(btBoxShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x2c);
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  (**(code **)(*(long *)this + 0x60))(this);
  (**(code **)(*(long *)this + 0x60))(this);
  fVar2 = fVar1 + fVar3;
  if (*(float *)param_1 < 0.0) {
    fVar2 = -(fVar1 + fVar3);
  }
  return fVar2;
}


