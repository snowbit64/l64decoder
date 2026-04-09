// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009de704
// Size: 100 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementRaycastObjectsMask::newClone() */

undefined8 * ProceduralPlacementRaycastObjectsMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0x120);
                    /* try { // try from 009de720 to 009de727 has its CatchHandler @ 009de768 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  this[0x1a] = 0;
  this[0x1b] = 0;
  this[0x1e] = 0;
  this[0x1d] = this + 0x1e;
  this[0x1f] = 0;
  this[0x20] = this + 0x21;
  this[0x19] = 0;
  this[0x21] = 0;
  this[0x22] = 0;
  *this = &PTR__ProceduralPlacementRaycastObjectsMask_00fe2740;
  return this;
}


