// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00c82568
// Size: 228 bytes
// Signature: undefined __thiscall CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption> * this, BlockCipher * param_1, uchar * param_2, int param_3)


/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption>::CipherModeFinalTemplate_ExternalCipher(CryptoPP::BlockCipher&,
   unsigned char const*, int) */

void __thiscall
CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption>::
CipherModeFinalTemplate_ExternalCipher
          (CipherModeFinalTemplate_ExternalCipher<CryptoPP::CBC_CTS_Decryption> *this,
          BlockCipher *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__CBC_Decryption_00ff2008;
  *(undefined ***)(this + 8) = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff20f8;
                    /* try { // try from 00c825d8 to 00c8263b has its CatchHandler @ 00c8264c */
  SimpleKeyingInterface::ThrowIfInvalidIV((SimpleKeyingInterface *)this,param_2);
  *(BlockCipher **)(this + 0x10) = param_1;
  (**(code **)(*(long *)this + 0x98))(this);
  (**(code **)(*(long *)this + 0x90))(this,param_3);
  iVar1 = (**(code **)(*(long *)this + 0x40))(this);
  if (iVar1 < 4) {
    (**(code **)(*(long *)this + 0x60))(this,param_2,0xffffffff);
  }
  return;
}


