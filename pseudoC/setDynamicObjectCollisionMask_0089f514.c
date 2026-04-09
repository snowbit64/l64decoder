// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDynamicObjectCollisionMask
// Entry Point: 0089f514
// Size: 8 bytes
// Signature: undefined __thiscall setDynamicObjectCollisionMask(TerrainDeformation * this, uint param_1)


/* TerrainDeformation::setDynamicObjectCollisionMask(unsigned int) */

void __thiscall
TerrainDeformation::setDynamicObjectCollisionMask(TerrainDeformation *this,uint param_1)

{
  *(uint *)(this + 0x54) = param_1;
  return;
}


