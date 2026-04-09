// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Exponentiate
// Entry Point: 00c85d68
// Size: 420 bytes
// Signature: undefined __cdecl Exponentiate(DL_GroupPrecomputation * param_1, Integer * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::Exponentiate(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&, CryptoPP::Integer const&) const */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::Exponentiate
               (DL_GroupPrecomputation *param_1,Integer *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  Integer *in_x2;
  void *pvVar6;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
                    /* try { // try from 00c85dbc to 00c85dd7 has its CatchHandler @ 00c85f24 */
  std::__ndk1::
  vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
  ::reserve((vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
             *)&local_90,
            (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4) * -0x5555555555555555);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)param_1,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_90,in_x2);
                    /* try { // try from 00c85de0 to 00c85df3 has its CatchHandler @ 00c85f20 */
  uVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  GeneralCascadeMultiplication<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
            ((CryptoPP *)local_78,uVar4,local_90,local_88);
                    /* try { // try from 00c85dfc to 00c85e0b has its CatchHandler @ 00c85f10 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2,local_78);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c85e44 to 00c85e47 has its CatchHandler @ 00c85f0c */
  UnalignedDeallocate(local_58);
  pvVar3 = local_90;
  pvVar6 = local_88;
  if (local_90 != (void *)0x0) {
    while (pvVar6 != pvVar3) {
      *(undefined ***)((long)pvVar6 + -0x30) = &PTR__Integer_0100c890;
      pvVar5 = *(void **)((long)pvVar6 + -0x10);
      uVar2 = *(ulong *)((long)pvVar6 + -0x20);
      if (*(ulong *)((long)pvVar6 + -0x18) <= *(ulong *)((long)pvVar6 + -0x20)) {
        uVar2 = *(ulong *)((long)pvVar6 + -0x18);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)pvVar5 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00c85e98 to 00c85e9b has its CatchHandler @ 00c85f38 */
      UnalignedDeallocate(pvVar5);
      pvVar5 = *(void **)((long)pvVar6 + -0x40);
      *(undefined ***)((long)pvVar6 + -0x60) = &PTR__Integer_0100c890;
      uVar2 = *(ulong *)((long)pvVar6 + -0x50);
      if (*(ulong *)((long)pvVar6 + -0x48) <= *(ulong *)((long)pvVar6 + -0x50)) {
        uVar2 = *(ulong *)((long)pvVar6 + -0x48);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)pvVar5 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00c85e5c to 00c85e5f has its CatchHandler @ 00c85f3c */
      UnalignedDeallocate(pvVar5);
      pvVar6 = (void *)((long)pvVar6 + -0x60);
    }
    local_88 = pvVar3;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


