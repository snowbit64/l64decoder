// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecode
// Entry Point: 00ceb530
// Size: 548 bytes
// Signature: undefined __thiscall BERDecode(DL_GroupParameters_IntegerBased * this, BufferedTransformation * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBased::BERDecode(CryptoPP::BufferedTransformation&) */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::BERDecode
          (DL_GroupParameters_IntegerBased *this,BufferedTransformation *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **local_160 [2];
  ulong local_150;
  ulong uStack_148;
  void *local_140;
  undefined **local_130 [2];
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  undefined **local_100 [2];
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined **local_70;
  undefined **ppuStack_68;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  BERGeneralDecoder::BERGeneralDecoder((BERGeneralDecoder *)&local_70,param_1,'0');
  local_70 = &PTR__BERGeneralDecoder_01000a70;
  ppuStack_68 = &PTR__BERSequenceDecoder_01000c08;
                    /* try { // try from 00ceb574 to 00ceb57f has its CatchHandler @ 00ceb79c */
  Integer::Integer((Integer *)local_a0,(BufferedTransformation *)&local_70);
                    /* try { // try from 00ceb580 to 00ceb58b has its CatchHandler @ 00ceb794 */
  Integer::Integer((Integer *)local_d0,(BufferedTransformation *)&local_70);
                    /* try { // try from 00ceb58c to 00ceb593 has its CatchHandler @ 00ceb78c */
  Integer::Integer((Integer *)local_100);
                    /* try { // try from 00ceb594 to 00ceb5b3 has its CatchHandler @ 00ceb7a4 */
  uVar2 = BERGeneralDecoder::EndReached();
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00ceb64c to 00ceb683 has its CatchHandler @ 00ceb7a4 */
    Integer::BERDecode((Integer *)local_100,(BufferedTransformation *)&local_70);
  }
  else {
    Integer::operator=((Integer *)local_100,(Integer *)local_d0);
                    /* try { // try from 00ceb5b4 to 00ceb5c3 has its CatchHandler @ 00ceb77c */
    ComputeGroupOrder(this,(Integer *)local_a0);
                    /* try { // try from 00ceb5c4 to 00ceb5d3 has its CatchHandler @ 00ceb76c */
    Integer::DividedBy((uint)local_160);
                    /* try { // try from 00ceb5d4 to 00ceb5df has its CatchHandler @ 00ceb75c */
    Integer::operator=((Integer *)local_d0,(Integer *)local_130);
    local_130[0] = &PTR__Integer_0100c890;
    if (uStack_118 <= local_120) {
      local_120 = uStack_118;
    }
    for (; local_120 != 0; local_120 = local_120 - 1) {
      *(undefined4 *)((long)local_110 + local_120 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceb610 to 00ceb613 has its CatchHandler @ 00ceb758 */
    UnalignedDeallocate(local_110);
    local_160[0] = &PTR__Integer_0100c890;
    if (uStack_148 <= local_150) {
      local_150 = uStack_148;
    }
    for (; local_150 != 0; local_150 = local_150 - 1) {
      *(undefined4 *)((long)local_140 + local_150 * 4 + -4) = 0;
    }
                    /* try { // try from 00ceb644 to 00ceb647 has its CatchHandler @ 00ceb754 */
    UnalignedDeallocate(local_140);
  }
  BERGeneralDecoder::MessageEnd();
  (**(code **)(*(long *)this + 0xa8))(this,local_a0,local_100);
  Integer::operator=((Integer *)(this + 0x18),(Integer *)local_d0);
  local_100[0] = &PTR__Integer_0100c890;
  *(undefined4 *)(this + 0x10) = 0;
  if (uStack_e8 <= local_f0) {
    local_f0 = uStack_e8;
  }
  for (; local_f0 != 0; local_f0 = local_f0 - 1) {
    *(undefined4 *)((long)local_e0 + local_f0 * 4 + -4) = 0;
  }
                    /* try { // try from 00ceb6b8 to 00ceb6bb has its CatchHandler @ 00ceb788 */
  UnalignedDeallocate(local_e0);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00ceb6ec to 00ceb6ef has its CatchHandler @ 00ceb784 */
  UnalignedDeallocate(local_b0);
  local_a0[0] = &PTR__Integer_0100c890;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00ceb720 to 00ceb723 has its CatchHandler @ 00ceb780 */
  UnalignedDeallocate(local_80);
  BERGeneralDecoder::~BERGeneralDecoder((BERGeneralDecoder *)&local_70);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


