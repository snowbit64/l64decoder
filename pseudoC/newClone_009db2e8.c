// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009db2e8
// Size: 100 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementProjectObjectsMask::newClone() */

undefined8 * ProceduralPlacementProjectObjectsMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xf8);
                    /* try { // try from 009db304 to 009db30b has its CatchHandler @ 009db34c */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  this[0x1d] = 0;
  this[0x1c] = 0;
  this[0x1b] = this + 0x1c;
  *this = &PTR__ProceduralPlacementProjectObjectsMask_00fe2630;
  this[0x19] = &PTR__IRaycastReport_00fe26d8;
  this[0x1a] = 0;
  return this;
}


