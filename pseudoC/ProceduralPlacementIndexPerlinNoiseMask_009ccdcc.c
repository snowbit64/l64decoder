// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementIndexPerlinNoiseMask
// Entry Point: 009ccdcc
// Size: 80 bytes
// Signature: undefined __thiscall ~ProceduralPlacementIndexPerlinNoiseMask(ProceduralPlacementIndexPerlinNoiseMask * this)


/* ProceduralPlacementIndexPerlinNoiseMask::~ProceduralPlacementIndexPerlinNoiseMask() */

void __thiscall
ProceduralPlacementIndexPerlinNoiseMask::~ProceduralPlacementIndexPerlinNoiseMask
          (ProceduralPlacementIndexPerlinNoiseMask *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementIndexPerlinNoiseMask_00fe2168;
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd8));
  }
  if (*(void **)(this + 0xe0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe0));
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


