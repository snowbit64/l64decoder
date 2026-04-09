// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillVertexDeclarationDesc
// Entry Point: 008c73b0
// Size: 64 bytes
// Signature: undefined __cdecl fillVertexDeclarationDesc(VertexDeclarationDesc * param_1)


/* SplineGeometry::fillVertexDeclarationDesc(VertexDeclarationDesc&) */

void SplineGeometry::fillVertexDeclarationDesc(VertexDeclarationDesc *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  *(undefined4 *)(param_1 + 0x18) = 0xd;
  *(undefined4 *)(param_1 + 0x2c) = 8;
  *(undefined4 *)(param_1 + 0x40) = 0xf;
  *(uint *)(param_1 + 0x6c) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = 0xa0000000a;
  *(undefined4 *)(param_1 + (ulong)uVar1 * 4 + 4) = 1;
  *(uint *)param_1 = uVar1 + 1;
  return;
}


