// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CascadeExponentiate
// Entry Point: 00c86bdc
// Size: 472 bytes
// Signature: undefined __cdecl CascadeExponentiate(DL_GroupPrecomputation * param_1, Integer * param_2, DL_FixedBasePrecomputation * param_3, Integer * param_4)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::CascadeExponentiate(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&, CryptoPP::Integer const&, CryptoPP::DL_FixedBasePrecomputation<CryptoPP::Integer> const&,
   CryptoPP::Integer const&) const */

void CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::CascadeExponentiate
               (DL_GroupPrecomputation *param_1,Integer *param_2,DL_FixedBasePrecomputation *param_3
               ,Integer *param_4)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  Integer *in_x4;
  void *pvVar6;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  local_90 = 0;
                    /* try { // try from 00c86c4c to 00c86c7b has its CatchHandler @ 00c86dcc */
  std::__ndk1::
  vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
  ::reserve((vector<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>,std::__ndk1::allocator<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>>>
             *)&local_a0,
            (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4) * -0x5555555555555555 +
            (*(long *)(param_4 + 0x78) - *(long *)(param_4 + 0x70) >> 4) * -0x5555555555555555);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)param_1,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_a0,(Integer *)param_3);
  PrepareCascade((DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *)param_4,
                 (DL_GroupPrecomputation *)param_2,(vector *)&local_a0,in_x4);
                    /* try { // try from 00c86c84 to 00c86c97 has its CatchHandler @ 00c86dc8 */
  uVar4 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  GeneralCascadeMultiplication<CryptoPP::Integer,std::__ndk1::__wrap_iter<CryptoPP::BaseAndExponent<CryptoPP::Integer,CryptoPP::Integer>*>>
            ((CryptoPP *)local_88,uVar4,local_a0,local_98);
                    /* try { // try from 00c86ca0 to 00c86caf has its CatchHandler @ 00c86db8 */
  (**(code **)(*(long *)param_2 + 0x20))(param_2,local_88);
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  local_88[0] = &PTR__Integer_0100c890;
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00c86ce8 to 00c86ceb has its CatchHandler @ 00c86db4 */
  UnalignedDeallocate(local_68);
  pvVar3 = local_a0;
  pvVar6 = local_98;
  if (local_a0 != (void *)0x0) {
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
                    /* try { // try from 00c86d3c to 00c86d3f has its CatchHandler @ 00c86de0 */
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
                    /* try { // try from 00c86d00 to 00c86d03 has its CatchHandler @ 00c86de4 */
      UnalignedDeallocate(pvVar5);
      pvVar6 = (void *)((long)pvVar6 + -0x60);
    }
    local_98 = pvVar3;
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


