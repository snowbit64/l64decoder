// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Multiply
// Entry Point: 00d047d0
// Size: 240 bytes
// Signature: undefined __cdecl Multiply(Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Multiply(CryptoPP::Integer const&, CryptoPP::Integer const&) const
    */

Integer * CryptoPP::ModularArithmetic::Multiply(Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Integer::Times(param_2);
                    /* try { // try from 00d04808 to 00d04813 has its CatchHandler @ 00d048d8 */
  Integer::Modulo((Integer *)local_98);
                    /* try { // try from 00d04818 to 00d04823 has its CatchHandler @ 00d048c8 */
  Integer::operator=(param_1 + 0x78,(Integer *)local_68);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d0485c to 00d0485f has its CatchHandler @ 00d048c4 */
  UnalignedDeallocate(local_48);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d04890 to 00d04893 has its CatchHandler @ 00d048c0 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 + 0x78;
}


