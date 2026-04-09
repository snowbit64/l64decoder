// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexDeclarationAttributes
// Entry Point: 008c7680
// Size: 96 bytes
// Signature: undefined __cdecl getVertexDeclarationAttributes(uint param_1)


/* IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(unsigned int) */

uint IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x13;
  if ((param_1 & 0x140) != 0x40) {
    uVar2 = 1;
  }
  uVar1 = uVar2 | 4;
  if ((param_1 & 0x140) != 0x140 && (param_1 & 0x201) == 0) {
    uVar1 = uVar2;
  }
  return (param_1 >> 7 & 1) << 9 |
         param_1 >> 2 & 8 | (param_1 >> 1 & 1) << 5 | (param_1 >> 2 & 1) << 6 |
         (param_1 >> 3 & 1) << 7 | (param_1 >> 4 & 1) << 8 | uVar1;
}


