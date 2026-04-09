// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOldMeshSplitBrepFileDataSize
// Entry Point: 00b76890
// Size: 36 bytes
// Signature: undefined __cdecl getOldMeshSplitBrepFileDataSize(BrepFileHeader * param_1)


/* BrepUtil::getOldMeshSplitBrepFileDataSize(BrepUtil::BrepFileHeader const&) */

int BrepUtil::getOldMeshSplitBrepFileDataSize(BrepFileHeader *param_1)

{
  return (uint)*(ushort *)param_1 * 0xc + (uint)*(ushort *)(param_1 + 2) * 0x14 +
         *(int *)(param_1 + 4) * 0x10;
}


