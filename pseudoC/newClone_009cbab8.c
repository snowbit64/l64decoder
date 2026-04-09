// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009cbab8
// Size: 52 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementIndexMask::newClone() */

ProceduralPlacementIndexMask * ProceduralPlacementIndexMask::newClone(void)

{
  ProceduralPlacementIndexMask *in_x0;
  ProceduralPlacementIndexMask *this;
  
  this = (ProceduralPlacementIndexMask *)operator_new(0xe8);
                    /* try { // try from 009cbad4 to 009cbadb has its CatchHandler @ 009cbaec */
  ProceduralPlacementIndexMask(this,in_x0);
  return this;
}


