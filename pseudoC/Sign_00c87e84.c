// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Sign
// Entry Point: 00c87e84
// Size: 576 bytes
// Signature: undefined __thiscall Sign(DL_Algorithm_GDSA<CryptoPP::Integer> * this, DL_GroupParameters * param_1, Integer * param_2, Integer * param_3, Integer * param_4, Integer * param_5, Integer * param_6)


/* CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>::Sign(CryptoPP::DL_GroupParameters<CryptoPP::Integer>
   const&, CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer&, CryptoPP::Integer&) const */

void __thiscall
CryptoPP::DL_Algorithm_GDSA<CryptoPP::Integer>::Sign
          (DL_Algorithm_GDSA<CryptoPP::Integer> *this,DL_GroupParameters *param_1,Integer *param_2,
          Integer *param_3,Integer *param_4,Integer *param_5,Integer *param_6)

{
  ulong uVar1;
  long lVar2;
  Integer *pIVar3;
  undefined **local_158 [2];
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  undefined **local_128;
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
  pIVar3 = (Integer *)(**(code **)(*(long *)param_1 + 0xa0))(param_1);
  Integer::Modulo(param_5);
                    /* try { // try from 00c87ee8 to 00c87ef3 has its CatchHandler @ 00c88120 */
  Integer::operator=(param_5,(Integer *)local_98);
  uVar1 = local_88;
  if (uStack_80 <= local_88) {
    uVar1 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_78 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00c87f2c to 00c87f2f has its CatchHandler @ 00c8811c */
  UnalignedDeallocate(local_78);
  Integer::InverseMod(param_3,pIVar3);
                    /* try { // try from 00c87f40 to 00c87f4f has its CatchHandler @ 00c88118 */
  Integer::Times(param_2);
                    /* try { // try from 00c87f50 to 00c87f5f has its CatchHandler @ 00c88108 */
  Integer::Plus((Integer *)local_158);
                    /* try { // try from 00c87f60 to 00c87f6f has its CatchHandler @ 00c880f8 */
  Integer::Times((Integer *)local_98);
                    /* try { // try from 00c87f70 to 00c87f7f has its CatchHandler @ 00c880e8 */
  Integer::Modulo((Integer *)local_f8);
                    /* try { // try from 00c87f80 to 00c87f8b has its CatchHandler @ 00c880d8 */
  Integer::operator=(param_6,(Integer *)local_c8);
  local_c8[0] = &PTR__Integer_0100c890;
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00c87fbc to 00c87fbf has its CatchHandler @ 00c880d4 */
  UnalignedDeallocate(local_a8);
  local_f8[0] = &PTR__Integer_0100c890;
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00c87ff0 to 00c87ff3 has its CatchHandler @ 00c880d0 */
  UnalignedDeallocate(local_d8);
  local_128 = &PTR__Integer_0100c890;
  if (uStack_110 <= local_118) {
    local_118 = uStack_110;
  }
  for (; local_118 != 0; local_118 = local_118 - 1) {
    *(undefined4 *)((long)local_108 + local_118 * 4 + -4) = 0;
  }
                    /* try { // try from 00c88024 to 00c88027 has its CatchHandler @ 00c880cc */
  UnalignedDeallocate(local_108);
  local_158[0] = &PTR__Integer_0100c890;
  if (uStack_140 <= local_148) {
    local_148 = uStack_140;
  }
  for (; local_148 != 0; local_148 = local_148 - 1) {
    *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
  }
                    /* try { // try from 00c88058 to 00c8805b has its CatchHandler @ 00c880c8 */
  UnalignedDeallocate(local_138);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8808c to 00c8808f has its CatchHandler @ 00c880c4 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


