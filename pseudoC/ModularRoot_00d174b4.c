// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ModularRoot
// Entry Point: 00d174b4
// Size: 584 bytes
// Signature: undefined __cdecl ModularRoot(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4, Integer * param_5, Integer * param_6)


/* CryptoPP::ModularRoot(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::ModularRoot
               (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,Integer *param_5
               ,Integer *param_6)

{
  ulong uVar1;
  long lVar2;
  undefined **local_128 [2];
  ulong local_118;
  ulong uStack_110;
  void *local_108;
  undefined **local_f8 [2];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  Integer::Integer((Integer *)local_98);
                    /* try { // try from 00d17504 to 00d1750b has its CatchHandler @ 00d17774 */
  Integer::Integer((Integer *)local_c8);
                    /* try { // try from 00d1750c to 00d1751b has its CatchHandler @ 00d17758 */
  Integer::Modulo(param_1);
                    /* try { // try from 00d1751c to 00d1752f has its CatchHandler @ 00d17734 */
  a_exp_b_mod_c((Integer *)local_128,param_2,param_4);
                    /* try { // try from 00d17530 to 00d1753b has its CatchHandler @ 00d17724 */
  Integer::operator=((Integer *)local_98,(Integer *)local_f8);
  uVar1 = local_e8;
  if (uStack_e0 <= local_e8) {
    uVar1 = uStack_e0;
  }
  local_f8[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_d8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17574 to 00d17577 has its CatchHandler @ 00d17720 */
  UnalignedDeallocate(local_d8);
  local_128[0] = &PTR__Integer_0100c890;
  uVar1 = local_118;
  if (uStack_110 <= local_118) {
    uVar1 = uStack_110;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_108 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d175a8 to 00d175ab has its CatchHandler @ 00d1771c */
  UnalignedDeallocate(local_108);
                    /* try { // try from 00d175ac to 00d175bb has its CatchHandler @ 00d17718 */
  Integer::Modulo(param_1);
                    /* try { // try from 00d175bc to 00d175cf has its CatchHandler @ 00d17714 */
  a_exp_b_mod_c((Integer *)local_128,param_3,param_5);
                    /* try { // try from 00d175d0 to 00d175db has its CatchHandler @ 00d17710 */
  Integer::operator=((Integer *)local_c8,(Integer *)local_f8);
  local_f8[0] = &PTR__Integer_0100c890;
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1760c to 00d1760f has its CatchHandler @ 00d1770c */
  UnalignedDeallocate(local_d8);
  local_128[0] = &PTR__Integer_0100c890;
  if (uStack_110 <= local_118) {
    local_118 = uStack_110;
  }
  for (; local_118 != 0; local_118 = local_118 - 1) {
    *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17640 to 00d17643 has its CatchHandler @ 00d17708 */
  UnalignedDeallocate(local_108);
                    /* try { // try from 00d17644 to 00d1765f has its CatchHandler @ 00d17704 */
  CRT((Integer *)local_98,param_4,(Integer *)local_c8,param_5,param_6);
  local_c8[0] = &PTR__Integer_0100c890;
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17690 to 00d17693 has its CatchHandler @ 00d17700 */
  UnalignedDeallocate(local_a8);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d176c4 to 00d176c7 has its CatchHandler @ 00d176fc */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


