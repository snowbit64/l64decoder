// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateNextStreamable
// Entry Point: 00b02a5c
// Size: 672 bytes
// Signature: undefined __thiscall activateNextStreamable(StreamQueue * this, IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3, bool * param_4)


/* StreamQueue::activateNextStreamable(IRenderDevice*, IAudioDevice*, LuauScriptSystem*, bool&) */

void __thiscall
StreamQueue::activateNextStreamable
          (StreamQueue *this,IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3,
          bool *param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  *param_4 = false;
  plVar12 = *(long **)(this + 0xb0);
  if (plVar12 == (long *)0x0) {
    if (*(int *)(this + 0xb8) != 0) {
      Mutex::enterCriticalSection();
      lVar7 = *(long *)(this + 0xa8);
      if (lVar7 == 0) {
                    /* try { // try from 00b02af0 to 00b02af7 has its CatchHandler @ 00b02d00 */
        Mutex::enterCriticalSection();
        uVar8 = *(ulong *)(this + 0xa8);
        while ((uVar8 < 10 && (lVar7 = *(long *)(this + 0x50), lVar7 != 0))) {
          uVar13 = *(ulong *)(this + 0x48);
          lVar9 = *(long *)(this + 0x88);
          lVar14 = *(long *)(*(long *)(this + 0x30) + (uVar13 >> 6 & 0x3fffffffffffff8));
          uVar1 = 0;
          if (*(long *)(this + 0x90) - lVar9 != 0) {
            uVar1 = (*(long *)(this + 0x90) - lVar9) * 0x40 - 1;
          }
          uVar10 = *(long *)(this + 0xa0) + uVar8;
          uVar11 = uVar13;
          if (uVar1 == uVar10) {
                    /* try { // try from 00b02bb8 to 00b02bbf has its CatchHandler @ 00b02d0c */
            std::__ndk1::deque<Streamable*,std::__ndk1::allocator<Streamable*>>::__add_back_capacity
                      ();
            uVar8 = *(ulong *)(this + 0xa8);
            lVar9 = *(long *)(this + 0x88);
            uVar10 = *(long *)(this + 0xa0) + uVar8;
            lVar7 = *(long *)(this + 0x50);
            uVar11 = *(ulong *)(this + 0x48);
          }
          uVar8 = uVar8 + 1;
          *(undefined8 *)
           (*(long *)(lVar9 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8) =
               *(undefined8 *)(lVar14 + (uVar13 & 0x1ff) * 8);
          *(ulong *)(this + 0xa8) = uVar8;
          *(ulong *)(this + 0x48) = uVar11 + 1;
          *(long *)(this + 0x50) = lVar7 + -1;
          if (0x3ff < uVar11 + 1) {
            operator_delete(**(void ***)(this + 0x30));
            uVar8 = *(ulong *)(this + 0xa8);
            *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + -0x200;
          }
        }
                    /* try { // try from 00b02b08 to 00b02b0b has its CatchHandler @ 00b02cfc */
        Mutex::leaveCriticalSection();
        lVar7 = *(long *)(this + 0xa8);
        if (lVar7 != 0) goto LAB_00b02b14;
        plVar12 = (long *)0x0;
        bVar4 = true;
      }
      else {
LAB_00b02b14:
        uVar8 = *(ulong *)(this + 0xa0);
        plVar12 = *(long **)(*(long *)((long)*(void ***)(this + 0x88) +
                                      (uVar8 >> 6 & 0x3fffffffffffff8)) + (uVar8 & 0x1ff) * 8);
        *(long **)(this + 0xb0) = plVar12;
        *(ulong *)(this + 0xa0) = uVar8 + 1;
        *(long *)(this + 0xa8) = lVar7 + -1;
        if (uVar8 + 1 < 0x400) {
          bVar4 = false;
        }
        else {
          operator_delete(**(void ***)(this + 0x88));
          bVar4 = false;
          *(long *)(this + 0x88) = *(long *)(this + 0x88) + 8;
          *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + -0x200;
        }
      }
                    /* try { // try from 00b02cbc to 00b02cbf has its CatchHandler @ 00b02d08 */
      Mutex::leaveCriticalSection();
      if (!bVar4) goto LAB_00b02aa8;
    }
    bVar4 = false;
  }
  else {
LAB_00b02aa8:
    if (*(int *)(plVar12 + 1) == 3) {
      *param_4 = true;
    }
    else {
      (**(code **)(*plVar12 + 0x10))(plVar12,param_1,param_2,param_3);
      iVar2 = *(int *)(plVar12 + 1);
      *param_4 = iVar2 != 1;
      if (1 < iVar2 - 3U) {
        bVar4 = iVar2 - 1U < 2;
        goto LAB_00b02cc8;
      }
    }
    Streamable::onRemovedFromStreamQueue();
    *(undefined8 *)(this + 0xb0) = 0;
    uVar5 = FUN_00f276d0(0xffffffff,this + 0xb8);
    bVar4 = 1 < uVar5;
  }
LAB_00b02cc8:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4);
}


