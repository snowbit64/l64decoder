// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009d82c4
// Size: 68 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementClearMask::newClone() */

undefined8 * ProceduralPlacementClearMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(200);
                    /* try { // try from 009d82e0 to 009d82e7 has its CatchHandler @ 009d8308 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  *this = &PTR__ProceduralPlacementClearMask_00fe23f8;
  return this;
}


