// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeParentDirectoriesInPlace
// Entry Point: 00c63488
// Size: 440 bytes
// Signature: undefined __cdecl removeParentDirectoriesInPlace(basic_string * param_1)


/* PathUtil::removeParentDirectoriesInPlace(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

size_t PathUtil::removeParentDirectoriesInPlace(basic_string *param_1)

{
  void *pvVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  size_t __n;
  ulong uVar8;
  byte *__s2;
  void *pvVar9;
  
  __s2 = PARENT_DIRECTORY_SEPARATOR;
  bVar2 = *(byte *)param_1;
  bVar3 = (bVar2 & 1) == 0;
  sVar5 = strlen(PARENT_DIRECTORY_SEPARATOR);
  if (sVar5 != 0) {
    __n = sVar5;
    pvVar9 = (void *)((long)param_1 + 1);
    if ((bVar2 & 1) != 0) {
      pvVar9 = *(void **)(param_1 + 4);
    }
    do {
      uVar8 = (ulong)(bVar2 >> 1);
      if (!bVar3) {
        uVar8 = *(ulong *)(param_1 + 2);
      }
      if ((long)uVar8 < (long)__n) {
        return 1;
      }
      pvVar1 = (void *)((long)pvVar9 + uVar8);
      bVar2 = *__s2;
      pvVar6 = pvVar9;
      while( true ) {
        if (0xfffffffffffffffe < uVar8 - __n) {
          return 1;
        }
        pvVar6 = memchr(pvVar6,(uint)bVar2,(uVar8 - __n) + 1);
        if (pvVar6 == (void *)0x0) {
          return 1;
        }
        iVar4 = memcmp(pvVar6,__s2,__n);
        if (iVar4 == 0) break;
        pvVar6 = (void *)((long)pvVar6 + 1);
        uVar8 = (long)pvVar1 - (long)pvVar6;
        if ((long)uVar8 < (long)__n) {
          return 1;
        }
      }
      if (pvVar6 == pvVar1) {
        return 1;
      }
      uVar8 = (long)pvVar6 + (1 - (long)pvVar9);
      if (uVar8 < 3) {
        return (ulong)((uVar8 & 7) == 0);
      }
      if (*(char *)((long)pvVar6 + -1) != '/') {
        return 0;
      }
      lVar7 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                        ((char)param_1,0x2f);
      if (lVar7 == -1) {
        uVar8 = 0;
      }
      else {
        uVar8 = lVar7 + 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      erase((ulong)param_1,uVar8);
      __s2 = PARENT_DIRECTORY_SEPARATOR;
      bVar2 = *(byte *)param_1;
      bVar3 = (bVar2 & 1) == 0;
      pvVar9 = (void *)((long)param_1 + 1);
      if (!bVar3) {
        pvVar9 = *(void **)(param_1 + 4);
      }
      __n = strlen(PARENT_DIRECTORY_SEPARATOR);
      sVar5 = 0;
    } while (__n != 0);
  }
  return sVar5;
}


