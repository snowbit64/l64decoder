// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009cbe38
// Size: 40 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementIndexMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion const&) */

void ProceduralPlacementIndexMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (*(long *)(param_1 + 0x90) - (long)puVar1 == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x009cbe58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x80))(param_1,*puVar1,param_1 + 0xb0,puVar1[1]);
    return;
  }
  ProceduralPlacementMask::doUpdateDirtyRegion(param_1);
  return;
}


