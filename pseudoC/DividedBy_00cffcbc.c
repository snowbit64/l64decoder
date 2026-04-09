// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DividedBy
// Entry Point: 00cffcbc
// Size: 364 bytes
// Signature: undefined __cdecl DividedBy(uint param_1)


/* CryptoPP::Integer::DividedBy(unsigned int) const */

void CryptoPP::Integer::DividedBy(uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint in_w1;
  undefined8 *in_x8;
  uint uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
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
  puVar2 = (undefined8 *)UnalignedAllocate(8);
  *(undefined4 *)(in_x8 + 5) = 0;
  in_x8[4] = puVar2;
  *puVar2 = 0;
                    /* try { // try from 00cffdec to 00cffdff has its CatchHandler @ 00cffe28 */
  Divide(&uStack_3c,(Integer *)in_x8,(Integer *)(ulong)param_1,in_w1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


