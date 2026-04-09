// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillVertexBuffer
// Entry Point: 008c7740
// Size: 136 bytes
// Signature: undefined __cdecl fillVertexBuffer(IndexedTriangleSet * param_1, uchar * param_2, uint param_3, bool param_4, float * param_5, float param_6, uint param_7)


/* IndexedTriangleSetGeometryUtil::fillVertexBuffer(IndexedTriangleSet*, unsigned char*, unsigned
   int, bool, float const*, float, unsigned int) */

void IndexedTriangleSetGeometryUtil::fillVertexBuffer
               (IndexedTriangleSet *param_1,uchar *param_2,uint param_3,bool param_4,float *param_5,
               float param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)TriangleSet::getPositions();
  pfVar2 = (float *)TriangleSet::getNormals();
  fillVertexBuffer(param_1,pfVar1,pfVar2,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


