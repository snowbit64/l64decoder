// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setProductData
// Entry Point: 00b320e8
// Size: 24 bytes
// Signature: undefined __thiscall setProductData(CryptoFileArchive * this, uint param_1, KEY_TYPE param_2, ulonglong param_3)


/* CryptoFileArchive::setProductData(unsigned int, IFileLoader::KEY_TYPE, unsigned long long) */

void __thiscall
CryptoFileArchive::setProductData
          (CryptoFileArchive *this,undefined4 param_1,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)(this + 0x6c) = param_1;
  *(undefined4 *)(this + 0x78) = param_3;
  *(undefined8 *)(this + 0x70) = param_4;
  this[0x68] = (CryptoFileArchive)0x1;
  return;
}


