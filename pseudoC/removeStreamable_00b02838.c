// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeStreamable
// Entry Point: 00b02838
// Size: 516 bytes
// Signature: undefined __thiscall removeStreamable(StreamQueue * this, Streamable * param_1)


/* StreamQueue::removeStreamable(Streamable&) */

void __thiscall StreamQueue::removeStreamable(StreamQueue *this,Streamable *param_1)

{
  Streamable **ppSVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  Streamable **ppSVar8;
  Streamable **ppSVar9;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0x30);
  if (*(long *)(this + 0x38) == lVar2) {
LAB_00b02904:
    bVar5 = false;
  }
  else {
    uVar3 = *(ulong *)(this + 0x48);
    puVar6 = (undefined8 *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8));
    ppSVar8 = (Streamable **)*puVar6;
    ppSVar9 = ppSVar8 + (uVar3 & 0x1ff);
    ppSVar1 = (Streamable **)
              (*(long *)(lVar2 + (*(long *)(this + 0x50) + uVar3 >> 6 & 0x3fffffffffffff8)) +
              (*(long *)(this + 0x50) + uVar3 & 0x1ff) * 8);
    if (ppSVar9 != ppSVar1) {
      do {
        if (*ppSVar9 == param_1) goto LAB_00b028bc;
        ppSVar9 = ppSVar9 + 1;
        if ((long)ppSVar9 - (long)ppSVar8 == 0x1000) {
          puVar6 = puVar6 + 1;
          ppSVar9 = (Streamable **)*puVar6;
          ppSVar8 = ppSVar9;
        }
      } while (ppSVar9 != ppSVar1);
      goto LAB_00b02904;
    }
LAB_00b028bc:
    if (ppSVar9 == ppSVar1) goto LAB_00b02904;
                    /* try { // try from 00b028c4 to 00b028cb has its CatchHandler @ 00b02a40 */
    std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>::erase((int)this + 0x28);
    bVar5 = true;
  }
                    /* try { // try from 00b02908 to 00b0290f has its CatchHandler @ 00b02a58 */
  Mutex::leaveCriticalSection();
  if (!bVar5) {
    Mutex::enterCriticalSection();
    lVar2 = *(long *)(this + 0x88);
    if (*(long *)(this + 0x90) == lVar2) {
LAB_00b029bc:
      bVar5 = false;
    }
    else {
      uVar3 = *(ulong *)(this + 0xa0);
      puVar6 = (undefined8 *)(lVar2 + (uVar3 >> 6 & 0x3fffffffffffff8));
      ppSVar8 = (Streamable **)*puVar6;
      ppSVar9 = ppSVar8 + (uVar3 & 0x1ff);
      ppSVar1 = (Streamable **)
                (*(long *)(lVar2 + (*(long *)(this + 0xa8) + uVar3 >> 6 & 0x3fffffffffffff8)) +
                (*(long *)(this + 0xa8) + uVar3 & 0x1ff) * 8);
      if (ppSVar9 != ppSVar1) {
        do {
          if (*ppSVar9 == param_1) goto LAB_00b02974;
          ppSVar9 = ppSVar9 + 1;
          if ((long)ppSVar9 - (long)ppSVar8 == 0x1000) {
            puVar6 = puVar6 + 1;
            ppSVar9 = (Streamable **)*puVar6;
            ppSVar8 = ppSVar9;
          }
        } while (ppSVar9 != ppSVar1);
        goto LAB_00b029bc;
      }
LAB_00b02974:
      if (ppSVar9 == ppSVar1) goto LAB_00b029bc;
                    /* try { // try from 00b0297c to 00b02983 has its CatchHandler @ 00b02a3c */
      std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>::erase((int)this + 0x80);
      bVar5 = true;
    }
                    /* try { // try from 00b029c0 to 00b029c7 has its CatchHandler @ 00b02a54 */
    Mutex::leaveCriticalSection();
    if (!bVar5) {
      if (*(Streamable **)(this + 0xb0) == param_1) {
        while (*(Streamable **)(this + 0xb0) == param_1) {
          Yield();
        }
      }
      goto LAB_00b029e0;
    }
  }
  Streamable::onRemovedFromStreamQueue();
  FUN_00f276d0(0xffffffff,this + 0xb8);
LAB_00b029e0:
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


