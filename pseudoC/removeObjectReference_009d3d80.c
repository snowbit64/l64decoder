// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeObjectReference
// Entry Point: 009d3d80
// Size: 296 bytes
// Signature: undefined __thiscall removeObjectReference(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::removeObjectReference(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::removeObjectReference
          (ProceduralPlacementManager *this,basic_string *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte *__s2;
  byte **ppbVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  byte *pbVar9;
  byte *__s1;
  ulong uVar10;
  byte **__dest;
  
  lVar7 = *(long *)(this + 0xb8);
  if ((int)((ulong)(*(long *)(this + 0xc0) - lVar7) >> 3) != 0) {
    uVar10 = 0;
    do {
      ProceduralPlacementRule::removeRuleObject
                (*(ProceduralPlacementRule **)(lVar7 + uVar10 * 8),param_1);
      lVar7 = *(long *)(this + 0xb8);
      uVar10 = uVar10 + 1;
    } while (uVar10 < ((ulong)(*(long *)(this + 0xc0) - lVar7) >> 3 & 0xffffffff));
  }
  sVar2 = *(size_t *)(param_1 + 2);
  __s2 = *(byte **)(param_1 + 4);
  __dest = *(byte ***)(this + 0x38);
  ppbVar3 = *(byte ***)(this + 0x40);
  if ((*(byte *)param_1 & 1) == 0) {
    __s2 = (byte *)((long)param_1 + 1);
    sVar2 = (ulong)(*(byte *)param_1 >> 1);
  }
  do {
    if (__dest == ppbVar3) {
      return;
    }
    pbVar9 = *__dest;
    bVar4 = *pbVar9;
    sVar8 = (size_t)(bVar4 >> 1);
    sVar1 = sVar8;
    if ((bVar4 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar9 + 8);
    }
    if (sVar1 == sVar2) {
      __s1 = *(byte **)(pbVar9 + 0x10);
      if ((bVar4 & 1) == 0) {
        __s1 = pbVar9 + 1;
      }
      pbVar5 = __s2;
      sVar1 = sVar2;
      if ((bVar4 & 1) == 0) {
        while( true ) {
          if (sVar1 == 0) goto LAB_009d3e74;
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar5) break;
          sVar8 = sVar8 - 1;
          pbVar5 = pbVar5 + 1;
          sVar1 = sVar8;
        }
      }
      else if ((sVar2 == 0) || (iVar6 = memcmp(__s1,__s2,sVar2), iVar6 == 0)) {
LAB_009d3e74:
        sVar2 = (long)ppbVar3 - (long)(__dest + 1);
        if (sVar2 != 0) {
          memmove(__dest,__dest + 1,sVar2);
        }
        *(size_t *)(this + 0x40) = (long)__dest + sVar2;
        return;
      }
    }
    __dest = __dest + 1;
  } while( true );
}


