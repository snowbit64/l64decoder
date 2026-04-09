// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>
// Entry Point: 00747778
// Size: 288 bytes
// Signature: __deque_iterator __cdecl move_backward<VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l>
   std::__ndk1::move_backward<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l, VehicleNavigationAgent*,
   VehicleNavigationAgent**, VehicleNavigationAgent*&, VehicleNavigationAgent***, long,
   512l>(std::__ndk1::__deque_iterator<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l>,
   std::__ndk1::__deque_iterator<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l>,
   std::__ndk1::__deque_iterator<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l>) */

__deque_iterator
std::__ndk1::
move_backward<VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  long lVar1;
  VehicleNavigationAgent **ppVVar2;
  VehicleNavigationAgent **ppVVar3;
  VehicleNavigationAgent **in_x3;
  __deque_iterator in_w4;
  VehicleNavigationAgent **in_x5;
  VehicleNavigationAgent **ppVVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = (long *)(ulong)param_3;
  if (in_x3 != (VehicleNavigationAgent **)(ulong)param_2) {
    lVar9 = (((long)in_x3 - *plVar8 >> 3) + ((long)plVar8 - (long)(long *)(ulong)param_1) * 0x40) -
            ((long)(VehicleNavigationAgent **)(ulong)param_2 - *(long *)(ulong)param_1 >> 3);
    while (0 < lVar9) {
      while( true ) {
        ppVVar4 = (VehicleNavigationAgent **)*plVar8;
        ppVVar3 = in_x3;
        if (in_x3 == ppVVar4) {
          plVar8 = plVar8 + -1;
          ppVVar4 = (VehicleNavigationAgent **)*plVar8;
          ppVVar3 = ppVVar4 + 0x200;
        }
        lVar6 = (long)ppVVar3 - (long)ppVVar4 >> 3;
        in_x3 = ppVVar3 + -1;
        lVar1 = lVar9;
        ppVVar2 = ppVVar3 + -lVar9;
        if (lVar6 <= lVar9) {
          lVar1 = lVar6;
          ppVVar2 = ppVVar4;
        }
        in_w4 = move_backward<VehicleNavigationAgent**,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>
                          (ppVVar2,ppVVar3,in_w4,(type *)in_x5);
        lVar9 = lVar9 - lVar1;
        in_x5 = ppVVar3;
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
        in_x3 = (VehicleNavigationAgent **)(*plVar8 + (uVar5 & 0x1ff) * 8);
        if (lVar9 < 1) {
          return in_w4;
        }
      }
    }
  }
  return in_w4;
}


