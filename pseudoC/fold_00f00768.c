// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fold
// Entry Point: 00f00768
// Size: 72 bytes
// Signature: undefined __cdecl fold(Cost * param_1, Cost * param_2)


/* Luau::Compile::Cost::fold(Luau::Compile::Cost const&, Luau::Compile::Cost const&) */

ulong Luau::Compile::Cost::fold(Cost *param_1,Cost *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(long *)param_2 + *(long *)param_1 & 0x8080808080808080;
  uVar1 = 0;
  if ((*(ulong *)(param_2 + 8) & *(ulong *)(param_1 + 8)) != 0xffffffffffffffff) {
    uVar1 = *(ulong *)(param_2 + 8) & *(ulong *)(param_1 + 8) & 0x101010101010101 | 1;
  }
  uVar1 = uVar1 + (uVar2 - (uVar2 >> 7) | *(long *)param_2 + *(long *)param_1 & 0x7f7f7f7f7f7f7f7fU)
  ;
  uVar2 = uVar1 & 0x8080808080808080;
  return uVar2 - (uVar2 >> 7) | uVar1 & 0x7f7f7f7f7f7f7f7f;
}


