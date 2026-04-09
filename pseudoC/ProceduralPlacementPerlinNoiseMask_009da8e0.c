// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementPerlinNoiseMask
// Entry Point: 009da8e0
// Size: 60 bytes
// Signature: undefined __thiscall ~ProceduralPlacementPerlinNoiseMask(ProceduralPlacementPerlinNoiseMask * this)


/* ProceduralPlacementPerlinNoiseMask::~ProceduralPlacementPerlinNoiseMask() */

void __thiscall
ProceduralPlacementPerlinNoiseMask::~ProceduralPlacementPerlinNoiseMask
          (ProceduralPlacementPerlinNoiseMask *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementPerlinNoiseMask_00fe2570;
  if (*(void **)(this + 0xd8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xd8));
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


