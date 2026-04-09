// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Plus
// Entry Point: 00cfd7b4
// Size: 204 bytes
// Signature: undefined __cdecl Plus(Integer * param_1)


/* CryptoPP::Integer::Plus(CryptoPP::Integer const&) const */

void CryptoPP::Integer::Plus(Integer *param_1)

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
    if (*(int *)(in_x1 + 0x28) != 1) {
      PositiveSubtract(in_x8,in_x1,param_1);
      return;
    }
                    /* try { // try from 00cfd804 to 00cfd86f has its CatchHandler @ 00cfd880 */
    PositiveAdd(in_x8,param_1,in_x1);
    *(undefined4 *)(in_x8 + 0x28) = 1;
  }
  else {
    if (*(int *)(in_x1 + 0x28) == 1) {
      PositiveSubtract(in_x8,param_1,in_x1);
      return;
    }
    PositiveAdd(in_x8,param_1,in_x1);
  }
  return;
}


