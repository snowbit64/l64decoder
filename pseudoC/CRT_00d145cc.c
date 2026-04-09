// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CRT
// Entry Point: 00d145cc
// Size: 404 bytes
// Signature: undefined __cdecl CRT(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4, Integer * param_5)


/* CryptoPP::CRT(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::CRT(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,
                  Integer *param_5)

{
  long lVar1;
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8;
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Integer::Minus(param_3);
                    /* try { // try from 00d14618 to 00d14627 has its CatchHandler @ 00d147a0 */
  Integer::Times(param_5);
                    /* try { // try from 00d14628 to 00d14637 has its CatchHandler @ 00d14790 */
  Integer::Modulo((Integer *)local_e8);
                    /* try { // try from 00d14638 to 00d14647 has its CatchHandler @ 00d14780 */
  Integer::Times(param_2);
                    /* try { // try from 00d14648 to 00d14657 has its CatchHandler @ 00d14770 */
  Integer::Plus((Integer *)local_88);
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  local_88[0] = &PTR__Integer_0100c890;
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00d14690 to 00d14693 has its CatchHandler @ 00d1476c */
  UnalignedDeallocate(local_68);
  local_b8 = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d146c4 to 00d146c7 has its CatchHandler @ 00d14768 */
  UnalignedDeallocate(local_98);
  local_e8[0] = &PTR__Integer_0100c890;
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d146f8 to 00d146fb has its CatchHandler @ 00d14764 */
  UnalignedDeallocate(local_c8);
  if (uStack_100 <= local_108) {
    local_108 = uStack_100;
  }
  for (; local_108 != 0; local_108 = local_108 - 1) {
    *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1472c to 00d1472f has its CatchHandler @ 00d14760 */
  UnalignedDeallocate(local_f8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


