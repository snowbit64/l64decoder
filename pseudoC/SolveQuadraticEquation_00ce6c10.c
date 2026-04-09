// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SolveQuadraticEquation
// Entry Point: 00ce6c10
// Size: 696 bytes
// Signature: undefined __cdecl SolveQuadraticEquation(PolynomialMod2 * param_1)


/* CryptoPP::GF2NP::SolveQuadraticEquation(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::GF2NP::SolveQuadraticEquation(PolynomialMod2 *param_1)

{
  long lVar1;
  SecBlock *pSVar2;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> *in_x8;
  ulong uVar3;
  uint uVar4;
  PolynomialMod2 aPStack_140 [8];
  ulong local_138;
  ulong local_130;
  void *local_128;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>> aSStack_120 [8];
  ulong local_118;
  ulong local_110;
  void *local_108;
  undefined **local_100;
  undefined auStack_f8 [32];
  ulong local_d8;
  ulong uStack_d0;
  undefined *local_c8;
  undefined auStack_c0 [48];
  ulong local_90;
  ulong uStack_88;
  undefined *local_80;
  long *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((byte)param_1[0x90] & 1) != 0) {
    HalfTrace(param_1);
LAB_00ce6e94:
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  local_110 = 0;
  local_108 = (void *)0x0;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  local_118 = 0x3fffffffffffffff;
                    /* try { // try from 00ce6c64 to 00ce6c6b has its CatchHandler @ 00ce6ecc */
  RandomPool::RandomPool((RandomPool *)&local_100);
  do {
    do {
      local_138 = 0x3fffffffffffffff;
      local_130 = 0;
      local_128 = (void *)0x0;
                    /* try { // try from 00ce6c88 to 00ce6c93 has its CatchHandler @ 00ce6ed8 */
      PolynomialMod2::Randomize
                (aPStack_140,(RandomNumberGenerator *)&local_100,(ulong)*(uint *)(param_1 + 0x90));
                    /* try { // try from 00ce6c94 to 00ce6cab has its CatchHandler @ 00ce6ee8 */
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
                (in_x8,(SecBlock *)&DAT_021207b8);
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
                (aSStack_120,(SecBlock *)aPStack_140);
      if (*(int *)(param_1 + 0x90) != 1) {
        uVar4 = 1;
        do {
                    /* try { // try from 00ce6cc4 to 00ce6d43 has its CatchHandler @ 00ce6eec */
          pSVar2 = (SecBlock *)(**(code **)(*(long *)param_1 + 0x90))(param_1,aSStack_120);
          SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
                    (aSStack_120,pSVar2);
          pSVar2 = (SecBlock *)(**(code **)(*(long *)param_1 + 0x90))(param_1);
          SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,false>>::Assign
                    (in_x8,pSVar2);
          (**(code **)(*(long *)param_1 + 0x80))(param_1,aSStack_120);
          (**(code **)(*(long *)param_1 + 0x48))(param_1);
          (**(code **)(*(long *)param_1 + 0x48))(param_1,aSStack_120,aPStack_140);
          uVar4 = uVar4 + 1;
        } while (uVar4 <= *(int *)(param_1 + 0x90) - 1U);
      }
      uVar3 = local_138;
      if (local_130 <= local_138) {
        uVar3 = local_130;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)((long)local_128 + uVar3 * 4 + -4) = 0;
      }
                    /* try { // try from 00ce6d80 to 00ce6d83 has its CatchHandler @ 00ce6ed4 */
      UnalignedDeallocate(local_128);
    } while (local_110 == 0);
    uVar3 = 0;
    do {
      if (*(int *)((long)local_108 + uVar3 * 4) != 0) {
        local_100 = &PTR__RandomPool_0100f6d0;
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 8))();
        }
        if (uStack_88 <= local_90) {
          local_90 = uStack_88;
        }
        if (auStack_c0 == local_80) {
          for (; local_90 != 0; local_90 = local_90 - 1) {
            local_80[local_90 - 1] = 0;
          }
        }
        if (uStack_d0 <= local_d8) {
          local_d8 = uStack_d0;
        }
        if (auStack_f8 + ((ulong)(uint)-(int)auStack_f8 & 8) == local_c8 && local_d8 != 0) {
          do {
            uVar3 = local_d8 - 1;
            local_c8[local_d8 - 1] = 0;
            local_d8 = uVar3;
          } while (uVar3 != 0);
        }
        uVar3 = local_118;
        if (local_110 <= local_118) {
          uVar3 = local_110;
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)((long)local_108 + uVar3 * 4 + -4) = 0;
        }
                    /* try { // try from 00ce6e90 to 00ce6e93 has its CatchHandler @ 00ce6ec8 */
        UnalignedDeallocate(local_108);
        goto LAB_00ce6e94;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < local_110);
  } while( true );
}


