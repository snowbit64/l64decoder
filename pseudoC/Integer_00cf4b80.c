// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Integer
// Entry Point: 00cf4b80
// Size: 288 bytes
// Signature: undefined __thiscall Integer(Integer * this)


/* CryptoPP::Integer::Integer() */

void __thiscall CryptoPP::Integer::Integer(Integer *this)

{
  undefined8 *puVar1;
  
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
  *(undefined8 *)(this + 0x18) = 2;
  *(undefined8 *)(this + 0x10) = 0x3fffffffffffffff;
  *(undefined ***)this = &PTR__Integer_0100c890;
  puVar1 = (undefined8 *)UnalignedAllocate(8);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 **)(this + 0x20) = puVar1;
  *puVar1 = 0;
  return;
}


