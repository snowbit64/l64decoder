// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FinishUnquantize
// Entry Point: 00a7dbc8
// Size: 44 bytes
// Signature: undefined __cdecl FinishUnquantize(int param_1, bool param_2)


/* BC6BC7Util::D3DX_BC6H::FinishUnquantize(int, bool) */

int BC6BC7Util::D3DX_BC6H::FinishUnquantize(int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 0x1f >> 5;
  if ((param_1 & 0x80000000U) != 0) {
    iVar1 = -(param_1 * -0x1f >> 5);
  }
  iVar2 = param_1 * 0x1f >> 6;
  if (param_2) {
    iVar2 = iVar1;
  }
  return iVar2;
}


