// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestPath
// Entry Point: 0074377c
// Size: 308 bytes
// Signature: undefined __thiscall requestPath(VehicleNavigationPlanner * this, VehicleNavigationAgent * param_1)


/* VehicleNavigationPlanner::requestPath(VehicleNavigationAgent&) */

bool __thiscall
VehicleNavigationPlanner::requestPath
          (VehicleNavigationPlanner *this,VehicleNavigationAgent *param_1)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  Mutex::enterCriticalSection();
  bVar2 = *(byte *)(param_1 + 0x1383);
  if ((bVar2 & 1) == 0) {
    FUN_00f276d0(1,param_1 + 8);
    if (*(short *)(param_1 + 0x1376) == -1) {
      lVar4 = *(long *)(this + 0x68);
      lVar6 = *(long *)(this + 0x88);
      uVar3 = 0;
      if (*(long *)(this + 0x70) - lVar4 != 0) {
        uVar3 = (*(long *)(this + 0x70) - lVar4) * 0x40 - 1;
      }
      uVar5 = lVar6 + *(long *)(this + 0x80);
      if (uVar3 == uVar5) {
                    /* try { // try from 00743850 to 00743853 has its CatchHandler @ 007438b0 */
        std::__ndk1::deque<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>
        ::__add_back_capacity();
        lVar6 = *(long *)(this + 0x88);
        lVar4 = *(long *)(this + 0x68);
        uVar5 = *(long *)(this + 0x80) + lVar6;
      }
      *(VehicleNavigationAgent **)
       (*(long *)(lVar4 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) = param_1;
    }
    else {
      uVar3 = *(ulong *)(this + 0x80);
      if (uVar3 == 0) {
                    /* try { // try from 007437d8 to 007437db has its CatchHandler @ 007438b4 */
        std::__ndk1::deque<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>
        ::__add_front_capacity();
        uVar3 = *(ulong *)(this + 0x80);
      }
      plVar1 = (long *)(*(long *)(this + 0x68) + (uVar3 >> 6 & 0x3fffffffffffff8));
      lVar6 = *plVar1;
      lVar4 = 0;
      if (*(long *)(this + 0x70) != *(long *)(this + 0x68)) {
        lVar4 = lVar6 + (uVar3 & 0x1ff) * 8;
      }
      if (lVar4 == lVar6) {
        lVar4 = plVar1[-1] + 0x1000;
      }
      lVar6 = *(long *)(this + 0x88);
      *(VehicleNavigationAgent **)(lVar4 + -8) = param_1;
      *(ulong *)(this + 0x80) = uVar3 - 1;
    }
    *(long *)(this + 0x88) = lVar6 + 1;
    *(undefined4 *)(param_1 + 0x1383) = 1;
                    /* try { // try from 00743884 to 0074388b has its CatchHandler @ 007438b8 */
    Event::post();
  }
                    /* try { // try from 0074388c to 00743893 has its CatchHandler @ 007438d0 */
  Mutex::leaveCriticalSection();
  return (bVar2 & 1) == 0;
}


