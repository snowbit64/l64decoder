// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doWork
// Entry Point: 007438d4
// Size: 984 bytes
// Signature: undefined __thiscall doWork(VehicleNavigationPlanner * this, bool * param_1)


/* VehicleNavigationPlanner::doWork(bool volatile&) */

undefined8 __thiscall VehicleNavigationPlanner::doWork(VehicleNavigationPlanner *this,bool *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  void *__s;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  
  if (*param_1 != false) {
    return 0;
  }
  do {
    Mutex::enterCriticalSection();
    lVar6 = *(long *)(this + 0x88);
joined_r0x00743978:
    if (lVar6 != 0) {
      do {
        if (((byte)this[0xcd] & 1) != 0) break;
        uVar4 = *(ulong *)(this + 0x80);
        *(long *)(this + 0x88) = *(long *)(this + 0x88) + -1;
        *(ulong *)(this + 0x80) = uVar4 + 1;
        *(undefined8 *)(this + 0x90) =
             *(undefined8 *)
              (*(long *)((long)*(void ***)(this + 0x68) + (uVar4 >> 6 & 0x3fffffffffffff8)) +
              (uVar4 & 0x1ff) * 8);
        if (0x3ff < uVar4 + 1) {
          operator_delete(**(void ***)(this + 0x68));
          *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
          *(long *)(this + 0x80) = *(long *)(this + 0x80) + -0x200;
        }
        *(undefined4 *)(this + 0xcc) = 0;
        this[0xce] = (VehicleNavigationPlanner)0x0;
        Mutex::leaveCriticalSection();
        uVar4 = VehicleNavigationAgent::getGridWidth();
        __s = *(void **)(this + 0xb0);
        lVar6 = (uVar4 & 0xffff) * (uVar4 & 0xffff);
        uVar4 = lVar6 * 8;
        uVar9 = *(long *)(this + 0xb8) - (long)__s >> 2;
        if (uVar4 < uVar9 || uVar4 - uVar9 == 0) {
          if (uVar4 < uVar9) {
            *(void **)(this + 0xb8) = (void *)((long)__s + lVar6 * 0x20);
          }
        }
        else {
          std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                    ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0xb0),
                     uVar4 - uVar9);
          __s = *(void **)(this + 0xb0);
        }
        memset(__s,0xff,lVar6 * 0x20);
        VehicleNavigationAgent::blockObstacles();
        if (*(short *)(*(long *)(this + 0x90) + 0x1376) == -1) {
          VehicleNavigationAgent::initializeGoal();
          VehicleNavigationAgent::checkAndInitializeLandingCurves();
LAB_00743aa8:
          lVar6 = *(long *)(this + 0x90);
          memset(*(void **)(lVar6 + 0x28),0xff,
                 (ulong)*(ushort *)(lVar6 + 0x30) * (ulong)*(ushort *)(lVar6 + 0x30) * 6);
          memset((void *)(lVar6 + 0x36),0xff,0xc40);
          memset((void *)(lVar6 + 0xc76),0xff,0x620);
          uVar1 = *(ushort *)(lVar6 + 0x1376);
          iVar3 = 0;
          uVar2 = *(ushort *)(lVar6 + 0x1378);
          *(undefined8 *)(lVar6 + 0x12f8) = *(undefined8 *)(lVar6 + 0x12f0);
          do {
            iVar11 = 0;
            do {
              uVar5 = (uint)(((ulong)((uVar2 - 4) + iVar3) & 0xffff) << 0x10) |
                      (uVar1 - 4) + iVar11 & 0xffff;
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              updateNode(this,*(VehicleNavigationAgent **)(this + 0x90),uVar5);
              iVar11 = iVar11 + 1;
            } while (iVar11 != 10);
            iVar3 = iVar3 + 1;
          } while (iVar3 != 10);
          uVar10 = *(undefined8 *)(lVar6 + 0x12f0);
          *(undefined8 *)(lVar6 + 0x12f0) = *(undefined8 *)(lVar6 + 0x12d8);
          uVar7 = *(undefined8 *)(lVar6 + 0x1300);
          *(undefined8 *)(lVar6 + 0x12d8) = uVar10;
          *(undefined8 *)(lVar6 + 0x12f8) = *(undefined8 *)(lVar6 + 0x12e0);
          *(undefined8 *)(lVar6 + 0x1300) = *(undefined8 *)(lVar6 + 0x12e8);
          *(undefined8 *)(lVar6 + 0x12e8) = uVar7;
          *(undefined8 *)(lVar6 + 0x12e0) = uVar10;
        }
        else {
          uVar4 = VehicleNavigationAgent::checkAndInitializeLandingCurves();
          if ((uVar4 & 1) != 0) goto LAB_00743aa8;
          updatePath(this,*(VehicleNavigationAgent **)(this + 0x90));
        }
        computePath(this,*(VehicleNavigationAgent **)(this + 0x90));
        Mutex::enterCriticalSection();
        lVar6 = *(long *)(this + 0x90);
        if (this[0xce] != (VehicleNavigationPlanner)0x0) goto code_r0x00743c04;
        *(undefined4 *)(lVar6 + 0x1383) = 0;
        plVar12 = *(long **)(this + 0x90);
        iVar3 = FUN_00f27700(0xffffffff,plVar12 + 1);
        if (iVar3 < 2) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        *(undefined8 *)(this + 0x90) = 0;
        if (*(long *)(this + 0x88) == 0) break;
      } while( true );
    }
    Mutex::leaveCriticalSection();
    Event::wait((Event *)this,0xffffffff);
    if (*param_1 != false) {
      return 0;
    }
  } while( true );
code_r0x00743c04:
  *(undefined4 *)(lVar6 + 0x1376) = 0xffffffff;
  *(undefined2 *)(lVar6 + 0x137a) = 0xffff;
  uVar4 = *(ulong *)(this + 0x80);
  if (uVar4 == 0) {
    std::__ndk1::deque<VehicleNavigationAgent*,std::__ndk1::allocator<VehicleNavigationAgent*>>::
    __add_front_capacity();
    uVar4 = *(ulong *)(this + 0x80);
  }
  plVar12 = (long *)(*(long *)(this + 0x68) + (uVar4 >> 6 & 0x3fffffffffffff8));
  lVar6 = *plVar12;
  lVar8 = 0;
  if (*(long *)(this + 0x70) != *(long *)(this + 0x68)) {
    lVar8 = lVar6 + (uVar4 & 0x1ff) * 8;
  }
  if (lVar8 == lVar6) {
    lVar8 = plVar12[-1] + 0x1000;
  }
  lVar6 = *(long *)(this + 0x88) + 1;
  *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(this + 0x90);
  *(ulong *)(this + 0x80) = uVar4 - 1;
  *(long *)(this + 0x88) = lVar6;
  *(undefined8 *)(this + 0x90) = 0;
  goto joined_r0x00743978;
}


