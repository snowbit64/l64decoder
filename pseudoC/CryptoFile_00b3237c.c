// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CryptoFile
// Entry Point: 00b3237c
// Size: 284 bytes
// Signature: undefined __thiscall CryptoFile(CryptoFile * this, File * param_1, FILE_ITEM * param_2, AESCipher * param_3, CustomCipher * param_4, ulonglong param_5)


/* CryptoFile::CryptoFile(File*, CryptoFileArchive::FILE_ITEM*, AESCipher*, CustomCipher*, unsigned
   long long) */

void __thiscall
CryptoFile::CryptoFile
          (CryptoFile *this,File *param_1,FILE_ITEM *param_2,AESCipher *param_3,
          CustomCipher *param_4,ulonglong param_5)

{
  undefined4 uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong uVar5;
  
  MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)this);
  uVar5 = *(ulong *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined ***)this = &PTR__CryptoFile_00fe9678;
                    /* try { // try from 00b323d0 to 00b323ef has its CatchHandler @ 00b324a0 */
  puVar3 = (uchar *)operator_new__(uVar5 & 0xffffffff);
  (**(code **)(*(long *)param_1 + 0x38))(param_1,*(undefined8 *)(param_2 + 0x18));
                    /* try { // try from 00b323f8 to 00b32407 has its CatchHandler @ 00b3249c */
  iVar2 = (**(code **)(*(long *)param_1 + 0x28))(param_1,puVar3,uVar5 & 0xffffffff);
  if (iVar2 == (int)uVar5) {
                    /* try { // try from 00b32410 to 00b32447 has its CatchHandler @ 00b32498 */
    puVar4 = (uchar *)operator_new__(uVar5 & 0xffffffff);
    if (param_3 == (AESCipher *)0x0) {
      CustomCipher::decrypt(param_4,puVar3,*(uint *)(param_2 + 8),puVar4);
    }
    else {
      AESCipher::decrypt(param_3,puVar3,*(uint *)(param_2 + 8),puVar4);
    }
    if ((*(void **)(this + 8) != (void *)0x0) && (this[0x10] != (CryptoFile)0x0)) {
      operator_delete__(*(void **)(this + 8));
    }
    *(uchar **)(this + 8) = puVar4;
    *(undefined4 *)(this + 0x14) = uVar1;
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x1c) = uVar1;
    this[0x10] = (CryptoFile)0x1;
  }
  operator_delete__(puVar3);
  *(ulonglong *)(this + 0x20) = param_5;
  return;
}


