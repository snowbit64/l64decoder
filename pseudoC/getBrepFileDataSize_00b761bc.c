// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBrepFileDataSize
// Entry Point: 00b761bc
// Size: 40 bytes
// Signature: undefined __cdecl getBrepFileDataSize(BrepFileHeader * param_1)


/* BrepUtil::getBrepFileDataSize(BrepUtil::BrepFileHeader const&) */

int BrepUtil::getBrepFileDataSize(BrepFileHeader *param_1)

{
  return (uint)*(ushort *)param_1 * 0xc + (uint)*(ushort *)(param_1 + 2) * 0x14 +
         *(int *)(param_1 + 4) * 0x12;
}


