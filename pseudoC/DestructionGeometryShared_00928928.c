// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DestructionGeometryShared
// Entry Point: 00928928
// Size: 268 bytes
// Signature: undefined __thiscall ~DestructionGeometryShared(DestructionGeometryShared * this)


/* DestructionGeometryShared::~DestructionGeometryShared() */

void __thiscall
DestructionGeometryShared::~DestructionGeometryShared(DestructionGeometryShared *this)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__DestructionGeometryShared_00fdffb0;
  *(undefined ***)(this + 0x10) = &PTR__DestructionGeometryShared_00fdffe8;
  free(*(void **)(this + 0x50));
  uVar2 = *(uint *)(this + 0x60);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x58) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(this + 0x60);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x58));
  }
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 8))();
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  if (*(long **)(this + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x70) + 8))();
  }
  Streamable::~Streamable((Streamable *)(this + 0x10));
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


