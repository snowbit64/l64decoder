// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exponentiate
// Entry Point: 00c98158
// Size: 404 bytes
// Signature: undefined __cdecl Exponentiate(DL_GroupPrecomputation * param_1, Integer * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Exponentiate(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::Exponentiate
               (DL_GroupPrecomputation *param_1,Integer *param_2)

{
  long lVar1;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar2;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar3;
  undefined8 uVar4;
  Integer *in_x2;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *local_d0;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *local_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined **local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined **local_80;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_d0 = (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0;
  local_c8 = (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0;
  local_c0 = 0;
                    /* try { // try from 00c981b4 to 00c981cf has its CatchHandler @ 00c98308 */
  std::__ndk1::
  vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
  ::reserve((vector<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>>>
             *)&local_d0,
            (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4) * 0x6db6db6db6db6db7);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)param_1,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_d0,in_x2);
                    /* try { // try from 00c981d8 to 00c981eb has its CatchHandler @ 00c98304 */
  uVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  GeneralCascadeMultiplication<CryptoPP::ECPPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>*>>
            ((CryptoPP *)&local_b8,uVar4,local_d0,local_c8);
                    /* try { // try from 00c981f4 to 00c98203 has its CatchHandler @ 00c982f4 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2,&local_b8);
  local_b8 = &PTR__ECPPoint_00fe9fd8;
  local_80 = &PTR__Integer_0100c890;
  if (uStack_68 <= local_70) {
    local_70 = uStack_68;
  }
  for (; local_70 != 0; local_70 = local_70 - 1) {
    *(undefined4 *)((long)local_60 + local_70 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9824c to 00c9824f has its CatchHandler @ 00c982f0 */
  UnalignedDeallocate(local_60);
  local_b0 = &PTR__Integer_0100c890;
  if (uStack_98 <= local_a0) {
    local_a0 = uStack_98;
  }
  for (; local_a0 != 0; local_a0 = local_a0 - 1) {
    *(undefined4 *)((long)local_90 + local_a0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c98280 to 00c98283 has its CatchHandler @ 00c982ec */
  UnalignedDeallocate(local_90);
  pBVar3 = local_d0;
  pBVar2 = local_c8;
  if (local_d0 != (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
    while (pBVar2 != pBVar3) {
      BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar2 + -0xa0);
      pBVar2 = pBVar2 + -0xa0;
    }
    local_c8 = pBVar3;
    operator_delete(local_d0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


