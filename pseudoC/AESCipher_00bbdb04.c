// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AESCipher
// Entry Point: 00bbdb04
// Size: 172 bytes
// Signature: undefined __thiscall AESCipher(AESCipher * this, int param_1, uchar * param_2)


/* AESCipher::AESCipher(int, unsigned char const*) */

void __thiscall AESCipher::AESCipher(AESCipher *this,int param_1,uchar *param_2)

{
  uint uVar1;
  CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption>
  *this_00;
  CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
  *this_01;
  AESCipher *__dest;
  ulong __n;
  undefined8 *puVar2;
  
  uVar1 = (uint)param_1 >> 3 & 0x1f;
  if ((param_1 & 0xffffffbfU) != 0x80) {
    uVar1 = 0x20;
  }
  __n = (ulong)uVar1;
  __dest = this + 8;
  *(undefined ***)this = &PTR__AESCipher_00feb610;
  memcpy(__dest,param_2,__n);
  puVar2 = (undefined8 *)(this + 0x28);
  *puVar2 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this_00 = (CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption>
             *)operator_new(0xb0);
                    /* try { // try from 00bbdb68 to 00bbdb77 has its CatchHandler @ 00bbdbb4 */
  CryptoPP::
  CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption>
  ::CipherModeFinalTemplate_CipherHolder(this_00,(uchar *)__dest,__n,(uchar *)puVar2);
  *(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)0,CryptoPP::Rijndael::Enc>,CryptoPP::CBC_Encryption>
    **)(this + 0x38) = this_00;
  this_01 = (CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
             *)operator_new(0xd0);
                    /* try { // try from 00bbdb88 to 00bbdb97 has its CatchHandler @ 00bbdbb0 */
  CryptoPP::
  CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
  ::CipherModeFinalTemplate_CipherHolder(this_01,(uchar *)__dest,__n,(uchar *)puVar2);
  *(CipherModeFinalTemplate_CipherHolder<CryptoPP::BlockCipherFinal<(CryptoPP::CipherDir)1,CryptoPP::Rijndael::Dec>,CryptoPP::CBC_Decryption>
    **)(this + 0x40) = this_01;
  return;
}


