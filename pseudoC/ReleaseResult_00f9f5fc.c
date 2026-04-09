// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ReleaseResult
// Entry Point: 00f9f5fc
// Size: 184 bytes
// Signature: undefined __thiscall ReleaseResult(HullLibrary * this, HullResult * param_1)


/* HullLibrary::ReleaseResult(HullResult&) */

undefined8 __thiscall HullLibrary::ReleaseResult(HullLibrary *this,HullResult *param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    if ((*(long *)(param_1 + 0x18) != 0) && (param_1[0x20] != (HullResult)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    param_1[0x20] = (HullResult)0x1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if ((*(long *)(param_1 + 0x40) != 0) && (param_1[0x48] != (HullResult)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    param_1[0x48] = (HullResult)0x1;
  }
  return 0;
}


