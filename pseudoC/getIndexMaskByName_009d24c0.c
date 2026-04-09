// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexMaskByName
// Entry Point: 009d24c0
// Size: 384 bytes
// Signature: undefined __thiscall getIndexMaskByName(ProceduralPlacementManager * this, basic_string * param_1)


/* ProceduralPlacementManager::getIndexMaskByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
ProceduralPlacementManager::getIndexMaskByName
          (ProceduralPlacementManager *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  char cVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  char *__s2;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  basic_string local_80 [2];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0x70) == *(long *)(this + 0x68)) {
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_80);
      pcVar8 = local_70;
      bVar4 = *(byte *)param_1;
      uVar7 = (ulong)((byte)local_80[0] >> 1);
      __n = uVar7;
      if (((byte)local_80[0] & 1) != 0) {
        __n = local_78;
      }
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 2);
      }
      if (__n == sVar1) {
        __s1 = (char *)((ulong)local_80 | 1);
        if (((byte)local_80[0] & 1) != 0) {
          __s1 = local_70;
        }
        __s2 = (char *)((long)param_1 + 1);
        if ((bVar4 & 1) != 0) {
          __s2 = *(char **)(param_1 + 4);
        }
        if (((byte)local_80[0] & 1) == 0) {
          pcVar8 = (char *)((ulong)local_80 | 1);
          if (__n != 0) {
            do {
              uVar7 = uVar7 - 1;
              cVar2 = *pcVar8;
              cVar3 = *__s2;
              __s2 = __s2 + 1;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 == cVar3 && uVar7 != 0);
            if (((byte)local_80[0] & 1) != 0) {
              operator_delete(local_70);
            }
            if (cVar2 != cVar3) goto LAB_009d2528;
          }
        }
        else if (__n == 0) {
          operator_delete(local_70);
        }
        else {
          iVar6 = memcmp(__s1,__s2,__n);
          operator_delete(pcVar8);
          if (iVar6 != 0) goto LAB_009d2528;
        }
        uVar9 = *(undefined8 *)(*(long *)(this + 0x68) + uVar10 * 8);
      }
      else if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
LAB_009d2528:
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (uVar10 < (ulong)(*(long *)(this + 0x70) - *(long *)(this + 0x68) >> 3));
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


