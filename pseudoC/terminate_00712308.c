// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: terminate
// Entry Point: 00712308
// Size: 476 bytes
// Signature: undefined __thiscall terminate(BehaviorTree * this, BTBehavior * param_1, Status param_2, bool param_3)


/* BehaviorTree::terminate(BTBehavior*, BTBehavior::Status, bool) */

void __thiscall
BehaviorTree::terminate(BehaviorTree *this,BTBehavior *param_1,Status param_2,bool param_3)

{
  long *plVar1;
  __deque_iterator _Var2;
  long *plVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = *(ulong *)(this + 0x28);
  *(Status *)(param_1 + 8) = param_2;
  if (uVar5 != 0) {
    uVar6 = 0;
    uVar7 = *(ulong *)(this + 0x20);
    lVar8 = *(long *)(this + 8);
    do {
      if (*(BTBehavior **)
           (*(long *)(lVar8 + (uVar7 + uVar6 >> 6 & 0x3fffffffffffff8)) +
           (uVar7 + uVar6 & 0x1ff) * 8) == param_1) {
        lVar9 = *(long *)(this + 0x10);
        plVar1 = (long *)(lVar8 + (uVar7 >> 6 & 0x3fffffffffffff8));
        if (lVar9 == lVar8) {
          lVar4 = 0;
          if (uVar6 == 0) goto LAB_007123b8;
LAB_0071238c:
          uVar5 = uVar6 + (lVar4 - *plVar1 >> 3);
          if ((long)uVar5 < 1) {
            uVar5 = -(0x1ff - uVar5 >> 6 & 0x3fffffffffffff8);
          }
          else {
            uVar5 = uVar5 >> 6 & 0x3fffffffffffff8;
          }
          plVar3 = (long *)((long)plVar1 + uVar5);
          if (lVar9 != lVar8) goto LAB_00712400;
LAB_007123c4:
          _Var2 = (__deque_iterator)plVar3;
          lVar8 = 0;
          if (uVar6 == 0) goto LAB_007123cc;
LAB_00712410:
          uVar6 = uVar6 + (lVar8 - *plVar1 >> 3);
          if ((long)uVar6 < 1) {
            uVar5 = -(0x1ff - uVar6 >> 6 & 0x3fffffffffffff8);
            uVar6 = (ulong)~(uint)(0x1ff - uVar6);
          }
          else {
            uVar5 = uVar6 >> 6 & 0x3fffffffffffff8;
          }
          lVar9 = *(long *)((long)plVar1 + uVar5);
          lVar8 = lVar9 + (uVar6 & 0x1ff) * 8;
        }
        else {
          lVar4 = *plVar1 + (uVar7 & 0x1ff) * 8;
          if (uVar6 != 0) goto LAB_0071238c;
LAB_007123b8:
          plVar3 = plVar1;
          if (lVar9 == lVar8) goto LAB_007123c4;
LAB_00712400:
          _Var2 = (__deque_iterator)plVar3;
          lVar8 = *plVar1 + (uVar7 & 0x1ff) * 8;
          if (uVar6 != 0) goto LAB_00712410;
LAB_007123cc:
          lVar9 = *plVar1;
        }
        if ((lVar8 - lVar9) + 7 < 0 != SCARRY8(lVar8 - lVar9,7)) {
          std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::erase
                    ((__deque_iterator)this,_Var2);
          UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
          goto joined_r0x007124d4;
        }
        std::__ndk1::deque<BTBehavior*,std::__ndk1::allocator<BTBehavior*>>::erase
                  ((__deque_iterator)this,_Var2);
        break;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < uVar5);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
joined_r0x007124d4:
  if ((UNRECOVERED_JUMPTABLE != (code *)0x0) && (param_3)) {
                    /* WARNING: Could not recover jumptable at 0x007124a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}


