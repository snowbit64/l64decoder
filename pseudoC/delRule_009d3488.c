// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: delRule
// Entry Point: 009d3488
// Size: 408 bytes
// Signature: undefined __thiscall delRule(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::delRule(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::delRule(ProceduralPlacementManager *this,basic_string *param_1)

{
  size_t sVar1;
  char *__s1;
  char cVar2;
  char cVar3;
  byte bVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  char *__s2;
  ulong uVar8;
  char *pcVar9;
  long **__dest;
  long *plVar10;
  basic_string local_70 [2];
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  __dest = *(long ***)(this + 0xb8);
  if (__dest != *(long ***)(this + 0xc0)) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_70);
      pcVar9 = local_60;
      bVar4 = *(byte *)param_1;
      uVar8 = (ulong)((byte)local_70[0] >> 1);
      sVar5 = uVar8;
      if (((byte)local_70[0] & 1) != 0) {
        sVar5 = local_68;
      }
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 2);
      }
      if (sVar5 == sVar1) {
        __s1 = (char *)((ulong)local_70 | 1);
        if (((byte)local_70[0] & 1) != 0) {
          __s1 = local_60;
        }
        __s2 = (char *)((long)param_1 + 1);
        if ((bVar4 & 1) != 0) {
          __s2 = *(char **)(param_1 + 4);
        }
        if (((byte)local_70[0] & 1) == 0) {
          pcVar9 = (char *)((ulong)local_70 | 1);
          if (sVar5 != 0) {
            do {
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar9;
              cVar3 = *__s2;
              __s2 = __s2 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 == cVar3 && uVar8 != 0);
            if (((byte)local_70[0] & 1) != 0) {
              operator_delete(local_60);
            }
            if (cVar2 != cVar3) goto LAB_009d34dc;
          }
        }
        else if (sVar5 == 0) {
          operator_delete(local_60);
        }
        else {
          iVar7 = memcmp(__s1,__s2,sVar5);
          operator_delete(pcVar9);
          if (iVar7 != 0) goto LAB_009d34dc;
        }
        plVar10 = *__dest;
        sVar5 = *(long *)(this + 0xc0) - (long)(__dest + 1);
        if (sVar5 != 0) {
          memmove(__dest,__dest + 1,sVar5);
        }
        *(size_t *)(this + 0xc0) = (long)__dest + sVar5;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        break;
      }
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
LAB_009d34dc:
      __dest = __dest + 1;
    } while (__dest != *(long ***)(this + 0xc0));
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


