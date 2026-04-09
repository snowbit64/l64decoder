// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DStreamingManager
// Entry Point: 00942fe4
// Size: 384 bytes
// Signature: undefined __thiscall ~I3DStreamingManager(I3DStreamingManager * this)


/* I3DStreamingManager::~I3DStreamingManager() */

void __thiscall I3DStreamingManager::~I3DStreamingManager(I3DStreamingManager *this)

{
  void **ppvVar1;
  long *plVar2;
  Thread *this_00;
  void *pvVar3;
  void **ppvVar4;
  
  *(undefined ***)this = &PTR__I3DStreamingManager_00fe0358;
                    /* try { // try from 0094300c to 00943057 has its CatchHandler @ 00943164 */
  cancelAllI3DLoadTasks(this,true,false);
  Thread::cancel();
  Event::post();
  Thread::join();
  this_00 = *(Thread **)(this + 0x78);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x78) = 0;
  StreamManager::getInstance();
  StreamManager::cancelAllStreamQueues();
  ppvVar1 = *(void ***)(this + 0x10);
  for (ppvVar4 = *(void ***)(this + 8); ppvVar4 != ppvVar1; ppvVar4 = ppvVar4 + 1) {
    pvVar3 = *ppvVar4;
                    /* try { // try from 00943084 to 0094308b has its CatchHandler @ 0094316c */
    plVar2 = (long *)I3DLoad::getSceneGraphRoot();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(long **)((long)pvVar3 + 0x218) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x218) + 8))();
    }
    I3DLoad::~I3DLoad((I3DLoad *)((long)pvVar3 + 0x220));
    operator_delete(pvVar3);
  }
  ppvVar1 = *(void ***)(this + 0x28);
  for (ppvVar4 = *(void ***)(this + 0x20); ppvVar4 != ppvVar1; ppvVar4 = ppvVar4 + 1) {
    pvVar3 = *ppvVar4;
                    /* try { // try from 009430e0 to 009430e7 has its CatchHandler @ 00943168 */
    plVar2 = (long *)I3DLoad::getSceneGraphRoot();
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (*(long **)((long)pvVar3 + 0x218) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x218) + 8))();
    }
    I3DLoad::~I3DLoad((I3DLoad *)((long)pvVar3 + 0x220));
    operator_delete(pvVar3);
  }
  Event::~Event((Event *)(this + 0x88));
  Mutex::~Mutex((Mutex *)(this + 0x3c));
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  return;
}


