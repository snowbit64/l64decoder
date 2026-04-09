// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeIndexMask
// Entry Point: 009d31cc
// Size: 384 bytes
// Signature: undefined __thiscall removeIndexMask(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::removeIndexMask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::removeIndexMask(ProceduralPlacementManager *this,basic_string *param_1)

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
  void *__dest;
  basic_string local_70 [2];
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  __dest = *(void **)(this + 0x68);
  if (__dest != *(void **)(this + 0x70)) {
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
            if (cVar2 != cVar3) goto LAB_009d3220;
          }
        }
        else if (sVar5 == 0) {
          operator_delete(local_60);
        }
        else {
          iVar7 = memcmp(__s1,__s2,sVar5);
          operator_delete(pcVar9);
          if (iVar7 != 0) goto LAB_009d3220;
        }
        sVar5 = *(long *)(this + 0x70) - (long)(void *)((long)__dest + 8);
        if (sVar5 != 0) {
          memmove(__dest,(void *)((long)__dest + 8),sVar5);
        }
        *(size_t *)(this + 0x70) = (long)__dest + sVar5;
        break;
      }
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
LAB_009d3220:
      __dest = (void *)((long)__dest + 8);
    } while (__dest != *(void **)(this + 0x70));
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


