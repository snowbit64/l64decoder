// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 007124e4
// Size: 832 bytes
// Signature: undefined __cdecl erase(__deque_iterator param_1, __deque_iterator param_2)


/* std::__ndk1::deque<BTBehavior*, std::__ndk1::allocator<BTBehavior*>
   >::erase(std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior* const*, BTBehavior* const&,
   BTBehavior* const* const*, long, 512l>, std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior*
   const*, BTBehavior* const&, BTBehavior* const* const*, long, 512l>) */

void std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::erase
               (__deque_iterator param_1,__deque_iterator param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long in_x2;
  long *in_x3;
  long in_x4;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  void **ppvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  plVar5 = (long *)(ulong)param_2;
  uVar4 = (ulong)param_1;
  if (in_x4 == in_x2) {
    lVar13 = 0;
  }
  else {
    lVar13 = ((in_x4 - *in_x3 >> 3) + ((long)in_x3 - (long)plVar5) * 0x40) - (in_x2 - *plVar5 >> 3);
  }
  uVar10 = *(ulong *)(uVar4 + 0x20);
  lVar2 = *(long *)(uVar4 + 8);
  plVar1 = (long *)(lVar2 + (uVar10 >> 6 & 0x3fffffffffffff8));
  plVar7 = plVar1;
  if (*(long *)(uVar4 + 0x10) == lVar2) {
    lVar8 = 0;
    if (in_x2 != 0) goto LAB_00712560;
  }
  else {
    lVar8 = *plVar1 + (uVar10 & 0x1ff) * 8;
    if (in_x2 != lVar8) {
LAB_00712560:
      uVar11 = (in_x2 - *plVar5 >> 3) + ((long)plVar5 - (long)plVar1) * 0x40;
      uVar12 = uVar11 - (lVar8 - *plVar1 >> 3);
      in_x2 = lVar8;
      if (uVar12 != 0) {
        if ((long)uVar11 < 1) {
          uVar6 = 0x1ff - uVar11;
          uVar11 = (ulong)~(uint)uVar6;
          uVar6 = -(uVar6 >> 6 & 0x3fffffffffffff8);
        }
        else {
          uVar6 = uVar11 >> 6 & 0x3fffffffffffff8;
        }
        plVar7 = (long *)((long)plVar1 + uVar6);
        in_x2 = *(long *)((long)plVar1 + uVar6) + (uVar11 & 0x1ff) * 8;
      }
      goto LAB_007125f4;
    }
  }
  uVar12 = 0;
LAB_007125f4:
  if (0 < lVar13) {
    uVar11 = lVar13 + (in_x2 - *plVar7 >> 3);
    if ((ulong)(*(long *)(uVar4 + 0x28) - lVar13) >> 1 < uVar12) {
      if ((long)uVar11 < 1) {
        uVar12 = 0x1ff - uVar11;
        uVar11 = (ulong)~(uint)uVar12;
        uVar12 = -(uVar12 >> 6 & 0x3fffffffffffff8);
      }
      else {
        uVar12 = uVar11 >> 6 & 0x3fffffffffffff8;
      }
      move<BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l,BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l>
                ((__deque_iterator)(undefined8 *)((long)plVar7 + uVar12),
                 (int)*(undefined8 *)((long)plVar7 + uVar12) + ((uint)uVar11 & 0x1ff) * 8,
                 (int)lVar2 + ((uint)(*(long *)(uVar4 + 0x28) + uVar10 >> 6) & 0xfffffff8));
      lVar8 = *(long *)(uVar4 + 0x10);
      lVar3 = lVar8 - *(long *)(uVar4 + 8);
      lVar13 = *(long *)(uVar4 + 0x28) - lVar13;
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = lVar3 * 0x40 + -1;
      }
      *(long *)(uVar4 + 0x28) = lVar13;
      uVar10 = lVar2 - (lVar13 + *(long *)(uVar4 + 0x20));
      while (0x3ff < uVar10) {
        operator_delete(*(void **)(lVar8 + -8));
        lVar8 = *(long *)(uVar4 + 0x10) + -8;
        lVar2 = lVar8 - *(long *)(uVar4 + 8);
        *(long *)(uVar4 + 0x10) = lVar8;
        lVar13 = 0;
        if (lVar2 != 0) {
          lVar13 = lVar2 * 0x40 + -1;
        }
        uVar10 = lVar13 - (*(long *)(uVar4 + 0x28) + *(long *)(uVar4 + 0x20));
      }
    }
    else {
      move_backward<BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l,BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l>
                ((__deque_iterator)plVar1,(__deque_iterator)lVar8,(__deque_iterator)plVar7);
      uVar10 = *(long *)(uVar4 + 0x20) + lVar13;
      *(ulong *)(uVar4 + 0x20) = uVar10;
      *(long *)(uVar4 + 0x28) = *(long *)(uVar4 + 0x28) - lVar13;
      if (0x3ff < uVar10) {
        ppvVar9 = *(void ***)(uVar4 + 8);
        do {
          operator_delete(*ppvVar9);
          ppvVar9 = (void **)(*(long *)(uVar4 + 8) + 8);
          uVar10 = *(long *)(uVar4 + 0x20) - 0x200;
          *(void ***)(uVar4 + 8) = ppvVar9;
          *(ulong *)(uVar4 + 0x20) = uVar10;
        } while (0x3ff < uVar10);
      }
    }
  }
  return;
}


