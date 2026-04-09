// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009eb380
// Size: 68 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementThresholdMask::newClone() */

undefined8 * ProceduralPlacementThresholdMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xd0);
                    /* try { // try from 009eb39c to 009eb3a3 has its CatchHandler @ 009eb3c4 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  *this = &PTR__ProceduralPlacementThresholdMask_00fe2ee8;
  return this;
}


