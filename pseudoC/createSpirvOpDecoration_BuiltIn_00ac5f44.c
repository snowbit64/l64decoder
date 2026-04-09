// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSpirvOpDecoration_BuiltIn
// Entry Point: 00ac5f44
// Size: 88 bytes
// Signature: undefined __thiscall createSpirvOpDecoration_BuiltIn(SpirvUtil * this, uint param_1, SpvBuiltIn_ param_2)


/* SpirvUtil::createSpirvOpDecoration_BuiltIn(unsigned int, SpvBuiltIn_) */

void __thiscall
SpirvUtil::createSpirvOpDecoration_BuiltIn(SpirvUtil *this,uint param_1,SpvBuiltIn_ param_2)

{
  undefined8 *in_x8;
  undefined4 *puVar1;
  ulong uVar2;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00ac5f68 to 00ac5f73 has its CatchHandler @ 00ac5f9c */
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)in_x8,4);
  puVar1 = (undefined4 *)*in_x8;
  uVar2 = 3;
  *puVar1 = 0x40047;
  puVar1[1] = (int)this;
  puVar1[2] = 0xb;
  do {
    puVar1[uVar2] = param_1;
    uVar2 = (ulong)((int)uVar2 + 1);
  } while( true );
}


