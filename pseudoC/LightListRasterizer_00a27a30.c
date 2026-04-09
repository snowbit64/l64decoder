// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LightListRasterizer
// Entry Point: 00a27a30
// Size: 224 bytes
// Signature: undefined __thiscall ~LightListRasterizer(LightListRasterizer * this)


/* LightListRasterizer::~LightListRasterizer() */

void __thiscall LightListRasterizer::~LightListRasterizer(LightListRasterizer *this)

{
  void *pvVar1;
  
                    /* try { // try from 00a27a48 to 00a27a53 has its CatchHandler @ 00a27b10 */
  ThreadPoolTaskManager::waitForAllTasks((ThreadPoolTaskManager *)(this + 0x90),false);
  if (*(void **)(this + 0x88) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x88));
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined ***)(this + 0x108) = &PTR__Task_00fde908;
  if (((byte)this[0x118] & 1) != 0) {
    operator_delete(*(void **)(this + 0x128));
  }
  ThreadPoolTaskManager::~ThreadPoolTaskManager((ThreadPoolTaskManager *)(this + 0x90));
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


