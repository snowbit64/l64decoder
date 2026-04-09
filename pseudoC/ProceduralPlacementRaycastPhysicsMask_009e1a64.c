// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementRaycastPhysicsMask
// Entry Point: 009e1a64
// Size: 64 bytes
// Signature: undefined __thiscall ~ProceduralPlacementRaycastPhysicsMask(ProceduralPlacementRaycastPhysicsMask * this)


/* ProceduralPlacementRaycastPhysicsMask::~ProceduralPlacementRaycastPhysicsMask() */

void __thiscall
ProceduralPlacementRaycastPhysicsMask::~ProceduralPlacementRaycastPhysicsMask
          (ProceduralPlacementRaycastPhysicsMask *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 200);
  *(undefined ***)this = &PTR__ProceduralPlacementRaycastPhysicsMask_00fe2800;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


