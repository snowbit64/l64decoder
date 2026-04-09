// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSpirvOpDecoration
// Entry Point: 00ac5ea0
// Size: 132 bytes
// Signature: undefined __thiscall createSpirvOpDecoration(SpirvUtil * this, uint param_1, SpvDecoration_ param_2, uint * param_3, uint param_4)


/* SpirvUtil::createSpirvOpDecoration(unsigned int, SpvDecoration_, unsigned int const*, unsigned
   int) */

void __thiscall
SpirvUtil::createSpirvOpDecoration
          (SpirvUtil *this,uint param_1,SpvDecoration_ param_2,uint *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint **in_x8;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_3 + 3;
  *in_x8 = (uint *)0x0;
  in_x8[1] = (uint *)0x0;
  in_x8[2] = (uint *)0x0;
                    /* try { // try from 00ac5ed4 to 00ac5edf has its CatchHandler @ 00ac5f24 */
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)in_x8,(ulong)uVar4);
  puVar3 = *in_x8;
  puVar3[2] = param_1;
  *puVar3 = uVar4 * 0x10000 | 0x47;
  puVar3[1] = (uint)this;
  if ((int)param_3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = (ulong)uVar4;
      uVar2 = uVar4 + 3;
      uVar4 = uVar4 + 1;
      puVar3[uVar2] = *(uint *)((ulong)param_2 + uVar1 * 4);
    } while( true );
  }
  return;
}


