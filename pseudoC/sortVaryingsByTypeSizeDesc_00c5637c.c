// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortVaryingsByTypeSizeDesc
// Entry Point: 00c5637c
// Size: 56 bytes
// Signature: undefined __cdecl sortVaryingsByTypeSizeDesc(VaryingTemp * param_1, VaryingTemp * param_2)


/* StructFieldRemapping::sortVaryingsByTypeSizeDesc(StructFieldRemapping::VaryingTemp const&,
   StructFieldRemapping::VaryingTemp const&) */

bool StructFieldRemapping::sortVaryingsByTypeSizeDesc(VaryingTemp *param_1,VaryingTemp *param_2)

{
  if (*(int *)(param_2 + 8) < *(int *)(param_1 + 8)) {
    return true;
  }
  if (*(int *)(param_1 + 8) < *(int *)(param_2 + 8)) {
    return false;
  }
  return *(uint *)(param_2 + 4) < *(uint *)(param_1 + 4);
}


