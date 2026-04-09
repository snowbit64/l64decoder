// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanUp
// Entry Point: 00eadbac
// Size: 60 bytes
// Signature: undefined __thiscall CleanUp(ICHull * this, uint * param_1)


/* VHACD::ICHull::CleanUp(unsigned int&) */

undefined8 __thiscall VHACD::ICHull::CleanUp(ICHull *this,uint *param_1)

{
  CleanEdges();
  CleanTriangles();
  CleanVertices(this,param_1);
  return 1;
}


