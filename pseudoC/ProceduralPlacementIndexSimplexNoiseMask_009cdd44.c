// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementIndexSimplexNoiseMask
// Entry Point: 009cdd44
// Size: 60 bytes
// Signature: undefined __thiscall ~ProceduralPlacementIndexSimplexNoiseMask(ProceduralPlacementIndexSimplexNoiseMask * this)


/* ProceduralPlacementIndexSimplexNoiseMask::~ProceduralPlacementIndexSimplexNoiseMask() */

void __thiscall
ProceduralPlacementIndexSimplexNoiseMask::~ProceduralPlacementIndexSimplexNoiseMask
          (ProceduralPlacementIndexSimplexNoiseMask *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementIndexSimplexNoiseMask_00fe2228;
  if (*(void **)(this + 0x2d0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2d0));
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


