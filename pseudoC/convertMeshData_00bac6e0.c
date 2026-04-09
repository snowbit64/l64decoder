// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertMeshData
// Entry Point: 00bac6e0
// Size: 164 bytes
// Signature: undefined __cdecl convertMeshData(IndexedTriangleSet * param_1, float * * param_2, uint * param_3)


/* Bt2PhysicsCookingUtil::convertMeshData(IndexedTriangleSet*, float*&, unsigned int&) */

IndexedTriangleSet *
Bt2PhysicsCookingUtil::convertMeshData(IndexedTriangleSet *param_1,float **param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  void *__src;
  ulong uVar4;
  
  if (param_1 != (IndexedTriangleSet *)0x0) {
    uVar1 = TriangleSet::getNumVertices();
    if (uVar1 < 3) {
      param_1 = (IndexedTriangleSet *)0x0;
    }
    else {
      param_1 = (IndexedTriangleSet *)TriangleSet::getPositions();
      if (param_1 != (IndexedTriangleSet *)0x0) {
        iVar2 = TriangleSet::getNumVertices();
        pfVar3 = (float *)operator_new__((ulong)(uint)(iVar2 * 3) << 2);
        *param_2 = pfVar3;
        uVar1 = TriangleSet::getNumVertices();
        *param_3 = uVar1;
        __src = (void *)TriangleSet::getPositions();
        pfVar3 = *param_2;
        uVar4 = TriangleSet::getNumVertices();
        memcpy(pfVar3,__src,(uVar4 & 0xffffffff) * 0xc);
        param_1 = (IndexedTriangleSet *)0x1;
      }
    }
  }
  return param_1;
}


