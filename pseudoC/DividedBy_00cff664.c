// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DividedBy
// Entry Point: 00cff664
// Size: 672 bytes
// Signature: undefined __cdecl DividedBy(Integer * param_1)


/* CryptoPP::Integer::DividedBy(CryptoPP::Integer const&) const */

void CryptoPP::Integer::DividedBy(Integer *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  Integer *in_x1;
  undefined8 *in_x8;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  undefined8 *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120998 = Baseline_MultiplyTop16;
    DAT_02120808 = 1;
    DataMemoryBarrier(2,3);
  }
  local_98[0] = &PTR__Integer_0100c890;
  uStack_80 = 2;
  local_88 = 0x3fffffffffffffff;
  local_78 = (undefined8 *)UnalignedAllocate(8);
  local_70 = 0;
  *local_78 = 0;
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_02120940 = Baseline_MultiplyBottom8;
    DAT_021208e8 = Baseline_Square2;
    DAT_021208f0 = Baseline_Square4;
    DAT_021208f8 = Baseline_Square8;
    DAT_02120988 = Baseline_MultiplyTop8;
    DAT_021208c0 = Baseline_Multiply16;
    DAT_02120950 = Baseline_MultiplyBottom16;
    DAT_02120908 = Baseline_Square16;
    DAT_02120808 = 1;
    DAT_02120998 = Baseline_MultiplyTop16;
    DataMemoryBarrier(2,3);
  }
  *in_x8 = &PTR__Integer_0100c890;
  in_x8[3] = 2;
  in_x8[2] = 0x3fffffffffffffff;
                    /* try { // try from 00cff86c to 00cff873 has its CatchHandler @ 00cff918 */
  puVar3 = (undefined8 *)UnalignedAllocate(8);
  in_x8[4] = puVar3;
  *(undefined4 *)(in_x8 + 5) = 0;
  *puVar3 = 0;
                    /* try { // try from 00cff880 to 00cff893 has its CatchHandler @ 00cff908 */
  Divide((Integer *)local_98,(Integer *)in_x8,param_1,in_x1);
  uVar1 = local_88;
  if (uStack_80 <= local_88) {
    uVar1 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_78 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cff8cc to 00cff8cf has its CatchHandler @ 00cff904 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


