// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RabinMillerTest
// Entry Point: 00d11048
// Size: 712 bytes
// Signature: undefined __cdecl RabinMillerTest(RandomNumberGenerator * param_1, Integer * param_2, uint param_3)


/* CryptoPP::RabinMillerTest(CryptoPP::RandomNumberGenerator&, CryptoPP::Integer const&, unsigned
   int) */

bool CryptoPP::RabinMillerTest(RandomNumberGenerator *param_1,Integer *param_2,uint param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  uint uVar6;
  undefined **local_128 [2];
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
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_98,3);
                    /* try { // try from 00d1108c to 00d11097 has its CatchHandler @ 00d11334 */
  iVar3 = Integer::Compare(param_2,(Integer *)local_98);
  uVar4 = local_88;
  if (uStack_80 <= local_88) {
    uVar4 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)((long)local_78 + uVar4 * 4 + -4) = 0;
  }
                    /* try { // try from 00d110d4 to 00d110d7 has its CatchHandler @ 00d11330 */
  UnalignedDeallocate(local_78);
  if (iVar3 < 1) {
    Integer::Integer((Integer *)local_98,2);
                    /* try { // try from 00d111f8 to 00d11203 has its CatchHandler @ 00d11324 */
    iVar3 = Integer::Compare(param_2,(Integer *)local_98);
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
                    /* try { // try from 00d11208 to 00d11213 has its CatchHandler @ 00d11318 */
      Integer::Integer((Integer *)local_c8,3);
                    /* try { // try from 00d11214 to 00d1121f has its CatchHandler @ 00d11314 */
      iVar3 = Integer::Compare(param_2,(Integer *)local_c8);
      bVar2 = iVar3 == 0;
      local_c8[0] = &PTR__Integer_0100c890;
      if (uStack_b0 <= local_b8) {
        local_b8 = uStack_b0;
      }
      for (; local_b8 != 0; local_b8 = local_b8 - 1) {
        *(undefined4 *)((long)local_a8 + local_b8 * 4 + -4) = 0;
      }
                    /* try { // try from 00d11258 to 00d1125b has its CatchHandler @ 00d11310 */
      UnalignedDeallocate(local_a8);
    }
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d112d4 to 00d112d7 has its CatchHandler @ 00d11320 */
    UnalignedDeallocate(local_78);
  }
  else {
    Integer::Integer((Integer *)local_98);
    if (param_3 == 0) {
      bVar2 = false;
    }
    else {
      uVar6 = 0;
      bVar2 = true;
      do {
                    /* try { // try from 00d110f8 to 00d11103 has its CatchHandler @ 00d1134c */
        Integer::Integer((Integer *)local_c8,2);
                    /* try { // try from 00d11104 to 00d1110f has its CatchHandler @ 00d11378 */
        Integer::Integer((Integer *)local_128,2);
                    /* try { // try from 00d11110 to 00d1111f has its CatchHandler @ 00d11344 */
        Integer::Minus(param_2);
                    /* try { // try from 00d11120 to 00d11133 has its CatchHandler @ 00d11360 */
        pppuVar5 = local_c8;
        Integer::Randomize((Integer *)local_98,param_1,(Integer *)pppuVar5,(Integer *)local_f8);
        uVar4 = local_e8;
        if (uStack_e0 <= local_e8) {
          uVar4 = uStack_e0;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_d8 + uVar4 * 4 + -4) = 0;
        }
        local_f8[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00d11160 to 00d11163 has its CatchHandler @ 00d11340 */
        UnalignedDeallocate(local_d8);
        local_128[0] = &PTR__Integer_0100c890;
        uVar4 = local_118;
        if (uStack_110 <= local_118) {
          uVar4 = uStack_110;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_108 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d11194 to 00d11197 has its CatchHandler @ 00d1135c */
        UnalignedDeallocate(local_108);
        local_c8[0] = &PTR__Integer_0100c890;
        uVar4 = local_b8;
        if (uStack_b0 <= local_b8) {
          uVar4 = uStack_b0;
        }
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)((long)local_a8 + uVar4 * 4 + -4) = 0;
        }
                    /* try { // try from 00d111c8 to 00d111cb has its CatchHandler @ 00d1133c */
        UnalignedDeallocate(local_a8);
                    /* try { // try from 00d111cc to 00d111d7 has its CatchHandler @ 00d11354 */
        uVar4 = IsStrongProbablePrime((CryptoPP *)param_2,(Integer *)local_98,(Integer *)pppuVar5);
        if ((uVar4 & 1) == 0) break;
        uVar6 = uVar6 + 1;
        bVar2 = uVar6 < param_3;
      } while (uVar6 != param_3);
    }
    local_98[0] = &PTR__Integer_0100c890;
    if (uStack_80 <= local_88) {
      local_88 = uStack_80;
    }
    for (; local_88 != 0; local_88 = local_88 - 1) {
      *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
    }
                    /* try { // try from 00d11294 to 00d11297 has its CatchHandler @ 00d1132c */
    UnalignedDeallocate(local_78);
    bVar2 = (bool)(bVar2 ^ 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


