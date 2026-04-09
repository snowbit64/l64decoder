// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReleaseHull
// Entry Point: 00f9e42c
// Size: 108 bytes
// Signature: undefined __cdecl ReleaseHull(PHullResult * param_1)


/* ReleaseHull(PHullResult&) */

void ReleaseHull(PHullResult *param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if ((*(long *)(param_1 + 0x28) != 0) && (param_1[0x30] != (PHullResult)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    param_1[0x30] = (PHullResult)0x1;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


