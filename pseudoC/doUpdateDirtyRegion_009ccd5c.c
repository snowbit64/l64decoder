// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009ccd5c
// Size: 40 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementIndexPerlinNoiseMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void ProceduralPlacementIndexPerlinNoiseMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x90) - (long)puVar1 == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x009ccd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x80))(param_1,*puVar1,param_1 + 0xb0,puVar1[1]);
    return;
  }
  return;
}


