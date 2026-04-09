// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkNewObjectName
// Entry Point: 009d11dc
// Size: 552 bytes
// Signature: undefined __thiscall checkNewObjectName(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::checkNewObjectName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
ProceduralPlacementManager::checkNewObjectName
          (ProceduralPlacementManager *this,basic_string *param_1)

{
  size_t sVar1;
  long lVar2;
  size_t __n;
  byte *__s2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  
  lVar2 = *(long *)(this + 8);
  __n = *(size_t *)(param_1 + 2);
  __s2 = *(byte **)(param_1 + 4);
  lVar6 = *(long *)(this + 0x10) - lVar2;
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (byte *)((long)param_1 + 1);
    __n = (ulong)(*(byte *)param_1 >> 1);
  }
  if (lVar6 != 0) {
    uVar10 = 0;
    do {
      pbVar8 = *(byte **)(lVar2 + uVar10 * 8);
      bVar3 = *pbVar8;
      sVar7 = (size_t)(bVar3 >> 1);
      sVar1 = sVar7;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar8 + 8);
      }
      if (sVar1 == __n) {
        pbVar9 = *(byte **)(pbVar8 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar9 = pbVar8 + 1;
        }
        pbVar4 = __s2;
        sVar1 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) {
              return 0;
            }
            pbVar8 = pbVar8 + 1;
            if (*pbVar8 != *pbVar4) break;
            sVar7 = sVar7 - 1;
            pbVar4 = pbVar4 + 1;
            sVar1 = sVar7;
          }
        }
        else {
          if (__n == 0) {
            return 0;
          }
          iVar5 = memcmp(pbVar9,__s2,__n);
          if (iVar5 == 0) {
            return 0;
          }
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 >> 3));
  }
  lVar2 = *(long *)(this + 0x20);
  lVar6 = *(long *)(this + 0x28) - lVar2;
  if (lVar6 != 0) {
    uVar10 = 0;
    do {
      pbVar8 = *(byte **)(lVar2 + uVar10 * 8);
      bVar3 = *pbVar8;
      sVar7 = (size_t)(bVar3 >> 1);
      sVar1 = sVar7;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar8 + 8);
      }
      if (sVar1 == __n) {
        pbVar9 = *(byte **)(pbVar8 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar9 = pbVar8 + 1;
        }
        pbVar4 = __s2;
        sVar1 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) {
              return 0;
            }
            pbVar8 = pbVar8 + 1;
            if (*pbVar8 != *pbVar4) break;
            sVar7 = sVar7 - 1;
            pbVar4 = pbVar4 + 1;
            sVar1 = sVar7;
          }
        }
        else {
          if (__n == 0) {
            return 0;
          }
          iVar5 = memcmp(pbVar9,__s2,__n);
          if (iVar5 == 0) {
            return 0;
          }
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 >> 3));
  }
  lVar2 = *(long *)(this + 0x38);
  lVar6 = *(long *)(this + 0x40) - lVar2;
  if (lVar6 != 0) {
    uVar10 = 0;
    do {
      pbVar8 = *(byte **)(lVar2 + uVar10 * 8);
      bVar3 = *pbVar8;
      sVar7 = (size_t)(bVar3 >> 1);
      sVar1 = sVar7;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar8 + 8);
      }
      if (sVar1 == __n) {
        pbVar9 = *(byte **)(pbVar8 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar9 = pbVar8 + 1;
        }
        pbVar4 = __s2;
        sVar1 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar1 == 0) {
              return 0;
            }
            pbVar8 = pbVar8 + 1;
            if (*pbVar8 != *pbVar4) break;
            sVar7 = sVar7 - 1;
            pbVar4 = pbVar4 + 1;
            sVar1 = sVar7;
          }
        }
        else {
          if (__n == 0) {
            return 0;
          }
          iVar5 = memcmp(pbVar9,__s2,__n);
          if (iVar5 == 0) {
            return 0;
          }
        }
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(lVar6 >> 3));
  }
  return 1;
}


