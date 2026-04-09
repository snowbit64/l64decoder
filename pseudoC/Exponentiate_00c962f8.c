// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exponentiate
// Entry Point: 00c962f8
// Size: 372 bytes
// Signature: undefined __cdecl Exponentiate(DL_GroupPrecomputation * param_1, Integer * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::Exponentiate(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::Exponentiate
               (DL_GroupPrecomputation *param_1,Integer *param_2)

{
  long lVar1;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar2;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar3;
  undefined8 uVar4;
  Integer *in_x2;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *local_b0;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *local_a8;
  undefined8 local_a0;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_b0 = (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0;
  local_a8 = (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0;
  local_a0 = 0;
                    /* try { // try from 00c9634c to 00c96367 has its CatchHandler @ 00c96488 */
  std::__ndk1::
  vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
  ::reserve((vector<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>>>
             *)&local_b0,
            (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 4) * -0x3333333333333333);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)param_1,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_b0,in_x2);
                    /* try { // try from 00c96370 to 00c96383 has its CatchHandler @ 00c96484 */
  uVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  GeneralCascadeMultiplication<CryptoPP::EC2NPoint,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>*>>
            ((CryptoPP *)local_98,uVar4,local_b0,local_a8);
                    /* try { // try from 00c9638c to 00c9639b has its CatchHandler @ 00c96474 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2,local_98);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_98[0] = &PTR__EC2NPoint_010026a8;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c963d4 to 00c963d7 has its CatchHandler @ 00c96470 */
  UnalignedDeallocate(local_58);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c96400 to 00c96403 has its CatchHandler @ 00c9646c */
  UnalignedDeallocate(local_78);
  pBVar3 = local_b0;
  pBVar2 = local_a8;
  if (local_b0 != (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0) {
    while (pBVar2 != pBVar3) {
      BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>::~BaseAndExponent(pBVar2 + -0x80);
      pBVar2 = pBVar2 + -0x80;
    }
    local_a8 = pBVar3;
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


