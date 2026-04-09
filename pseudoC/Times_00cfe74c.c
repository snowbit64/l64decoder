// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Times
// Entry Point: 00cfe74c
// Size: 428 bytes
// Signature: undefined __cdecl Times(Integer * param_1)


/* CryptoPP::Integer::Times(CryptoPP::Integer const&) const */

void CryptoPP::Integer::Times(Integer *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Integer *in_x1;
  undefined8 *in_x8;
  long lVar3;
  long lVar4;
  
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
                    /* try { // try from 00cfe86c to 00cfe87b has its CatchHandler @ 00cfe8f8 */
  PositiveMultiply((Integer *)in_x8,param_1,in_x1);
  if ((*(int *)(param_1 + 0x28) != 1) != (*(int *)(in_x1 + 0x28) != 1)) {
    if ((*(int *)(in_x8 + 5) != 1) && (*(int *)in_x8[4] == 0)) {
      lVar3 = in_x8[3];
      do {
        if (lVar3 == 0) {
          return;
        }
        lVar4 = lVar3 + -1;
        lVar1 = lVar3 + -1;
        lVar3 = lVar4;
      } while (((int *)in_x8[4])[lVar1] == 0);
      if ((int)lVar4 == -1) {
        return;
      }
    }
    *(int *)(in_x8 + 5) = 1 - *(int *)(in_x8 + 5);
  }
  return;
}


