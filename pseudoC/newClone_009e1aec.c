// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009e1aec
// Size: 76 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRaycastPhysicsMask::newClone() */

undefined8 * ProceduralPlacementRaycastPhysicsMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xf8);
                    /* try { // try from 009e1b08 to 009e1b0f has its CatchHandler @ 009e1b38 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  this[0x1a] = 0;
  this[0x1b] = 0;
  this[0x19] = 0;
  *this = &PTR__ProceduralPlacementRaycastPhysicsMask_00fe2800;
  return this;
}


