// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertIn
// Entry Point: 00d032e0
// Size: 180 bytes
// Signature: undefined __thiscall ConvertIn(MontgomeryRepresentation * this, Integer * param_1)


/* CryptoPP::MontgomeryRepresentation::ConvertIn(CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::MontgomeryRepresentation::ConvertIn(MontgomeryRepresentation *this,Integer *param_1)

{
  long lVar1;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Integer::operator<<(param_1,*(long *)(this + 0x30) << 5);
                    /* try { // try from 00d03320 to 00d0332f has its CatchHandler @ 00d03398 */
  Integer::Modulo((Integer *)local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d03368 to 00d0336b has its CatchHandler @ 00d03394 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


