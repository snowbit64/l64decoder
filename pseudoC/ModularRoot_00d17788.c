// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ModularRoot
// Entry Point: 00d17788
// Size: 616 bytes
// Signature: undefined __cdecl ModularRoot(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::ModularRoot(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer
   const&, CryptoPP::Integer const&) */

void CryptoPP::ModularRoot(Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined **local_118 [2];
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Integer::Integer((Integer *)local_e8,1);
                    /* try { // try from 00d177d0 to 00d177df has its CatchHandler @ 00d17a84 */
  Integer::Minus(param_3);
                    /* try { // try from 00d177e0 to 00d177ef has its CatchHandler @ 00d17a68 */
  Integer::InverseMod(param_2,(Integer *)local_b8);
  uVar1 = local_a8;
  if (uStack_a0 <= local_a8) {
    uVar1 = uStack_a0;
  }
  local_b8[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_98 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17828 to 00d1782b has its CatchHandler @ 00d17a64 */
  UnalignedDeallocate(local_98);
  local_e8[0] = &PTR__Integer_0100c890;
  uVar1 = local_d8;
  if (uStack_d0 <= local_d8) {
    uVar1 = uStack_d0;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_c8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d1785c to 00d1785f has its CatchHandler @ 00d17a60 */
  UnalignedDeallocate(local_c8);
                    /* try { // try from 00d17860 to 00d1786b has its CatchHandler @ 00d17a4c */
  Integer::Integer((Integer *)local_118,1);
                    /* try { // try from 00d1786c to 00d1787b has its CatchHandler @ 00d17a30 */
  Integer::Minus(param_4);
                    /* try { // try from 00d1787c to 00d1788b has its CatchHandler @ 00d17a20 */
  Integer::InverseMod(param_2,(Integer *)local_e8);
  local_e8[0] = &PTR__Integer_0100c890;
  uVar1 = local_d8;
  if (uStack_d0 <= local_d8) {
    uVar1 = uStack_d0;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_c8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d178bc to 00d178bf has its CatchHandler @ 00d17a1c */
  UnalignedDeallocate(local_c8);
  local_118[0] = &PTR__Integer_0100c890;
  if (uStack_100 <= local_108) {
    local_108 = uStack_100;
  }
  for (; local_108 != 0; local_108 = local_108 - 1) {
    *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
  }
                    /* try { // try from 00d178f0 to 00d178f3 has its CatchHandler @ 00d17a18 */
  UnalignedDeallocate(local_f8);
                    /* try { // try from 00d178f4 to 00d17903 has its CatchHandler @ 00d17a0c */
  Integer::InverseMod(param_3,param_4);
                    /* try { // try from 00d17904 to 00d17923 has its CatchHandler @ 00d179fc */
  ModularRoot(param_1,(Integer *)local_88,(Integer *)local_b8,param_3,param_4,(Integer *)local_e8);
  local_e8[0] = &PTR__Integer_0100c890;
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17954 to 00d17957 has its CatchHandler @ 00d179f8 */
  UnalignedDeallocate(local_c8);
  local_b8[0] = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17988 to 00d1798b has its CatchHandler @ 00d179f4 */
  UnalignedDeallocate(local_98);
  local_88[0] = &PTR__Integer_0100c890;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00d179bc to 00d179bf has its CatchHandler @ 00d179f0 */
  UnalignedDeallocate(local_68);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


