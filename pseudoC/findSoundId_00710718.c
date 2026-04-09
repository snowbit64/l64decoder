// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSoundId
// Entry Point: 00710718
// Size: 256 bytes
// Signature: undefined __thiscall findSoundId(AnimalSoundSystem * this, basic_string * param_1)


/* AnimalSoundSystem::findSoundId(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

ulong __thiscall AnimalSoundSystem::findSoundId(AnimalSoundSystem *this,basic_string *param_1)

{
  size_t sVar1;
  long lVar2;
  size_t __n;
  char *__s2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  void *__s1;
  ulong uVar9;
  ulong uVar10;
  
  lVar2 = *(long *)(this + 0x18);
  __n = *(size_t *)(param_1 + 2);
  __s2 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (char *)((long)param_1 + 1);
    __n = (ulong)(*(byte *)param_1 >> 1);
  }
  if (*(long *)(this + 0x20) - lVar2 != 0) {
    uVar9 = 0;
    uVar10 = (*(long *)(this + 0x20) - lVar2 >> 3) * 0x2e8ba2e8ba2e8ba3;
    do {
      lVar6 = lVar2 + uVar9 * 0x58;
      bVar3 = *(byte *)(lVar6 + 8);
      uVar5 = (ulong)(bVar3 >> 1);
      sVar1 = uVar5;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x10);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar2 + uVar9 * 0x58 + 0x18);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar6 + 9);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return uVar9;
          }
          pcVar7 = (char *)(lVar6 + 9);
          pcVar8 = __s2;
          while (*pcVar7 == *pcVar8) {
            uVar5 = uVar5 - 1;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
            if (uVar5 == 0) {
              return uVar9;
            }
          }
        }
        else {
          if (__n == 0) {
            return uVar9;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return uVar9;
          }
        }
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 <= uVar10 && uVar10 - uVar9 != 0);
  }
  return 0xffffffff;
}


