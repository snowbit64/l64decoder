// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getObjectTypeByName
// Entry Point: 009d2648
// Size: 572 bytes
// Signature: undefined __thiscall getObjectTypeByName(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::getObjectTypeByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
ProceduralPlacementManager::getObjectTypeByName
          (ProceduralPlacementManager *this,basic_string *param_1)

{
  byte *pbVar1;
  long lVar2;
  size_t __n;
  void *__s1;
  byte bVar3;
  byte bVar4;
  size_t sVar5;
  size_t sVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar2 = *(long *)(this + 8);
  pbVar1 = (byte *)((long)param_1 + 1);
  __n = *(size_t *)(param_1 + 2);
  __s1 = *(void **)(param_1 + 4);
  bVar3 = *(byte *)param_1;
  lVar8 = *(long *)(this + 0x10) - lVar2;
  uVar11 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)((long)param_1 + 1);
    __n = uVar11;
  }
  if (lVar8 != 0) {
    uVar12 = 0;
    do {
      pbVar9 = *(byte **)(lVar2 + uVar12 * 8);
      bVar4 = *pbVar9;
      sVar5 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar5 = *(size_t *)(pbVar9 + 8);
      }
      if (__n == sVar5) {
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        pbVar9 = pbVar1;
        sVar5 = uVar11;
        sVar6 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) {
              return 0;
            }
            if (*pbVar9 != *pbVar10) break;
            sVar5 = sVar5 - 1;
            pbVar10 = pbVar10 + 1;
            pbVar9 = pbVar9 + 1;
            sVar6 = sVar5;
          }
        }
        else {
          if (__n == 0) {
            return 0;
          }
          iVar7 = memcmp(__s1,pbVar10,__n);
          if (iVar7 == 0) {
            return 0;
          }
        }
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar8 >> 3));
  }
  lVar2 = *(long *)(this + 0x20);
  lVar8 = *(long *)(this + 0x28) - lVar2;
  if (lVar8 != 0) {
    uVar12 = 0;
    do {
      pbVar9 = *(byte **)(lVar2 + uVar12 * 8);
      bVar4 = *pbVar9;
      sVar5 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar5 = *(size_t *)(pbVar9 + 8);
      }
      if (__n == sVar5) {
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        pbVar9 = pbVar1;
        sVar5 = uVar11;
        sVar6 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) {
              return 1;
            }
            if (*pbVar9 != *pbVar10) break;
            sVar5 = sVar5 - 1;
            pbVar10 = pbVar10 + 1;
            pbVar9 = pbVar9 + 1;
            sVar6 = sVar5;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,pbVar10,__n), iVar7 == 0)) {
          return 1;
        }
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar8 >> 3));
  }
  lVar2 = *(long *)(this + 0x38);
  lVar8 = *(long *)(this + 0x40) - lVar2;
  if (lVar8 != 0) {
    uVar12 = 0;
    do {
      pbVar9 = *(byte **)(lVar2 + uVar12 * 8);
      bVar4 = *pbVar9;
      sVar5 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar5 = *(size_t *)(pbVar9 + 8);
      }
      if (__n == sVar5) {
        pbVar10 = *(byte **)(pbVar9 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar10 = pbVar9 + 1;
        }
        pbVar9 = pbVar1;
        sVar5 = uVar11;
        sVar6 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar6 == 0) {
              return 2;
            }
            if (*pbVar9 != *pbVar10) break;
            sVar5 = sVar5 - 1;
            pbVar10 = pbVar10 + 1;
            pbVar9 = pbVar9 + 1;
            sVar6 = sVar5;
          }
        }
        else if ((__n == 0) || (iVar7 = memcmp(__s1,pbVar10,__n), iVar7 == 0)) {
          return 2;
        }
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar8 >> 3));
  }
  return 0;
}


