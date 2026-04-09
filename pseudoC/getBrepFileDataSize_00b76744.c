// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBrepFileDataSize
// Entry Point: 00b76744
// Size: 92 bytes
// Signature: undefined __cdecl getBrepFileDataSize(Brep * param_1)


/* BrepUtil::getBrepFileDataSize(Brep const*) */

int BrepUtil::getBrepFileDataSize(Brep *param_1)

{
  return ((uint)(*(int *)(param_1 + 0x2ef8) - *(int *)(param_1 + 0x2ef0)) >> 4 & 0xffff) * 0xc +
         (((uint)(*(int *)(param_1 + 0x2fa0) - *(int *)(param_1 + 0x2f98)) >> 3) * 0xaaab & 0xffff)
         * 0x14 + (int)((ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 5) *
                  0x12;
}


