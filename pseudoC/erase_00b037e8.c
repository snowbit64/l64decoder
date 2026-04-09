// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 00b037e8
// Size: 724 bytes
// Signature: undefined __cdecl erase(__deque_iterator param_1)


/* std::__ndk1::deque<Streamable*, std::__ndk1::allocator<Streamable*>
   >::erase(std::__ndk1::__deque_iterator<Streamable*, Streamable* const*, Streamable* const&,
   Streamable* const* const*, long, 512l>) */

void std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>::erase
               (__deque_iterator param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *in_x1;
  long in_x2;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  uVar5 = (ulong)param_1;
  uVar8 = *(ulong *)(uVar5 + 0x20);
  lVar3 = *(long *)(uVar5 + 8);
  plVar2 = (long *)(lVar3 + (uVar8 >> 6 & 0x3fffffffffffff8));
  plVar7 = plVar2;
  if (*(long *)(uVar5 + 0x10) == lVar3) {
    lVar9 = 0;
    if (in_x2 == 0) goto LAB_00b038ec;
  }
  else {
    lVar9 = *plVar2 + (uVar8 & 0x1ff) * 8;
    if (in_x2 == lVar9) goto LAB_00b038ec;
  }
  uVar10 = (in_x2 - *in_x1 >> 3) + ((long)in_x1 - (long)plVar2) * 0x40;
  uVar6 = lVar9 - *plVar2 >> 3;
  uVar4 = uVar10 - uVar6;
  if (uVar10 != uVar6) {
    if ((long)uVar10 < 1) {
      uVar6 = 0x1ff - uVar10;
      uVar10 = (ulong)~(uint)uVar6;
      uVar6 = -(uVar6 >> 6 & 0x3fffffffffffff8);
    }
    else {
      uVar6 = uVar10 >> 6 & 0x3fffffffffffff8;
    }
    plVar7 = (long *)((long)plVar2 + uVar6);
    lVar1 = (uVar10 & 0x1ff) * 8;
    if (*(long *)(uVar5 + 0x28) - 1U >> 1 < uVar4) {
      lVar9 = lVar1 >> 3;
      if (SCARRY8(lVar1,7) == false) {
        uVar6 = lVar9 + 1;
        uVar10 = uVar6 >> 6 & 0x3fffffffffffff8;
      }
      else {
        uVar10 = 0x1fe - lVar9;
        uVar6 = (ulong)~(uint)uVar10;
        uVar10 = -(uVar10 >> 6 & 0x3fffffffffffff8);
      }
      move<Streamable*,Streamable**,Streamable*&,Streamable***,long,512l,Streamable*,Streamable**,Streamable*&,Streamable***,long,512l>
                ((__deque_iterator)(undefined8 *)((long)plVar7 + uVar10),
                 (int)*(undefined8 *)((long)plVar7 + uVar10) + ((uint)uVar6 & 0x1ff) * 8,
                 (int)lVar3 + ((uint)(*(long *)(uVar5 + 0x28) + uVar8 >> 6) & 0xfffffff8));
      lVar9 = *(long *)(uVar5 + 0x10) - *(long *)(uVar5 + 8);
      lVar3 = 0;
      if (lVar9 != 0) {
        lVar3 = lVar9 * 0x40 + -1;
      }
      lVar9 = *(long *)(uVar5 + 0x28) + -1;
      *(long *)(uVar5 + 0x28) = lVar9;
      if ((ulong)(lVar3 - (lVar9 + *(long *)(uVar5 + 0x20))) < 0x400) {
        return;
      }
      operator_delete(*(void **)(*(long *)(uVar5 + 0x10) + -8));
      *(long *)(uVar5 + 0x10) = *(long *)(uVar5 + 0x10) + -8;
      return;
    }
  }
LAB_00b038ec:
  move_backward<Streamable*,Streamable**,Streamable*&,Streamable***,long,512l,Streamable*,Streamable**,Streamable*&,Streamable***,long,512l>
            ((__deque_iterator)plVar2,(__deque_iterator)lVar9,(__deque_iterator)plVar7);
  uVar8 = *(long *)(uVar5 + 0x20) + 1;
  *(ulong *)(uVar5 + 0x20) = uVar8;
  *(long *)(uVar5 + 0x28) = *(long *)(uVar5 + 0x28) + -1;
  if (0x3ff < uVar8) {
    operator_delete(**(void ***)(uVar5 + 8));
    *(long *)(uVar5 + 8) = *(long *)(uVar5 + 8) + 8;
    *(long *)(uVar5 + 0x20) = *(long *)(uVar5 + 0x20) + -0x200;
  }
  return;
}


