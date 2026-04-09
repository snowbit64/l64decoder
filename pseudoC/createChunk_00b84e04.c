// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createChunk
// Entry Point: 00b84e04
// Size: 292 bytes
// Signature: undefined __cdecl createChunk(uint param_1, uint param_2, ushort * param_3, uint param_4)


/* ChunkedBitSquareChunk::createChunk(unsigned int, unsigned int, unsigned short const*, unsigned
   int) */

code ** ChunkedBitSquareChunk::createChunk(uint param_1,uint param_2,ushort *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  code **ppcVar3;
  code *pcVar4;
  
  uVar1 = param_2;
  if (param_1 < 3) {
    uVar1 = param_1;
  }
  ppcVar3 = (code **)operator_new((ulong)(uVar1 << 7 | 0x20));
  *(char *)(ppcVar3 + 2) = (char)uVar1;
  *(char *)((long)ppcVar3 + 0x13) = (char)(param_2 - uVar1);
  if ((param_2 - uVar1 & 0xff) == 0) {
    pcVar4 = writeValueNoPalette;
    *(undefined2 *)((long)ppcVar3 + 0x11) = 0;
    *ppcVar3 = readValueNoPalette;
  }
  else {
    *(char *)((long)ppcVar3 + 0x12) = (char)param_4;
    if ((param_4 == 0) ||
       (memcpy((void *)((long)ppcVar3 + 0x14),param_3,(ulong)param_4 << 1), param_4 < 4)) {
      memset((void *)((long)ppcVar3 + (ulong)param_4 * 2 + 0x14),0xff,(ulong)(3 - param_4) * 2 + 2);
    }
    uVar2 = param_2 - 1;
    if (1 < uVar2) {
      uVar2 = 2;
    }
    *(byte *)((long)ppcVar3 + 0x11) = ~(byte)(-1 << (ulong)(uVar1 & 0x1f));
    pcVar4 = *(code **)(s_pWriteValueFns + (ulong)uVar1 * 8 + (ulong)uVar2 * 0x18);
    *ppcVar3 = (code *)(&s_pReadValueFns)[uVar1];
  }
  ppcVar3[1] = pcVar4;
  memset((void *)((long)ppcVar3 + 0x1c),0,(ulong)(uVar1 << 7 | 4));
  return ppcVar3;
}


