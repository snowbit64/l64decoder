// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaxExponent
// Entry Point: 00cec61c
// Size: 384 bytes
// Signature: undefined GetMaxExponent(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_IntegerBased::GetMaxExponent() const */

void CryptoPP::DL_GroupParameters_IntegerBased::GetMaxExponent(void)

{
  undefined ***pppuVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long *in_x0;
  Integer *pIVar5;
  ulong extraout_x1;
  Integer *in_x8;
  undefined **local_c8 [2];
  ulong local_b8;
  ulong uStack_b0;
  void *local_a8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pIVar5 = (Integer *)(**(code **)(*in_x0 + 0x50))();
  Integer::Integer((Integer *)local_98,1);
                    /* try { // try from 00cec660 to 00cec66f has its CatchHandler @ 00cec7a8 */
  Integer::Minus(pIVar5);
                    /* try { // try from 00cec678 to 00cec6ab has its CatchHandler @ 00cec7c0 */
  iVar3 = (**(code **)(*in_x0 + 0xb0))();
  (**(code **)(*in_x0 + 0xa0))();
  iVar4 = Integer::BitCount();
  iVar3 = DiscreteLogWorkFactor(iVar4 * iVar3);
  Integer::Power2((Integer *)(ulong)(uint)(iVar3 << 1),extraout_x1);
                    /* try { // try from 00cec6ac to 00cec6cf has its CatchHandler @ 00cec7b0 */
  iVar3 = Integer::Compare((Integer *)local_c8,(Integer *)local_68);
  pppuVar1 = local_c8;
  if (-1 < iVar3) {
    pppuVar1 = local_68;
  }
  Integer::Integer(in_x8,(Integer *)pppuVar1);
  if (uStack_b0 <= local_b8) {
    local_b8 = uStack_b0;
  }
  local_c8[0] = &PTR__Integer_0100c890;
  for (; local_b8 != 0; local_b8 = local_b8 - 1) {
    *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
  }
                    /* try { // try from 00cec708 to 00cec70b has its CatchHandler @ 00cec7a4 */
  UnalignedDeallocate(local_a8);
  local_68[0] = &PTR__Integer_0100c890;
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cec73c to 00cec73f has its CatchHandler @ 00cec7a0 */
  UnalignedDeallocate(local_48);
  local_98[0] = &PTR__Integer_0100c890;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00cec770 to 00cec773 has its CatchHandler @ 00cec79c */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


