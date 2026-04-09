// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: free
// Entry Point: 00af1190
// Size: 348 bytes
// Signature: undefined __thiscall free(SubAllocator * this, uint param_1, uint param_2)


/* SubAllocator::free(unsigned int, unsigned int) */

void __thiscall SubAllocator::free(SubAllocator *this,uint param_1,uint param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  ulong __n;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint local_50;
  uint uStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar2 = *(long *)(this + 8);
  uVar6 = (uint)((ulong)(*(long *)(this + 0x10) - lVar2) >> 3);
  if (uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    uVar5 = 0;
    do {
      puVar7 = (uint *)(lVar2 + (ulong)uVar5 * 8 + 4);
      uVar3 = *puVar7;
      if (param_1 <= uVar3) {
        uVar6 = uVar5;
        if (uVar3 == param_2 + param_1) {
          if (uVar5 != 0) {
            piVar1 = (int *)(lVar2 + (ulong)(uVar5 - 1) * 8);
            if (*piVar1 + piVar1[1] == param_1) {
              __n = ((*(long *)(this + 0x10) - lVar2) - 8U) - lVar8;
              *piVar1 = *piVar1 + param_2 + *(int *)(lVar2 + lVar8);
              if (__n != 0) {
                memmove((void *)(lVar2 + lVar8),(void *)((long)(void *)(lVar2 + lVar8) + 8),__n);
              }
              *(ulong *)(this + 0x10) = lVar2 + (__n & 0xfffffffffffffff8) + lVar8;
              goto LAB_00af12a4;
            }
          }
          *puVar7 = param_1;
          *(uint *)(lVar2 + lVar8) = *(int *)(lVar2 + lVar8) + param_2;
          goto LAB_00af12a4;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      lVar8 = lVar8 + 8;
    } while (uVar6 != uVar5);
    if (uVar6 != 0) {
      piVar1 = (int *)(lVar2 + (ulong)(uVar6 - 1) * 8);
      if (*piVar1 + piVar1[1] == param_1) {
        *piVar1 = *piVar1 + param_2;
        goto LAB_00af12a4;
      }
    }
  }
  local_50 = param_2;
  uStack_4c = param_1;
  std::__ndk1::vector<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>>::insert
            ((vector<SubAllocator::Range,std::__ndk1::allocator<SubAllocator::Range>> *)(this + 8),
             (int)lVar2 + uVar6 * 8,(Range *)&local_50);
LAB_00af12a4:
  this[0x28] = (SubAllocator)0x1;
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


