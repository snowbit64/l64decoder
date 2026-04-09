// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009d9130
// Size: 52 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementMask::newClone() */

ProceduralPlacementMask * ProceduralPlacementMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  ProceduralPlacementMask *this;
  
  this = (ProceduralPlacementMask *)operator_new(200);
                    /* try { // try from 009d914c to 009d9153 has its CatchHandler @ 009d9164 */
  ProceduralPlacementMask(this,in_x0);
  return this;
}


