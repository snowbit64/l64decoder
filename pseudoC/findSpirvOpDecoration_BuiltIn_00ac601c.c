// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSpirvOpDecoration_BuiltIn
// Entry Point: 00ac601c
// Size: 132 bytes
// Signature: undefined __cdecl findSpirvOpDecoration_BuiltIn(uint * param_1, uint param_2, SpvBuiltIn_ param_3, uint * param_4, uint * param_5)


/* SpirvUtil::findSpirvOpDecoration_BuiltIn(unsigned int const*, unsigned int, SpvBuiltIn_, unsigned
   int&, unsigned int&) */

undefined8
SpirvUtil::findSpirvOpDecoration_BuiltIn
          (uint *param_1,uint param_2,SpvBuiltIn_ param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  
  if (5 < param_2) {
    puVar1 = param_1 + 5;
    do {
      if ((((*puVar1 & 0xffff) == 0x47) && (puVar1[2] == 0xb)) && (puVar1[3] == param_3)) {
        *param_5 = puVar1[1];
        *param_4 = (uint)((long)puVar1 + (((ulong)(*puVar1 >> 0xe) & 0x3fffc) - (long)param_1) >> 2)
        ;
        return 1;
      }
      puVar1 = (uint *)((long)puVar1 + ((ulong)(*puVar1 >> 0xe) & 0x3fffc));
    } while (puVar1 < param_1 + param_2);
  }
  return 0;
}


