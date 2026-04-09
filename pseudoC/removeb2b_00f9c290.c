// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeb2b
// Entry Point: 00f9c290
// Size: 136 bytes
// Signature: undefined __thiscall removeb2b(HullLibrary * this, btHullTriangle * param_1, btHullTriangle * param_2)


/* HullLibrary::removeb2b(btHullTriangle*, btHullTriangle*) */

void __thiscall
HullLibrary::removeb2b(HullLibrary *this,btHullTriangle *param_1,btHullTriangle *param_2)

{
  b2bfix(this,param_1,param_2);
  *(undefined8 *)(*(long *)(this + 0x10) + (long)*(int *)(param_1 + 0x18) * 8) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
  (*(code *)PTR_FUN_01048e40)(param_1);
  *(undefined8 *)(*(long *)(this + 0x10) + (long)*(int *)(param_2 + 0x18) * 8) = 0;
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f9c314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(param_2);
  return;
}


