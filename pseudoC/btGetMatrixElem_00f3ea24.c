// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btGetMatrixElem
// Entry Point: 00f3ea24
// Size: 44 bytes
// Signature: undefined __cdecl btGetMatrixElem(btMatrix3x3 * param_1, int param_2)


/* btGetMatrixElem(btMatrix3x3 const&, int) */

undefined4 btGetMatrixElem(btMatrix3x3 *param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (long)(param_2 / 3) * 4 + (long)(param_2 % 3) * 0x10);
}


