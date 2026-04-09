// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode4bppBlock_xxxA
// Entry Point: 00a8b654
// Size: 260 bytes
// Signature: undefined __cdecl decode4bppBlock_xxxA(uchar * param_1, uchar * param_2, uint param_3)


/* DXTUtil::decode4bppBlock_xxxA(unsigned char const*, unsigned char*, unsigned int) */

void DXTUtil::decode4bppBlock_xxxA(uchar *param_1,uchar *param_2,uint param_3)

{
  ushort uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(ushort *)param_1;
  uVar5 = (ulong)param_3;
  lVar3 = uVar5 * 2;
  bVar2 = (byte)(uVar1 >> 8);
  lVar4 = uVar5 * 3;
  param_2[3] = (byte)uVar1 & 0xf | (byte)((uVar1 & 0xf) << 4);
  param_2[7] = (byte)uVar1 & 0xf0 | (byte)(uVar1 >> 4) & 0xf;
  param_2[0xb] = bVar2 & 0xf | (byte)((uVar1 >> 8 & 0xf) << 4);
  param_2[0xf] = bVar2 >> 4 | bVar2 & 0xf0;
  uVar1 = *(ushort *)(param_1 + 2);
  bVar2 = (byte)(uVar1 >> 8);
  param_2[uVar5 + 3] = (byte)uVar1 & 0xf | (byte)((uVar1 & 0xf) << 4);
  param_2[uVar5 + 7] = (byte)uVar1 & 0xf0 | (byte)(uVar1 >> 4) & 0xf;
  param_2[uVar5 + 0xb] = bVar2 & 0xf | (byte)((uVar1 >> 8 & 0xf) << 4);
  param_2[uVar5 + 0xf] = bVar2 >> 4 | bVar2 & 0xf0;
  uVar1 = *(ushort *)(param_1 + 4);
  bVar2 = (byte)(uVar1 >> 8);
  param_2[lVar3 + 3] = (byte)uVar1 & 0xf | (byte)((uVar1 & 0xf) << 4);
  param_2[lVar3 + 7] = (byte)uVar1 & 0xf0 | (byte)(uVar1 >> 4) & 0xf;
  param_2[lVar3 + 0xb] = bVar2 & 0xf | (byte)((uVar1 >> 8 & 0xf) << 4);
  param_2[lVar3 + 0xf] = bVar2 >> 4 | bVar2 & 0xf0;
  uVar1 = *(ushort *)(param_1 + 6);
  bVar2 = (byte)(uVar1 >> 8);
  param_2[lVar4 + 3] = (byte)uVar1 & 0xf | (byte)((uVar1 & 0xf) << 4);
  param_2[lVar4 + 7] = (byte)uVar1 & 0xf0 | (byte)(uVar1 >> 4) & 0xf;
  param_2[lVar4 + 0xb] = bVar2 & 0xf | (byte)((uVar1 >> 8 & 0xf) << 4);
  param_2[lVar4 + 0xf] = bVar2 >> 4 | bVar2 & 0xf0;
  return;
}


