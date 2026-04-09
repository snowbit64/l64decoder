// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSpirvOp
// Entry Point: 00ac5e0c
// Size: 116 bytes
// Signature: undefined __thiscall createSpirvOp(SpirvUtil * this, SpvOp_ param_1, uint * param_2, uint param_3)


/* SpirvUtil::createSpirvOp(SpvOp_, unsigned int const*, unsigned int) */

void __thiscall SpirvUtil::createSpirvOp(SpirvUtil *this,SpvOp_ param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  uint **in_x8;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = (int)param_2 + 1;
  *in_x8 = (uint *)0x0;
  in_x8[1] = (uint *)0x0;
  in_x8[2] = (uint *)0x0;
                    /* try { // try from 00ac5e3c to 00ac5e47 has its CatchHandler @ 00ac5e80 */
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)in_x8,(ulong)uVar3);
  puVar2 = *in_x8;
  *puVar2 = (uint)this | uVar3 * 0x10000;
  if ((int)param_2 != 0) {
    uVar3 = 0;
    do {
      uVar1 = (ulong)uVar3;
      uVar3 = uVar3 + 1;
      puVar2[uVar3] = *(uint *)((ulong)param_1 + uVar1 * 4);
    } while( true );
  }
  return;
}


