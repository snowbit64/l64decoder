// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSpirvOpDecoration
// Entry Point: 00ac5fbc
// Size: 96 bytes
// Signature: undefined __cdecl findSpirvOpDecoration(uint * param_1, uint param_2, uint param_3, SpvDecoration_ param_4)


/* SpirvUtil::findSpirvOpDecoration(unsigned int const*, unsigned int, unsigned int, SpvDecoration_)
    */

undefined8
SpirvUtil::findSpirvOpDecoration(uint *param_1,uint param_2,uint param_3,SpvDecoration_ param_4)

{
  uint *puVar1;
  
  if (5 < param_2) {
    puVar1 = param_1 + 5;
    do {
      if ((((*puVar1 & 0xffff) == 0x47) && (puVar1[1] == param_3)) && (puVar1[2] == param_4)) {
        return 1;
      }
      puVar1 = (uint *)((long)puVar1 + ((ulong)(*puVar1 >> 0xe) & 0x3fffc));
    } while (puVar1 < param_1 + param_2);
  }
  return 0;
}


