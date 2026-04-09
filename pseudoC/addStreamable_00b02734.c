// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStreamable
// Entry Point: 00b02734
// Size: 200 bytes
// Signature: undefined __thiscall addStreamable(StreamQueue * this, Streamable * param_1)


/* StreamQueue::addStreamable(Streamable&) */

void __thiscall StreamQueue::addStreamable(StreamQueue *this,Streamable *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  Mutex::enterCriticalSection();
  lVar4 = *(long *)(this + 0x30);
  lVar5 = *(long *)(this + 0x50);
  uVar1 = 0;
  if (*(long *)(this + 0x38) - lVar4 != 0) {
    uVar1 = (*(long *)(this + 0x38) - lVar4) * 0x40 - 1;
  }
  uVar6 = lVar5 + *(long *)(this + 0x48);
  if (uVar1 == uVar6) {
                    /* try { // try from 00b02790 to 00b02797 has its CatchHandler @ 00b027fc */
    std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>::__add_back_capacity();
    lVar5 = *(long *)(this + 0x50);
    lVar4 = *(long *)(this + 0x30);
    uVar6 = *(long *)(this + 0x48) + lVar5;
  }
  *(Streamable **)(*(long *)(lVar4 + (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8) =
       param_1;
  *(long *)(this + 0x50) = lVar5 + 1;
                    /* try { // try from 00b027c4 to 00b027c7 has its CatchHandler @ 00b02810 */
  Mutex::leaveCriticalSection();
  FUN_00f276d0(1,this + 0xb8);
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


