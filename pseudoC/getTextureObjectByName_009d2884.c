// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureObjectByName
// Entry Point: 009d2884
// Size: 248 bytes
// Signature: undefined __thiscall getTextureObjectByName(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::getTextureObjectByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

byte * __thiscall
ProceduralPlacementManager::getTextureObjectByName
          (ProceduralPlacementManager *this,basic_string *param_1)

{
  long lVar1;
  size_t __n;
  void *__s1;
  byte bVar2;
  byte bVar3;
  size_t sVar4;
  byte *pbVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  byte *__s2;
  byte *pbVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(this + 8);
  __n = *(size_t *)(param_1 + 2);
  __s1 = *(void **)(param_1 + 4);
  bVar2 = *(byte *)param_1;
  lVar8 = *(long *)(this + 0x10) - lVar1;
  if ((bVar2 & 1) == 0) {
    __s1 = (void *)((long)param_1 + 1);
    __n = (ulong)(bVar2 >> 1);
  }
  if (lVar8 != 0) {
    uVar10 = 0;
    do {
      pbVar9 = *(byte **)(lVar1 + uVar10 * 8);
      bVar3 = *pbVar9;
      sVar4 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar4 = *(size_t *)(pbVar9 + 8);
      }
      if (__n == sVar4) {
        __s2 = *(byte **)(pbVar9 + 0x10);
        if ((bVar3 & 1) == 0) {
          __s2 = pbVar9 + 1;
        }
        sVar4 = (ulong)(bVar2 >> 1);
        pbVar5 = (byte *)((long)param_1 + 1);
        sVar6 = __n;
        if ((bVar2 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) {
              return pbVar9;
            }
            if (*pbVar5 != *__s2) break;
            sVar4 = sVar4 - 1;
            __s2 = __s2 + 1;
            pbVar5 = pbVar5 + 1;
            sVar6 = sVar4;
          }
        }
        else {
          if (__n == 0) {
            return pbVar9;
          }
          iVar7 = memcmp(__s1,__s2,__n);
          if (iVar7 == 0) {
            return pbVar9;
          }
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar8 >> 3));
  }
  return (byte *)0x0;
}


