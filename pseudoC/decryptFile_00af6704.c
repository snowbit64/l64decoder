// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decryptFile
// Entry Point: 00af6704
// Size: 324 bytes
// Signature: undefined __thiscall decryptFile(GiantsAdsProvider * this, basic_string * param_1, uchar * * param_2, uint * param_3)


/* GiantsAdsProvider::decryptFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned char*&, unsigned int&) */

undefined4 __thiscall
GiantsAdsProvider::decryptFile
          (GiantsAdsProvider *this,basic_string *param_1,uchar **param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uchar *__s;
  uchar *__s_00;
  char *pcVar5;
  ulong __n;
  undefined4 uVar6;
  
  pcVar5 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar5 = (char *)((long)param_1 + 1);
  }
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,pcVar5,0,
                                    false);
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar1 = (**(code **)(*plVar4 + 0x48))();
    if (iVar1 < 1) {
      uVar6 = 0;
    }
    else {
      __n = (ulong)iVar1;
      __s = (uchar *)operator_new__(__n);
      memset(__s,0,__n);
      iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,__s,iVar1);
      uVar6 = 0;
      if (iVar2 == iVar1) {
        __s_00 = (uchar *)operator_new__(__n);
        *param_2 = __s_00;
        memset(__s_00,0,__n);
        uVar3 = AESCipher::decrypt(*(AESCipher **)(this + 0x198),__s,iVar1,__s_00);
        if ((int)uVar3 < 1) {
          if (*param_2 != (uchar *)0x0) {
            operator_delete__(*param_2);
          }
          uVar6 = 0;
          *param_2 = (uchar *)0x0;
        }
        else {
          uVar6 = 1;
          *param_3 = uVar3;
        }
      }
      operator_delete__(__s);
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return uVar6;
}


