// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ModularArithmetic
// Entry Point: 00d05d80
// Size: 368 bytes
// Signature: undefined __thiscall ModularArithmetic(ModularArithmetic * this, ModularArithmetic * param_1)


/* CryptoPP::ModularArithmetic::ModularArithmetic(CryptoPP::ModularArithmetic const&) */

void __thiscall
CryptoPP::ModularArithmetic::ModularArithmetic(ModularArithmetic *this,ModularArithmetic *param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_010009d8;
  *(ModularArithmetic **)(this + 0x10) = this;
  *(undefined ***)this = &PTR__ModularArithmetic_0100c910;
  Integer::Integer((Integer *)(this + 0x18),(Integer *)(param_1 + 0x18));
                    /* try { // try from 00d05dd0 to 00d05ddb has its CatchHandler @ 00d05f00 */
  Integer::Integer((Integer *)(this + 0x48),0,*(ulong *)(param_1 + 0x30));
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
  *(undefined8 *)(this + 0x90) = 2;
  *(undefined8 *)(this + 0x88) = 0x3fffffffffffffff;
  *(undefined ***)(this + 0x78) = &PTR__Integer_0100c890;
                    /* try { // try from 00d05ecc to 00d05ed3 has its CatchHandler @ 00d05ef0 */
  puVar1 = (undefined8 *)UnalignedAllocate(8);
  *(undefined8 **)(this + 0x98) = puVar1;
  *(undefined4 *)(this + 0xa0) = 0;
  *puVar1 = 0;
  return;
}


