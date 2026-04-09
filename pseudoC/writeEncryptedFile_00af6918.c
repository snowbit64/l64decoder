// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeEncryptedFile
// Entry Point: 00af6918
// Size: 216 bytes
// Signature: undefined __thiscall writeEncryptedFile(GiantsAdsProvider * this, basic_string * param_1, uchar * param_2, uint param_3)


/* GiantsAdsProvider::writeEncryptedFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned char const*,
   unsigned int) */

bool __thiscall
GiantsAdsProvider::writeEncryptedFile
          (GiantsAdsProvider *this,basic_string *param_1,uchar *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uchar *__s;
  long *plVar4;
  char *pcVar5;
  
  __s = (uchar *)operator_new__((ulong)(param_3 + 0x10));
  memset(__s,0,(ulong)(param_3 + 0x10));
  iVar2 = AESCipher::encrypt(*(AESCipher **)(this + 0x198),param_2,param_3,__s);
  pcVar5 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar5 = (char *)((long)param_1 + 1);
  }
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar5,1,
                                    false);
  if (plVar4 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,__s,iVar2);
    bVar1 = iVar3 == iVar2;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  operator_delete__(__s);
  return bVar1;
}


