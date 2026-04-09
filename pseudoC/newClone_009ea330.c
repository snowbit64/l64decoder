// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009ea330
// Size: 84 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementTerrainHeightMapMask::newClone() */

undefined8 * ProceduralPlacementTerrainHeightMapMask::newClone(void)

{
  ProceduralPlacementMask PVar1;
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xd8);
                    /* try { // try from 009ea34c to 009ea353 has its CatchHandler @ 009ea384 */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  PVar1 = in_x0[0xd0];
  this[0x19] = *(undefined8 *)(in_x0 + 200);
  *(ProceduralPlacementMask *)(this + 0x1a) = PVar1;
  *this = &PTR__ProceduralPlacementTerrainHeightMapMask_00fe2d68;
  return this;
}


