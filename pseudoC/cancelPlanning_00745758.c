// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelPlanning
// Entry Point: 00745758
// Size: 356 bytes
// Signature: undefined __thiscall cancelPlanning(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1, bool param_2)


/* VehicleNavigationPlanner::cancelPlanning(VehicleNavigationAgent&, bool) */

void __thiscall
VehicleNavigationPlanner::cancelPlanning
          (VehicleNavigationPlanner *this,VehicleNavigationAgent *param_1,bool param_2)

{
  ulong uVar1;
  VehicleNavigationAgent **ppVVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  VehicleNavigationAgent **ppVVar7;
  VehicleNavigationAgent **ppVVar8;
  
  Mutex::enterCriticalSection();
  if (*(VehicleNavigationAgent **)(this + 0x90) == param_1) {
    *(undefined4 *)(this + 0xcc) = 1;
    if (param_2) {
      while (*(VehicleNavigationAgent **)(this + 0x90) == param_1) {
                    /* try { // try from 00745820 to 00745827 has its CatchHandler @ 007458dc */
        Mutex::leaveCriticalSection();
                    /* try { // try from 00745828 to 0074582f has its CatchHandler @ 007458c8 */
        ThreadUtil::usleep(1);
                    /* try { // try from 00745830 to 00745837 has its CatchHandler @ 007458c4 */
        Mutex::enterCriticalSection();
      }
    }
    goto LAB_007458a4;
  }
  lVar3 = *(long *)(this + 0x68);
  if (*(long *)(this + 0x70) == lVar3) goto LAB_007458a4;
  uVar4 = *(ulong *)(this + 0x80);
  uVar1 = *(long *)(this + 0x88) + uVar4;
  plVar6 = (long *)(lVar3 + (uVar4 >> 6 & 0x3fffffffffffff8));
  ppVVar7 = (VehicleNavigationAgent **)(*plVar6 + (uVar4 & 0x1ff) * 8);
  ppVVar2 = (VehicleNavigationAgent **)(*(long *)(lVar3 + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8);
  if (ppVVar7 == ppVVar2) {
LAB_00745848:
    if (ppVVar7 ==
        (VehicleNavigationAgent **)(*(long *)(lVar3 + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8))
    goto LAB_007458a4;
  }
  else {
    do {
      ppVVar8 = ppVVar7;
      if (*ppVVar7 == param_1) break;
      ppVVar7 = ppVVar7 + 1;
      if ((long)ppVVar7 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        ppVVar7 = (VehicleNavigationAgent **)*plVar6;
      }
      ppVVar8 = ppVVar2;
    } while (ppVVar7 != ppVVar2);
    ppVVar7 = ppVVar8;
    if (*(long *)(this + 0x70) != lVar3) goto LAB_00745848;
    if (ppVVar8 == (VehicleNavigationAgent **)0x0) goto LAB_007458a4;
  }
                    /* try { // try from 00745870 to 00745873 has its CatchHandler @ 007458bc */
  std::__ndk1::deque<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>::erase
            ((int)this + 0x60);
  *(undefined4 *)(param_1 + 0x1383) = 0;
  iVar5 = FUN_00f27700(0xffffffff,param_1 + 8);
  if (iVar5 < 2) {
                    /* try { // try from 0074589c to 007458a3 has its CatchHandler @ 007458bc */
    (**(code **)(*(long *)param_1 + 0x10))(param_1);
  }
LAB_007458a4:
                    /* try { // try from 007458a4 to 007458ab has its CatchHandler @ 007458c0 */
  Mutex::leaveCriticalSection();
  return;
}


