// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RenderList
// Entry Point: 00a18530
// Size: 348 bytes
// Signature: undefined __thiscall ~RenderList(RenderList * this)


/* RenderList::~RenderList() */

void __thiscall RenderList::~RenderList(RenderList *this)

{
  void **ppvVar1;
  void *pvVar2;
  LightList *this_00;
  
                    /* try { // try from 00a18548 to 00a18553 has its CatchHandler @ 00a1868c */
  ThreadPoolTaskManager::waitForAllTasks((ThreadPoolTaskManager *)(this + 0x140),false);
  this_00 = *(LightList **)(this + 0x30);
  if (this_00 != (LightList *)0x0) {
    LightList::~LightList(this_00);
    operator_delete(this_00);
  }
  if (*(void **)(this + 0x2b0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2b0));
  }
  if (*(void **)(this + 0x2c0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2c0));
  }
  if (*(void **)(this + 0x2d0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x2d0));
  }
  *(undefined ***)(this + 0x1b8) = &PTR__Task_00fde908;
  if (((byte)this[0x1c8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1d8));
  }
  ThreadPoolTaskManager::~ThreadPoolTaskManager((ThreadPoolTaskManager *)(this + 0x140));
  ppvVar1 = (void **)*(void **)(this + 0x128);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x118);
  *(undefined8 *)(this + 0x118) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x100);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xe8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xd0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xb8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xa0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x88);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x70);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x40) = pvVar2;
  operator_delete(pvVar2);
  return;
}


