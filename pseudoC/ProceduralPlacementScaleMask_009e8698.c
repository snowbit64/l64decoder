// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementScaleMask
// Entry Point: 009e8698
// Size: 60 bytes
// Signature: undefined __thiscall ~ProceduralPlacementScaleMask(ProceduralPlacementScaleMask * this)


/* ProceduralPlacementScaleMask::~ProceduralPlacementScaleMask() */

void __thiscall
ProceduralPlacementScaleMask::~ProceduralPlacementScaleMask(ProceduralPlacementScaleMask *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementScaleMask_00fe2b28;
  if (*(void **)(this + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd0));
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


