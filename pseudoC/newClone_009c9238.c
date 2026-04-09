// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009c9238
// Size: 68 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementClampedMask::newClone() */

undefined8 * ProceduralPlacementClampedMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xd0);
                    /* try { // try from 009c9254 to 009c925b has its CatchHandler @ 009c927c */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  *this = &PTR__ProceduralPlacementClampedMask_00fe1f28;
  return this;
}


