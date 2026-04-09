// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CipherModeFinalTemplate_ExternalCipher
// Entry Point: 00c817e8
// Size: 132 bytes
// Signature: undefined __thiscall CipherModeFinalTemplate_ExternalCipher(CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay> * this, BlockCipher * param_1)


/* CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay>::CipherModeFinalTemplate_ExternalCipher(CryptoPP::BlockCipher&)
    */

void __thiscall
CryptoPP::CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay>::
CipherModeFinalTemplate_ExternalCipher
          (CipherModeFinalTemplate_ExternalCipher<CryptoPP::ECB_OneWay> *this,BlockCipher *param_1)

{
  *(undefined ***)this = &PTR__SimpleKeyingInterface_00fef588;
  Algorithm::Algorithm((Algorithm *)(this + 8),true);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined ***)this = &PTR__BlockOrientedCipherModeBase_00ff1a00;
  *(undefined ***)(this + 8) = &PTR__CipherModeFinalTemplate_ExternalCipher_00ff1ae8;
                    /* try { // try from 00c81844 to 00c8185f has its CatchHandler @ 00c8186c */
  SimpleKeyingInterface::ThrowIfResynchronizable();
  *(BlockCipher **)(this + 0x10) = param_1;
  (**(code **)(*(long *)this + 0x98))(this);
  return;
}


