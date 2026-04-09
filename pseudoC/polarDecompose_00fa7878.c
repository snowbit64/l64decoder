// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: polarDecompose
// Entry Point: 00fa7878
// Size: 140 bytes
// Signature: undefined __cdecl polarDecompose(btMatrix3x3 * param_1, btMatrix3x3 * param_2, btMatrix3x3 * param_3)


/* polarDecompose(btMatrix3x3 const&, btMatrix3x3&, btMatrix3x3&) */

void polarDecompose(btMatrix3x3 *param_1,btMatrix3x3 *param_2,btMatrix3x3 *param_3)

{
  int iVar1;
  
  if ((DAT_02125d60 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02125d60);
    if (iVar1 != 0) {
      DAT_02125d58 = 0x1038d1b717;
      __cxa_guard_release(&DAT_02125d60);
    }
  }
  btPolarDecomposition::decompose((btPolarDecomposition *)&DAT_02125d58,param_1,param_2,param_3);
  return;
}


