// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementThresholdMask
// Entry Point: 009eb35c
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementThresholdMask(ProceduralPlacementThresholdMask * this)


/* ProceduralPlacementThresholdMask::~ProceduralPlacementThresholdMask() */

void __thiscall
ProceduralPlacementThresholdMask::~ProceduralPlacementThresholdMask
          (ProceduralPlacementThresholdMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


