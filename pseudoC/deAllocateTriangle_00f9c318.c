// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deAllocateTriangle
// Entry Point: 00f9c318
// Size: 48 bytes
// Signature: undefined __thiscall deAllocateTriangle(HullLibrary * this, btHullTriangle * param_1)


/* HullLibrary::deAllocateTriangle(btHullTriangle*) */

void __thiscall HullLibrary::deAllocateTriangle(HullLibrary *this,btHullTriangle *param_1)

{
  *(undefined8 *)(*(long *)(this + 0x10) + (long)*(int *)(param_1 + 0x18) * 8) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f9c344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(param_1);
  return;
}


