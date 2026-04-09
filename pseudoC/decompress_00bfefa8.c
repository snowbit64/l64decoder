// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decompress
// Entry Point: 00bfefa8
// Size: 204 bytes
// Signature: undefined __cdecl decompress(uchar * param_1, uint param_2, uchar * param_3, uint param_4)


/* CompressionDictionary::decompress(unsigned char const*, unsigned int, unsigned char*, unsigned
   int) */

void CompressionDictionary::decompress(uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  size_t __n;
  byte bVar4;
  byte *pbVar5;
  void *__dest;
  ulong uVar6;
  ulong __n_00;
  
  __dest = (void *)(ulong)param_4;
  pbVar5 = (byte *)(ulong)param_2;
  if ((int)param_3 != 0) {
    uVar6 = (ulong)param_3 & 0xffffffff;
    do {
      while( true ) {
        bVar4 = *pbVar5;
        if (-1 < (char)bVar4) break;
        __n_00 = (ulong)(bVar4 - 0x7f);
        memcpy(__dest,pbVar5 + 1,__n_00);
        pbVar5 = pbVar5 + 1 + __n_00;
        uVar3 = ((int)uVar6 - (uint)bVar4) + 0x7e;
        uVar6 = (ulong)uVar3;
        __dest = (void *)((long)__dest + __n_00);
        if (uVar3 == 0) {
          return;
        }
      }
      pbVar1 = pbVar5 + 1;
      pbVar2 = pbVar5 + 2;
      pbVar5 = pbVar5 + 3;
      uVar3 = (int)uVar6 - 3;
      uVar6 = (ulong)uVar3;
      __n = ((ulong)bVar4 & 0x1f) + 4;
      memcpy(__dest,(void *)(*(long *)param_1 +
                            (ulong)*(uint *)(*(long *)(param_1 + 0x10) +
                                            (((ulong)bVar4 & 0x60) << 0xd |
                                            (ulong)*pbVar1 << 2 | (ulong)*pbVar2 << 10))),__n);
      __dest = (void *)((long)__dest + __n);
    } while (uVar3 != 0);
  }
  return;
}


