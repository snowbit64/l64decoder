// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelAllI3DLoadTasks
// Entry Point: 00943198
// Size: 640 bytes
// Signature: undefined __thiscall cancelAllI3DLoadTasks(I3DStreamingManager * this, bool param_1, bool param_2)


/* I3DStreamingManager::cancelAllI3DLoadTasks(bool, bool) */

void __thiscall
I3DStreamingManager::cancelAllI3DLoadTasks(I3DStreamingManager *this,bool param_1,bool param_2)

{
  long *plVar1;
  void **ppvVar2;
  long *plVar3;
  Thread *pTVar4;
  void *pvVar5;
  void **ppvVar6;
  long lVar7;
  
  Mutex::enterCriticalSection();
  plVar1 = *(long **)(this + 0x10);
  for (plVar3 = *(long **)(this + 8); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar7 = *plVar3;
    *(undefined *)(lVar7 + 0x4cc) = 1;
    *(undefined4 *)(lVar7 + 0x4d8) = 0;
    if (param_1) {
      if ((*(char *)(lVar7 + 0x4cd) == '\0') || (*(int *)(lVar7 + 0x4d0) == 6)) {
        I3DLoad::deleteSceneGraphRoot();
      }
      if (*(long **)(lVar7 + 0x218) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + 0x218) + 8))();
      }
      *(undefined8 *)(lVar7 + 0x218) = 0;
    }
  }
  plVar1 = *(long **)(this + 0x28);
  for (plVar3 = *(long **)(this + 0x20); plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar7 = *plVar3;
    *(undefined *)(lVar7 + 0x4cc) = 1;
    *(undefined4 *)(lVar7 + 0x4d8) = 0;
    if (param_1) {
      if ((*(char *)(lVar7 + 0x4cd) == '\0') || (*(int *)(lVar7 + 0x4d0) == 6)) {
        I3DLoad::deleteSceneGraphRoot();
      }
      if (*(long **)(lVar7 + 0x218) != (long *)0x0) {
        (**(code **)(**(long **)(lVar7 + 0x218) + 8))();
      }
      *(undefined8 *)(lVar7 + 0x218) = 0;
    }
  }
  Mutex::leaveCriticalSection();
  if (param_2) {
    Thread::cancel();
    Event::post();
    Thread::join();
    pTVar4 = *(Thread **)(this + 0x78);
    if (pTVar4 != (Thread *)0x0) {
      Thread::~Thread(pTVar4);
      operator_delete(pTVar4);
    }
    *(undefined8 *)(this + 0x78) = 0;
    StreamManager::getInstance();
    StreamManager::cancelAllStreamQueues();
    ppvVar2 = *(void ***)(this + 0x10);
    for (ppvVar6 = *(void ***)(this + 8); ppvVar6 != ppvVar2; ppvVar6 = ppvVar6 + 1) {
      pvVar5 = *ppvVar6;
      plVar3 = (long *)I3DLoad::getSceneGraphRoot();
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (*(long **)((long)pvVar5 + 0x218) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar5 + 0x218) + 8))();
      }
      I3DLoad::~I3DLoad((I3DLoad *)((long)pvVar5 + 0x220));
      operator_delete(pvVar5);
    }
    ppvVar6 = *(void ***)(this + 0x20);
    ppvVar2 = *(void ***)(this + 0x28);
    if (ppvVar6 != ppvVar2) {
      do {
        pvVar5 = *ppvVar6;
        plVar3 = (long *)I3DLoad::getSceneGraphRoot();
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (*(long **)((long)pvVar5 + 0x218) != (long *)0x0) {
          (**(code **)(**(long **)((long)pvVar5 + 0x218) + 8))();
        }
        I3DLoad::~I3DLoad((I3DLoad *)((long)pvVar5 + 0x220));
        operator_delete(pvVar5);
        ppvVar6 = ppvVar6 + 1;
      } while (ppvVar6 != ppvVar2);
      ppvVar6 = *(void ***)(this + 0x20);
    }
    *(void ***)(this + 0x28) = ppvVar6;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
    pTVar4 = (Thread *)operator_new(0x48);
                    /* try { // try from 009433d4 to 009433d7 has its CatchHandler @ 00943418 */
    Thread::Thread(pTVar4);
    *(Thread **)(this + 0x78) = pTVar4;
    Thread::start(pTVar4,streamingThreadFunction,this,0xffffffff,"GIANTS Streaming Manager",2,
                  0x80000);
    return;
  }
  return;
}


