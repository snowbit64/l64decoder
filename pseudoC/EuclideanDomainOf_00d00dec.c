// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EuclideanDomainOf
// Entry Point: 00d00dec
// Size: 572 bytes
// Signature: undefined EuclideanDomainOf(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::EuclideanDomainOf() */

void CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::EuclideanDomainOf(void)

{
  undefined8 *in_x0;
  undefined8 *puVar1;
  
  in_x0[1] = &PTR__AbstractGroup_010009d8;
  in_x0[2] = in_x0;
  *in_x0 = &PTR__AbstractEuclideanDomain_00ff6440;
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
  in_x0[6] = 2;
  in_x0[5] = 0x3fffffffffffffff;
  in_x0[3] = &PTR__Integer_0100c890;
  puVar1 = (undefined8 *)UnalignedAllocate(8);
  *(undefined4 *)(in_x0 + 8) = 0;
  in_x0[7] = puVar1;
  *puVar1 = 0;
  *in_x0 = &PTR__EuclideanDomainOf_0100cc70;
  DataMemoryBarrier(2,3);
  if ((DAT_02120808 & 1) == 0) {
    DAT_02120978 = Baseline_MultiplyTop2;
    DAT_02120980 = Baseline_MultiplyTop4;
    DAT_021208a0 = Baseline_Multiply2;
    DAT_021208a8 = Baseline_Multiply4;
    DAT_021208b0 = Baseline_Multiply8;
    DAT_02120930 = Baseline_MultiplyBottom2;
    DAT_02120938 = Baseline_MultiplyBottom4;
    DAT_021208e8 = Baseline_Square2;
    DAT_02120940 = Baseline_MultiplyBottom8;
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
  in_x0[9] = &PTR__Integer_0100c890;
  in_x0[0xc] = 2;
  in_x0[0xb] = 0x3fffffffffffffff;
                    /* try { // try from 00d00ff4 to 00d00ffb has its CatchHandler @ 00d01028 */
  puVar1 = (undefined8 *)UnalignedAllocate(8);
  in_x0[0xd] = puVar1;
  *(undefined4 *)(in_x0 + 0xe) = 0;
  *puVar1 = 0;
  return;
}


