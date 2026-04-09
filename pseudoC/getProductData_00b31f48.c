// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProductData
// Entry Point: 00b31f48
// Size: 44 bytes
// Signature: undefined __thiscall getProductData(CryptoFileArchive * this, uint * param_1, KEY_TYPE * param_2, ulonglong * param_3)


/* CryptoFileArchive::getProductData(unsigned int&, IFileLoader::KEY_TYPE&, unsigned long long&) */

bool __thiscall
CryptoFileArchive::getProductData
          (CryptoFileArchive *this,uint *param_1,KEY_TYPE *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  CryptoFileArchive CVar2;
  ulonglong uVar3;
  
  CVar2 = this[0x68];
  if (CVar2 != (CryptoFileArchive)0x0) {
    uVar1 = *(undefined4 *)(this + 0x78);
    uVar3 = *(ulonglong *)(this + 0x70);
    *param_1 = *(uint *)(this + 0x6c);
    *(undefined4 *)param_2 = uVar1;
    *param_3 = uVar3;
  }
  return CVar2 != (CryptoFileArchive)0x0;
}


