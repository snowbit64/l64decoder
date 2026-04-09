// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator>>
// Entry Point: 00cffbf4
// Size: 176 bytes
// Signature: undefined __thiscall operator>>(Integer * this, ulong param_1)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE(unsigned long) const */

void __thiscall CryptoPP::Integer::operator>>(Integer *this,ulong param_1)

{
  long lVar1;
  Integer *in_x8;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Integer((Integer *)local_68,this);
                    /* try { // try from 00cffc28 to 00cffc3f has its CatchHandler @ 00cffca8 */
  operator>>=((Integer *)local_68,param_1);
  Integer(in_x8,(Integer *)local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cffc78 to 00cffc7b has its CatchHandler @ 00cffca4 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


