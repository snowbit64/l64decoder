// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRuleObject
// Entry Point: 009e5038
// Size: 260 bytes
// Signature: undefined __thiscall removeRuleObject(ProceduralPlacementRule * this, basic_string * param_1)


/* ProceduralPlacementRule::removeRuleObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementRule::removeRuleObject(ProceduralPlacementRule *this,basic_string *param_1)

{
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  char *__s2;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  void *__s1;
  long *__dest;
  long *plVar9;
  
  __dest = *(long **)(this + 0x68);
  plVar9 = *(long **)(this + 0x70);
  if (__dest != plVar9) {
    do {
      while( true ) {
        lVar8 = *__dest;
        bVar3 = *(byte *)param_1;
        bVar2 = *(byte *)(lVar8 + 0x48);
        uVar6 = (ulong)(bVar2 >> 1);
        sVar4 = uVar6;
        if ((bVar2 & 1) != 0) {
          sVar4 = *(size_t *)(lVar8 + 0x50);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 2);
        }
        if (sVar4 != sVar1) break;
        __s1 = *(void **)(lVar8 + 0x58);
        if ((bVar2 & 1) == 0) {
          __s1 = (void *)(lVar8 + 0x49);
        }
        __s2 = (char *)((long)param_1 + 1);
        if ((bVar3 & 1) != 0) {
          __s2 = *(char **)(param_1 + 4);
        }
        if ((bVar2 & 1) == 0) {
          if (sVar4 != 0) {
            pcVar7 = (char *)(lVar8 + 0x49);
            do {
              if (*pcVar7 != *__s2) goto LAB_009e5068;
              uVar6 = uVar6 - 1;
              pcVar7 = pcVar7 + 1;
              __s2 = __s2 + 1;
            } while (uVar6 != 0);
          }
        }
        else if ((sVar4 != 0) && (iVar5 = memcmp(__s1,__s2,sVar4), iVar5 != 0)) break;
        sVar4 = (long)plVar9 - (long)(__dest + 1);
        if (sVar4 != 0) {
          memmove(__dest,__dest + 1,sVar4);
        }
        plVar9 = (long *)((long)__dest + sVar4);
        *(long **)(this + 0x70) = plVar9;
        if (__dest == plVar9) {
          return;
        }
      }
LAB_009e5068:
      __dest = __dest + 1;
    } while (__dest != plVar9);
  }
  return;
}


