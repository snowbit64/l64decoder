// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParentShape
// Entry Point: 008d6a7c
// Size: 8 bytes
// Signature: undefined __thiscall setParentShape(ParticleSystem * this, GsShape * param_1)


/* ParticleSystem::setParentShape(GsShape*) */

void __thiscall ParticleSystem::setParentShape(ParticleSystem *this,GsShape *param_1)

{
  *(GsShape **)(this + 0xe0) = param_1;
  return;
}


