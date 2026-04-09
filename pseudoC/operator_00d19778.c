// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00d19778
// Size: 168 bytes
// Signature: undefined __thiscall operator()(NewLastSmallPrimeSquared * this)


/* CryptoPP::NewLastSmallPrimeSquared::TEMPNAMEPLACEHOLDERVALUE() const */

void * __thiscall CryptoPP::NewLastSmallPrimeSquared::operator()(NewLastSmallPrimeSquared *this)

{
  long lVar1;
  void *pvVar2;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x30);
                    /* try { // try from 00d197a0 to 00d197ab has its CatchHandler @ 00d19834 */
  Integer::Integer((Integer *)local_58,0x7fcf);
                    /* try { // try from 00d197ac to 00d197bb has its CatchHandler @ 00d19824 */
  Integer::Times((Integer *)local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d197f4 to 00d197f7 has its CatchHandler @ 00d19820 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


