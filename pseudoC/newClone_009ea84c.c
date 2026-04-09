// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009ea84c
// Size: 84 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementTerrainSlopeMask::newClone() */

undefined8 * ProceduralPlacementTerrainSlopeMask::newClone(void)

{
  ProceduralPlacementMask PVar1;
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xd8);
                    /* try { // try from 009ea868 to 009ea86f has its CatchHandler @ 009ea8a0 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  PVar1 = in_x0[0xd0];
  this[0x19] = *(undefined8 *)(in_x0 + 200);
  *(ProceduralPlacementMask *)(this + 0x1a) = PVar1;
  *this = &PTR__ProceduralPlacementTerrainSlopeMask_00fe2e28;
  return this;
}


