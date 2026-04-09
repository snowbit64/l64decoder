// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBoundingVolume
// Entry Point: 008c501c
// Size: 56 bytes
// Signature: undefined __thiscall setBoundingVolume(Geometry * this, BoundingVolume * param_1)


/* Geometry::setBoundingVolume(BoundingVolume*) */

void __thiscall Geometry::setBoundingVolume(Geometry *this,BoundingVolume *param_1)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  *(BoundingVolume **)(this + 0x40) = param_1;
  return;
}


