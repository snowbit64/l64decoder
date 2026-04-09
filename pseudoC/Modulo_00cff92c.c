// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Modulo
// Entry Point: 00cff92c
// Size: 672 bytes
// Signature: undefined __cdecl Modulo(Integer * param_1)


/* CryptoPP::Integer::Modulo(CryptoPP::Integer const&) const */

void CryptoPP::Integer::Modulo(Integer *param_1)

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
  in_x8[3] = 2;
  in_x8[2] = 0x3fffffffffffffff;
  *in_x8 = &PTR__Integer_0100c890;
  puVar3 = (undefined8 *)UnalignedAllocate(8);
  *(undefined4 *)(in_x8 + 5) = 0;
  in_x8[4] = puVar3;
  *puVar3 = 0;
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
  uStack_80 = 2;
  local_88 = 0x3fffffffffffffff;
  local_98[0] = &PTR__Integer_0100c890;
                    /* try { // try from 00cffb34 to 00cffb3b has its CatchHandler @ 00cffbe0 */
  local_78 = (undefined8 *)UnalignedAllocate(8);
  local_70 = 0;
  *local_78 = 0;
                    /* try { // try from 00cffb48 to 00cffb5b has its CatchHandler @ 00cffbd0 */
  Divide((Integer *)in_x8,(Integer *)local_98,param_1,in_x1);
  uVar1 = local_88;
  if (uStack_80 <= local_88) {
    uVar1 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)((long)local_78 + uVar1 * 4 + -4) = 0;
  }
                    /* try { // try from 00cffb94 to 00cffb97 has its CatchHandler @ 00cffbcc */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


