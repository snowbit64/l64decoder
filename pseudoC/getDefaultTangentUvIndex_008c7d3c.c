// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDefaultTangentUvIndex
// Entry Point: 008c7d3c
// Size: 60 bytes
// Signature: undefined __cdecl getDefaultTangentUvIndex(uint param_1, int * param_2)


/* IndexedTriangleSetGeometryUtil::getDefaultTangentUvIndex(unsigned int, int&) */

void IndexedTriangleSetGeometryUtil::getDefaultTangentUvIndex(uint param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = -1;
  if ((param_1 >> 1 & 1) == 0) {
    if ((param_1 >> 2 & 1) == 0) {
      if ((param_1 >> 3 & 1) == 0) {
        if ((param_1 >> 4 & 1) == 0) {
          return;
        }
        iVar1 = 3;
      }
      else {
        iVar1 = 2;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  *param_2 = iVar1;
  return;
}


