// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009e26b8
// Size: 76 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRemapMask::newClone() */

undefined8 * ProceduralPlacementRemapMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xe0);
                    /* try { // try from 009e26d4 to 009e26db has its CatchHandler @ 009e2704 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  this[0x1a] = 0;
  this[0x1b] = 0;
  this[0x19] = 0;
  *this = &PTR__ProceduralPlacementRemapMask_00fe2910;
  return this;
}


