// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<VehicleNavigationAgent**,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>
// Entry Point: 00747a30
// Size: 312 bytes
// Signature: __deque_iterator __cdecl move_backward<VehicleNavigationAgent**,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>(VehicleNavigationAgent * * param_1, VehicleNavigationAgent * * param_2, __deque_iterator param_3, type * param_4)


/* std::__ndk1::__deque_iterator<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l>
   std::__ndk1::move_backward<VehicleNavigationAgent**, VehicleNavigationAgent*,
   VehicleNavigationAgent**, VehicleNavigationAgent*&, VehicleNavigationAgent***, long,
   512l>(VehicleNavigationAgent**, VehicleNavigationAgent**,
   std::__ndk1::__deque_iterator<VehicleNavigationAgent*, VehicleNavigationAgent**,
   VehicleNavigationAgent*&, VehicleNavigationAgent***, long, 512l>,
   std::__ndk1::enable_if<__is_cpp17_random_access_iterator<VehicleNavigationAgent**>::value,
   void>::type*) */

__deque_iterator
std::__ndk1::
move_backward<VehicleNavigationAgent**,VehicleNavigationAgent*,VehicleNavigationAgent**,VehicleNavigationAgent*&,VehicleNavigationAgent***,long,512l>
          (VehicleNavigationAgent **param_1,VehicleNavigationAgent **param_2,
          __deque_iterator param_3,type *param_4)

{
  long lVar1;
  size_t __n;
  VehicleNavigationAgent **__src;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)(ulong)param_3;
  if (param_2 != param_1) {
    do {
      lVar2 = (long)param_4 - *plVar7 >> 3;
      if ((long)param_4 - *plVar7 < 9) {
        uVar3 = 0x200 - lVar2;
        uVar4 = (ulong)~(uint)uVar3;
        lVar2 = *(long *)((long)plVar7 - (uVar3 >> 6 & 0x3fffffffffffff8));
      }
      else {
        uVar4 = lVar2 - 1;
        lVar2 = *(long *)((long)plVar7 + (uVar4 >> 6 & 0x3fffffffffffff8));
      }
      lVar1 = lVar2 + (uVar4 & 0x1ff) * 8 + 8;
      lVar5 = (long)param_2 - (long)param_1 >> 3;
      lVar2 = lVar1 - lVar2;
      lVar6 = lVar2 >> 3;
      __src = (VehicleNavigationAgent **)((long)param_2 - lVar2);
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
        __src = param_1;
      }
      __n = (long)param_2 - (long)__src;
      if (__n != 0) {
        memmove((void *)(lVar1 - __n),__src,__n);
      }
      if (lVar6 != 0) {
        uVar4 = ((long)param_4 - *plVar7 >> 3) - lVar6;
        if ((long)uVar4 < 1) {
          uVar3 = 0x1ff - uVar4;
          uVar4 = (ulong)~(uint)uVar3;
          uVar3 = -(uVar3 >> 6 & 0x3fffffffffffff8);
        }
        else {
          uVar3 = uVar4 >> 6 & 0x3fffffffffffff8;
        }
        plVar7 = (long *)((long)plVar7 + uVar3);
        param_4 = (type *)(*plVar7 + (uVar4 & 0x1ff) * 8);
      }
      param_2 = __src;
    } while (__src != param_1);
  }
  return (__deque_iterator)plVar7;
}


