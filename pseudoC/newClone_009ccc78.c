// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009ccc78
// Size: 52 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementIndexPerlinNoiseMask::newClone() */

ProceduralPlacementIndexPerlinNoiseMask * ProceduralPlacementIndexPerlinNoiseMask::newClone(void)

{
  ProceduralPlacementIndexPerlinNoiseMask *in_x0;
  ProceduralPlacementIndexPerlinNoiseMask *this;
  
  this = (ProceduralPlacementIndexPerlinNoiseMask *)operator_new(0xe8);
                    /* try { // try from 009ccc94 to 009ccc9b has its CatchHandler @ 009cccac */
  ProceduralPlacementIndexPerlinNoiseMask(this,in_x0);
  return this;
}


