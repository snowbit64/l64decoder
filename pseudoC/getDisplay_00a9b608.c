// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDisplay
// Entry Point: 00a9b608
// Size: 308 bytes
// Signature: undefined __thiscall getDisplay(HeadMountedDisplayManager * this, IRenderDevice * param_1, float param_2)


/* HeadMountedDisplayManager::getDisplay(IRenderDevice*, float) */

DisplayMonitor * __thiscall
HeadMountedDisplayManager::getDisplay
          (HeadMountedDisplayManager *this,IRenderDevice *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  DisplayMonitor *pDVar4;
  long *plVar5;
  long lVar6;
  
  plVar3 = *(long **)(this + 0x20);
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(this + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      plVar3 = *(long **)(this + 0x20);
    }
    lVar6 = *plVar3;
    *(undefined8 *)(this + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a9b668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pDVar4 = (DisplayMonitor *)(**(code **)(lVar6 + 0x30))(plVar3,param_1);
    return pDVar4;
  }
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x80))(param_1);
  plVar5 = *(long **)(this + 0x28);
  if (plVar5 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar5 + 0x90))(plVar5,0);
    iVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar1 == iVar2) {
      iVar1 = (**(code **)(**(long **)(this + 0x28) + 0x98))(*(long **)(this + 0x28),0);
      iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
      if (iVar1 == iVar2) {
        return *(DisplayMonitor **)(this + 0x28);
      }
    }
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 8))();
    }
  }
  pDVar4 = (DisplayMonitor *)operator_new(0x28);
                    /* try { // try from 00a9b714 to 00a9b71f has its CatchHandler @ 00a9b73c */
  DisplayMonitor::DisplayMonitor(pDVar4,(IRenderWindow *)plVar3,param_2);
  *(DisplayMonitor **)(this + 0x28) = pDVar4;
  return pDVar4;
}


