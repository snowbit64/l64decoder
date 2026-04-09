// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsMeshInterface
// Entry Point: 0098f9c0
// Size: 84 bytes
// Signature: undefined __thiscall ~Bt2PhysicsMeshInterface(Bt2PhysicsMeshInterface * this)


/* Bt2PhysicsMeshInterface::~Bt2PhysicsMeshInterface() */

void __thiscall Bt2PhysicsMeshInterface::~Bt2PhysicsMeshInterface(Bt2PhysicsMeshInterface *this)

{
  *(undefined ***)this = &PTR__Bt2PhysicsMeshInterface_00fe0bd8;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  btStridingMeshInterface::~btStridingMeshInterface((btStridingMeshInterface *)this);
                    /* try { // try from 0098fa00 to 0098fa07 has its CatchHandler @ 0098fa14 */
  btAlignedFreeInternal(this);
  return;
}


