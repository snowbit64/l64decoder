// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Minus
// Entry Point: 00cfd894
// Size: 216 bytes
// Signature: undefined __cdecl Minus(Integer * param_1)


/* CryptoPP::Integer::Minus(CryptoPP::Integer const&) const */

void CryptoPP::Integer::Minus(Integer *param_1)

{
  ulong uVar1;
  Integer *in_x1;
  Integer *in_x8;
  
  uVar1 = *(ulong *)(in_x1 + 0x18);
  if (*(ulong *)(in_x1 + 0x18) <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  Integer(in_x8,0,uVar1);
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(int *)(in_x1 + 0x28) == 1) {
      PositiveSubtract(in_x8,in_x1,param_1);
      return;
    }
    PositiveAdd(in_x8,param_1,in_x1);
    *(undefined4 *)(in_x8 + 0x28) = 1;
    return;
  }
  if (*(int *)(in_x1 + 0x28) == 1) {
                    /* try { // try from 00cfd908 to 00cfd937 has its CatchHandler @ 00cfd96c */
    PositiveAdd(in_x8,param_1,in_x1);
    return;
  }
  PositiveSubtract(in_x8,param_1,in_x1);
  return;
}


