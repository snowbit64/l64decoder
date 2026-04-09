// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00c99010
// Size: 456 bytes
// Signature: undefined __cdecl CascadeExponentiate(DL_GroupPrecomputation * param_1, Integer * param_2, DL_FixedBasePrecomputation * param_3, Integer * param_4)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::CascadeExponentiate(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, CryptoPP::Integer const&, CryptoPP::DL_FixedBasePrecomputation<CryptoPP::ECPPoint>
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::CascadeExponentiate
               (DL_GroupPrecomputation *param_1,Integer *param_2,DL_FixedBasePrecomputation *param_3
               ,Integer *param_4)

{
  long lVar1;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar2;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar3;
  undefined8 uVar4;
  Integer *in_x4;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *local_e0;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined **local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0;
  local_d8 = (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0;
  local_d0 = 0;
                    /* try { // try from 00c99088 to 00c990b7 has its CatchHandler @ 00c991f4 */
  std::__ndk1::
  vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
  ::reserve((vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
             *)&local_e0,
            (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4) * 0x6db6db6db6db6db7 +
            (*(long *)(param_4 + 0xb8) - *(long *)(param_4 + 0xb0) >> 4) * 0x6db6db6db6db6db7);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)param_1,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_e0,(Integer *)param_3);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)param_4,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_e0,in_x4);
                    /* try { // try from 00c990c0 to 00c990d3 has its CatchHandler @ 00c991f0 */
  uVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  GeneralCascadeMultiplication<CryptoPP::ECPPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
            ((CryptoPP *)&local_c8,uVar4,local_e0,local_d8);
                    /* try { // try from 00c990dc to 00c990eb has its CatchHandler @ 00c991e0 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_c8);
  local_c8 = &PTR__ECPPoint_00fe9fd8;
  local_90 = &PTR__Integer_0100c890;
  if (uStack_78 <= local_80) {
    local_80 = uStack_78;
  }
  for (; local_80 != 0; local_80 = local_80 - 1) {
    *(undefined4 *)((long)local_70 + local_80 * 4 + -4) = 0;
  }
                    /* try { // try from 00c99134 to 00c99137 has its CatchHandler @ 00c991dc */
  UnalignedDeallocate(local_70);
  local_c0 = &PTR__Integer_0100c890;
  if (uStack_a8 <= local_b0) {
    local_b0 = uStack_a8;
  }
  for (; local_b0 != 0; local_b0 = local_b0 - 1) {
    *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c99168 to 00c9916b has its CatchHandler @ 00c991d8 */
  UnalignedDeallocate(local_a0);
  pBVar3 = local_e0;
  pBVar2 = local_d8;
  if (local_e0 != (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
    while (pBVar2 != pBVar3) {
      BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar2 + -0xa0);
      pBVar2 = pBVar2 + -0xa0;
    }
    local_d8 = pBVar3;
    operator_delete(local_e0);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


