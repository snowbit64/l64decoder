// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009da7f8
// Size: 52 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementPerlinNoiseMask::newClone() */

ProceduralPlacementPerlinNoiseMask * ProceduralPlacementPerlinNoiseMask::newClone(void)

{
  ProceduralPlacementPerlinNoiseMask *in_x0;
  ProceduralPlacementPerlinNoiseMask *this;
  
  this = (ProceduralPlacementPerlinNoiseMask *)operator_new(0xe0);
                    /* try { // try from 009da814 to 009da81b has its CatchHandler @ 009da82c */
  ProceduralPlacementPerlinNoiseMask(this,in_x0);
  return this;
}


