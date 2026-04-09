// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UncheckedSetKey
// Entry Point: 00d20794
// Size: 200 bytes
// Signature: undefined __cdecl UncheckedSetKey(uchar * param_1, uint param_2, NameValuePairs * param_3)


/* CryptoPP::MDC<CryptoPP::SHA1>::Enc::UncheckedSetKey(unsigned char const*, unsigned int,
   CryptoPP::NameValuePairs const&) */

void CryptoPP::MDC<CryptoPP::SHA1>::Enc::UncheckedSetKey
               (uchar *param_1,uint param_2,NameValuePairs *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)(ulong)param_2;
  puVar3 = *(uint **)(param_1 + 0x28);
  uVar1 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  *puVar3 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[1] & 0xff00ff00) >> 8 | (puVar2[1] & 0xff00ff) << 8;
  puVar3[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[2] & 0xff00ff00) >> 8 | (puVar2[2] & 0xff00ff) << 8;
  puVar3[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[3] & 0xff00ff00) >> 8 | (puVar2[3] & 0xff00ff) << 8;
  puVar3[3] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[4] & 0xff00ff00) >> 8 | (puVar2[4] & 0xff00ff) << 8;
  puVar3[4] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[5] & 0xff00ff00) >> 8 | (puVar2[5] & 0xff00ff) << 8;
  puVar3[5] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[6] & 0xff00ff00) >> 8 | (puVar2[6] & 0xff00ff) << 8;
  puVar3[6] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[7] & 0xff00ff00) >> 8 | (puVar2[7] & 0xff00ff) << 8;
  puVar3[7] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[8] & 0xff00ff00) >> 8 | (puVar2[8] & 0xff00ff) << 8;
  puVar3[8] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[9] & 0xff00ff00) >> 8 | (puVar2[9] & 0xff00ff) << 8;
  puVar3[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[10] & 0xff00ff00) >> 8 | (puVar2[10] & 0xff00ff) << 8;
  puVar3[10] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[0xb] & 0xff00ff00) >> 8 | (puVar2[0xb] & 0xff00ff) << 8;
  puVar3[0xb] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[0xc] & 0xff00ff00) >> 8 | (puVar2[0xc] & 0xff00ff) << 8;
  puVar3[0xc] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[0xd] & 0xff00ff00) >> 8 | (puVar2[0xd] & 0xff00ff) << 8;
  puVar3[0xd] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[0xe] & 0xff00ff00) >> 8 | (puVar2[0xe] & 0xff00ff) << 8;
  puVar3[0xe] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (puVar2[0xf] & 0xff00ff00) >> 8 | (puVar2[0xf] & 0xff00ff) << 8;
  puVar3[0xf] = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


