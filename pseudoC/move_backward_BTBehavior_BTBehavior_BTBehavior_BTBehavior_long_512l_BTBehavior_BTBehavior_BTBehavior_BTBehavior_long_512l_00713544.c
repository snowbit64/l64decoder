// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l,BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l>
// Entry Point: 00713544
// Size: 288 bytes
// Signature: __deque_iterator __cdecl move_backward<BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l,BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior**, BTBehavior*&, BTBehavior***, long, 512l>
   std::__ndk1::move_backward<BTBehavior*, BTBehavior**, BTBehavior*&, BTBehavior***, long, 512l,
   BTBehavior*, BTBehavior**, BTBehavior*&, BTBehavior***, long,
   512l>(std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior**, BTBehavior*&, BTBehavior***, long,
   512l>, std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior**, BTBehavior*&, BTBehavior***,
   long, 512l>, std::__ndk1::__deque_iterator<BTBehavior*, BTBehavior**, BTBehavior*&,
   BTBehavior***, long, 512l>) */

__deque_iterator
std::__ndk1::
move_backward<BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l,BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  long lVar1;
  BTBehavior **ppBVar2;
  BTBehavior **ppBVar3;
  BTBehavior **in_x3;
  __deque_iterator in_w4;
  BTBehavior **in_x5;
  BTBehavior **ppBVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = (long *)(ulong)param_3;
  if (in_x3 != (BTBehavior **)(ulong)param_2) {
    lVar9 = (((long)in_x3 - *plVar8 >> 3) + ((long)plVar8 - (long)(long *)(ulong)param_1) * 0x40) -
            ((long)(BTBehavior **)(ulong)param_2 - *(long *)(ulong)param_1 >> 3);
    while (0 < lVar9) {
      while( true ) {
        ppBVar4 = (BTBehavior **)*plVar8;
        ppBVar3 = in_x3;
        if (in_x3 == ppBVar4) {
          plVar8 = plVar8 + -1;
          ppBVar4 = (BTBehavior **)*plVar8;
          ppBVar3 = ppBVar4 + 0x200;
        }
        lVar6 = (long)ppBVar3 - (long)ppBVar4 >> 3;
        in_x3 = ppBVar3 + -1;
        lVar1 = lVar9;
        ppBVar2 = ppBVar3 + -lVar9;
        if (lVar6 <= lVar9) {
          lVar1 = lVar6;
          ppBVar2 = ppBVar4;
        }
        in_w4 = move_backward<BTBehavior**,BTBehavior*,BTBehavior**,BTBehavior*&,BTBehavior***,long,512l>
                          (ppBVar2,ppBVar3,in_w4,(type *)in_x5);
        lVar9 = lVar9 - lVar1;
        in_x5 = ppBVar3;
        if (lVar1 + -1 == 0) break;
        uVar5 = ((long)in_x3 - *plVar8 >> 3) - (lVar1 + -1);
        if ((long)uVar5 < 1) {
          uVar7 = 0x1ff - uVar5;
          uVar5 = (ulong)~(uint)uVar7;
          uVar7 = -(uVar7 >> 6 & 0x3fffffffffffff8);
        }
        else {
          uVar7 = uVar5 >> 6 & 0x3fffffffffffff8;
        }
        plVar8 = (long *)((long)plVar8 + uVar7);
        in_x3 = (BTBehavior **)(*plVar8 + (uVar5 & 0x1ff) * 8);
        if (lVar9 < 1) {
          return in_w4;
        }
      }
    }
  }
  return in_w4;
}


