// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcTileLoc
// Entry Point: 00dd05bc
// Size: 56 bytes
// Signature: undefined __thiscall calcTileLoc(dtNavMesh * this, float * param_1, int * param_2, int * param_3)


/* dtNavMesh::calcTileLoc(float const*, int*, int*) const */

void __thiscall dtNavMesh::calcTileLoc(dtNavMesh *this,float *param_1,int *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(this + 0x24);
  fVar1 = param_1[2];
  fVar3 = *(float *)(this + 0x2c);
  *param_2 = (int)((*param_1 - *(float *)(this + 0x1c)) / *(float *)(this + 0x28));
  *param_3 = (int)((fVar1 - fVar2) / fVar3);
  return;
}


