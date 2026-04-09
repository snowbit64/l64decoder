// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDirtyRegion
// Entry Point: 009d8f68
// Size: 12 bytes
// Signature: undefined __thiscall setDirtyRegion(ProceduralPlacementMask * this, DirtyRegion * param_1)


/* ProceduralPlacementMask::setDirtyRegion(ProceduralPlacementMask::DirtyRegion const&) */

void __thiscall
ProceduralPlacementMask::setDirtyRegion(ProceduralPlacementMask *this,DirtyRegion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xa0) = uVar1;
  return;
}


