// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00c970d0
// Size: 424 bytes
// Signature: undefined __cdecl CascadeExponentiate(DL_GroupPrecomputation * param_1, Integer * param_2, DL_FixedBasePrecomputation * param_3, Integer * param_4)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::CascadeExponentiate(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&, CryptoPP::Integer const&, CryptoPP::DL_FixedBasePrecomputation<CryptoPP::EC2NPoint>
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::CascadeExponentiate
               (DL_GroupPrecomputation *param_1,Integer *param_2,DL_FixedBasePrecomputation *param_3
               ,Integer *param_4)

{
  long lVar1;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar2;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar3;
  undefined8 uVar4;
  Integer *in_x4;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *local_c0;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *local_b8;
  undefined8 local_b0;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_c0 = (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0;
  local_b8 = (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0;
  local_b0 = 0;
                    /* try { // try from 00c97140 to 00c9716f has its CatchHandler @ 00c97294 */
  std::__ndk1::
  vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
  ::reserve((vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
             *)&local_c0,
            (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 4) * -0x3333333333333333 +
            (*(long *)(param_4 + 0x98) - *(long *)(param_4 + 0x90) >> 4) * -0x3333333333333333);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)param_1,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_c0,(Integer *)param_3);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)param_4,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_c0,in_x4);
                    /* try { // try from 00c97178 to 00c9718b has its CatchHandler @ 00c97290 */
  uVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  GeneralCascadeMultiplication<CryptoPP::EC2NPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
            ((CryptoPP *)local_a8,uVar4,local_c0,local_b8);
                    /* try { // try from 00c97194 to 00c971a3 has its CatchHandler @ 00c97280 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2,local_a8);
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  local_a8[0] = &PTR__EC2NPoint_010026a8;
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00c971dc to 00c971df has its CatchHandler @ 00c9727c */
  UnalignedDeallocate(local_68);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00c97208 to 00c9720b has its CatchHandler @ 00c97278 */
  UnalignedDeallocate(local_88);
  pBVar3 = local_c0;
  pBVar2 = local_b8;
  if (local_c0 != (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0) {
    while (pBVar2 != pBVar3) {
      BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar2 + -0x80);
      pBVar2 = pBVar2 + -0x80;
    }
    local_b8 = pBVar3;
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


