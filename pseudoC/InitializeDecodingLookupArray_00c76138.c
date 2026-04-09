// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializeDecodingLookupArray
// Entry Point: 00c76138
// Size: 176 bytes
// Signature: undefined __cdecl InitializeDecodingLookupArray(int * param_1, uchar * param_2, uint param_3, bool param_4)


/* CryptoPP::BaseN_Decoder::InitializeDecodingLookupArray(int*, unsigned char const*, unsigned int,
   bool) */

void CryptoPP::BaseN_Decoder::InitializeDecodingLookupArray
               (int *param_1,uchar *param_2,uint param_3,bool param_4)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  memset(param_1,0xff,0x400);
  if (param_3 != 0) {
    uVar2 = 0;
    if (param_4) {
      do {
        bVar1 = param_2[uVar2];
        uVar4 = (ulong)bVar1;
        if (0xffffffe5 < (bVar1 & 0xffffffdf) - 0x5b) {
          uVar3 = bVar1 ^ 0x20;
          if (0x19 < bVar1 - 0x61) {
            uVar3 = (uint)bVar1;
          }
          param_1[uVar3] = (int)uVar2;
          bVar1 = param_2[uVar2];
          uVar3 = bVar1 | 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar3 = (uint)bVar1;
          }
          uVar4 = (ulong)uVar3;
        }
        param_1[uVar4] = (int)uVar2;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
    else {
      do {
        param_1[param_2[uVar2]] = (int)uVar2;
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
  }
  return;
}


