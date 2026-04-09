// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0089a4ac
// Size: 12 bytes
// Signature: undefined __thiscall init(PedestrianSpawnGrid * this, float param_1, float param_2)


/* PedestrianSpawnGrid::init(float, float) */

void __thiscall PedestrianSpawnGrid::init(PedestrianSpawnGrid *this,float param_1,float param_2)

{
  *(float *)(this + 0x1c) = param_1;
  *(float *)(this + 0x20) = param_2;
  return;
}


