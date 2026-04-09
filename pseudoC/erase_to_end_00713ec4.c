// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_to_end
// Entry Point: 00713ec4
// Size: 232 bytes
// Signature: undefined __cdecl __erase_to_end(__deque_iterator param_1)


/* std::__ndk1::deque<BTBehavior*, std::__ndk1::allocator<BTBehavior*>
   >::__erase_to_end(std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior* const*, BTBehavior*
   const&, BTBehavior* const* const*, long, 512l>) */

void std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::__erase_to_end
               (__deque_iterator param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *in_x1;
  long in_x2;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar4 = (ulong)param_1;
  lVar5 = *(long *)(uVar4 + 0x10);
  uVar6 = *(long *)(uVar4 + 0x20) + *(long *)(uVar4 + 0x28);
  plVar1 = (long *)(*(long *)(uVar4 + 8) + (uVar6 >> 6 & 0x3fffffffffffff8));
  lVar3 = lVar5 - *(long *)(uVar4 + 8);
  if (lVar3 == 0) {
    lVar7 = 0;
    if (in_x2 == 0) {
      return;
    }
  }
  else {
    lVar7 = *plVar1 + (uVar6 & 0x1ff) * 8;
    if (lVar7 == in_x2) {
      return;
    }
  }
  lVar7 = ((lVar7 - *plVar1 >> 3) + ((long)plVar1 - (long)in_x1) * 0x40) - (in_x2 - *in_x1 >> 3);
  if (0 < lVar7) {
    lVar7 = *(long *)(uVar4 + 0x28) - lVar7;
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 * 0x40 + -1;
    }
    *(long *)(uVar4 + 0x28) = lVar7;
    uVar6 = lVar2 - (lVar7 + *(long *)(uVar4 + 0x20));
    while (0x3ff < uVar6) {
      operator_delete(*(void **)(lVar5 + -8));
      lVar5 = *(long *)(uVar4 + 0x10) + -8;
      lVar7 = lVar5 - *(long *)(uVar4 + 8);
      *(long *)(uVar4 + 0x10) = lVar5;
      lVar3 = 0;
      if (lVar7 != 0) {
        lVar3 = lVar7 * 0x40 + -1;
      }
      uVar6 = lVar3 - (*(long *)(uVar4 + 0x28) + *(long *)(uVar4 + 0x20));
    }
  }
  return;
}


