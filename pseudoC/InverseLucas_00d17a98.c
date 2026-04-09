// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InverseLucas
// Entry Point: 00d17a98
// Size: 1088 bytes
// Signature: undefined __cdecl InverseLucas(Integer * param_1, Integer * param_2, Integer * param_3, Integer * param_4, Integer * param_5)


/* CryptoPP::InverseLucas(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void CryptoPP::InverseLucas
               (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4,Integer *param_5
               )

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  Integer *pIVar4;
  undefined **local_158 [2];
  ulong local_148;
  ulong uStack_140;
  void *local_138;
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
  pIVar4 = param_4;
  Integer::Times(param_2);
                    /* try { // try from 00d17ae8 to 00d17af3 has its CatchHandler @ 00d17f74 */
  Integer::Integer((Integer *)local_f8,4);
                    /* try { // try from 00d17af4 to 00d17b03 has its CatchHandler @ 00d17f60 */
  Integer::Minus((Integer *)local_c8);
  uVar1 = local_e8;
  if (uStack_e0 <= local_e8) {
    uVar1 = uStack_e0;
  }
  local_f8[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_d8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17b3c to 00d17b3f has its CatchHandler @ 00d17f5c */
  UnalignedDeallocate(local_d8);
  local_c8[0] = &PTR__Integer_0100c890;
  uVar1 = local_b8;
  if (uStack_b0 <= local_b8) {
    uVar1 = uStack_b0;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_a8 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17b70 to 00d17b73 has its CatchHandler @ 00d17f58 */
  UnalignedDeallocate(local_a8);
                    /* try { // try from 00d17b74 to 00d17b7b has its CatchHandler @ 00d17f50 */
  Integer::Integer((Integer *)local_c8);
                    /* try { // try from 00d17b7c to 00d17b83 has its CatchHandler @ 00d17f48 */
  Integer::Integer((Integer *)local_f8);
                    /* try { // try from 00d17b84 to 00d17b9b has its CatchHandler @ 00d17f84 */
  iVar3 = Jacobi((Integer *)local_98,param_3);
  Integer::Integer((Integer *)local_158,(long)iVar3);
                    /* try { // try from 00d17b9c to 00d17bab has its CatchHandler @ 00d17f38 */
  Integer::Minus(param_3);
                    /* try { // try from 00d17bac to 00d17bb7 has its CatchHandler @ 00d17f28 */
  Integer::operator=((Integer *)local_c8,(Integer *)local_128);
  local_128[0] = &PTR__Integer_0100c890;
  uVar1 = local_118;
  if (uStack_110 <= local_118) {
    uVar1 = uStack_110;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_108 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17be8 to 00d17beb has its CatchHandler @ 00d17f24 */
  UnalignedDeallocate(local_108);
  local_158[0] = &PTR__Integer_0100c890;
  uVar1 = local_148;
  if (uStack_140 <= local_148) {
    uVar1 = uStack_140;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_138 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17c1c to 00d17c1f has its CatchHandler @ 00d17f20 */
  UnalignedDeallocate(local_138);
                    /* try { // try from 00d17c20 to 00d17c2f has its CatchHandler @ 00d17f1c */
  Integer::InverseMod(param_1,(Integer *)local_c8);
                    /* try { // try from 00d17c30 to 00d17c43 has its CatchHandler @ 00d17f18 */
  Lucas((CryptoPP *)local_158,param_2,param_3,pIVar4);
                    /* try { // try from 00d17c44 to 00d17c4f has its CatchHandler @ 00d17f14 */
  Integer::operator=((Integer *)local_c8,(Integer *)local_128);
  local_128[0] = &PTR__Integer_0100c890;
  uVar1 = local_118;
  if (uStack_110 <= local_118) {
    uVar1 = uStack_110;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_108 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17c80 to 00d17c83 has its CatchHandler @ 00d17f10 */
  UnalignedDeallocate(local_108);
  local_158[0] = &PTR__Integer_0100c890;
  uVar1 = local_148;
  if (uStack_140 <= local_148) {
    uVar1 = uStack_140;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_138 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17cb4 to 00d17cb7 has its CatchHandler @ 00d17f0c */
  UnalignedDeallocate(local_138);
                    /* try { // try from 00d17cb8 to 00d17ccf has its CatchHandler @ 00d17f80 */
  iVar3 = Jacobi((Integer *)local_98,param_4);
  Integer::Integer((Integer *)local_158,(long)iVar3);
                    /* try { // try from 00d17cd0 to 00d17cdf has its CatchHandler @ 00d17f08 */
  Integer::Minus(param_4);
                    /* try { // try from 00d17ce0 to 00d17ceb has its CatchHandler @ 00d17f04 */
  Integer::operator=((Integer *)local_f8,(Integer *)local_128);
  local_128[0] = &PTR__Integer_0100c890;
  uVar1 = local_118;
  if (uStack_110 <= local_118) {
    uVar1 = uStack_110;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_108 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17d1c to 00d17d1f has its CatchHandler @ 00d17f00 */
  UnalignedDeallocate(local_108);
  local_158[0] = &PTR__Integer_0100c890;
  uVar1 = local_148;
  if (uStack_140 <= local_148) {
    uVar1 = uStack_140;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_138 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17d50 to 00d17d53 has its CatchHandler @ 00d17efc */
  UnalignedDeallocate(local_138);
                    /* try { // try from 00d17d54 to 00d17d63 has its CatchHandler @ 00d17ef8 */
  Integer::InverseMod(param_1,(Integer *)local_f8);
                    /* try { // try from 00d17d64 to 00d17d77 has its CatchHandler @ 00d17ef4 */
  Lucas((CryptoPP *)local_158,param_2,param_4,pIVar4);
                    /* try { // try from 00d17d78 to 00d17d83 has its CatchHandler @ 00d17ef0 */
  Integer::operator=((Integer *)local_f8,(Integer *)local_128);
  local_128[0] = &PTR__Integer_0100c890;
  if (uStack_110 <= local_118) {
    local_118 = uStack_110;
  }
  for (; local_118 != 0; local_118 = local_118 - 1) {
    *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17db4 to 00d17db7 has its CatchHandler @ 00d17eec */
  UnalignedDeallocate(local_108);
  local_158[0] = &PTR__Integer_0100c890;
  if (uStack_140 <= local_148) {
    local_148 = uStack_140;
  }
  for (; local_148 != 0; local_148 = local_148 - 1) {
    *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17de8 to 00d17deb has its CatchHandler @ 00d17ee8 */
  UnalignedDeallocate(local_138);
                    /* try { // try from 00d17dec to 00d17e07 has its CatchHandler @ 00d17ee4 */
  CRT((Integer *)local_c8,param_3,(Integer *)local_f8,param_4,param_5);
  local_f8[0] = &PTR__Integer_0100c890;
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17e38 to 00d17e3b has its CatchHandler @ 00d17ee0 */
  UnalignedDeallocate(local_d8);
  local_c8[0] = &PTR__Integer_0100c890;
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17e6c to 00d17e6f has its CatchHandler @ 00d17edc */
  UnalignedDeallocate(local_a8);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d17ea0 to 00d17ea3 has its CatchHandler @ 00d17ed8 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


