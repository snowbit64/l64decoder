// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementSimplexNoiseMask
// Entry Point: 009e9fb4
// Size: 60 bytes
// Signature: undefined __thiscall ~ProceduralPlacementSimplexNoiseMask(ProceduralPlacementSimplexNoiseMask * this)


/* ProceduralPlacementSimplexNoiseMask::~ProceduralPlacementSimplexNoiseMask() */

void __thiscall
ProceduralPlacementSimplexNoiseMask::~ProceduralPlacementSimplexNoiseMask
          (ProceduralPlacementSimplexNoiseMask *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementSimplexNoiseMask_00fe2ca8;
  if (*(void **)(this + 0x2c8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2c8));
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


