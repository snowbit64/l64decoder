// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillVertexDeclarationDesc
// Entry Point: 00a74e14
// Size: 64 bytes
// Signature: undefined __cdecl fillVertexDeclarationDesc(VertexDeclarationDesc * param_1)


/* TerrainLayerTransformGroup::fillVertexDeclarationDesc(VertexDeclarationDesc&) */

void TerrainLayerTransformGroup::fillVertexDeclarationDesc(VertexDeclarationDesc *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  *(undefined4 *)(param_1 + 0x18) = 6;
  *(undefined4 *)(param_1 + 0x20) = 10;
  *(undefined4 *)(param_1 + 0x2c) = 8;
  *(undefined4 *)(param_1 + 0x40) = 0xf;
  *(uint *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + (ulong)uVar1 * 4 + 4) = 1;
  *(uint *)param_1 = uVar1 + 1;
  return;
}


