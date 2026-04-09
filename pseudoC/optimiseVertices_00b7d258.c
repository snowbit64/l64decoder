// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimiseVertices
// Entry Point: 00b7d258
// Size: 136 bytes
// Signature: undefined __cdecl optimiseVertices(uint param_1, uint param_2, uint param_3, ushort * param_4, uint * param_5)


/* GeometryUtil::optimiseVertices(unsigned int, unsigned int, unsigned int, unsigned short const*,
   unsigned int*) */

void GeometryUtil::optimiseVertices
               (uint param_1,uint param_2,uint param_3,ushort *param_4,uint *param_5)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_3 != 0) {
    memset(param_5,0xff,(ulong)param_3 << 2);
  }
  uVar1 = (ulong)(param_1 * 3);
  if (param_1 * 3 != 0) {
    uVar2 = 0;
    do {
      if (param_5[*param_4 - param_2] == 0xffffffff) {
        param_5[*param_4 - param_2] = uVar2;
        uVar2 = uVar2 + 1;
      }
      uVar1 = uVar1 - 1;
      param_4 = param_4 + 1;
    } while (uVar1 != 0);
  }
  return;
}


