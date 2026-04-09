// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onGridResize
// Entry Point: 00a697c0
// Size: 456 bytes
// Signature: undefined __thiscall onGridResize(FoliageTransformGroup * this, uint param_1, IRenderDevice * param_2)


/* FoliageTransformGroup::onGridResize(unsigned int, IRenderDevice*) */

void __thiscall
FoliageTransformGroup::onGridResize(FoliageTransformGroup *this,uint param_1,IRenderDevice *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  void *__s;
  undefined8 uVar5;
  BuddyAllocator *pBVar6;
  undefined8 local_68;
  undefined4 local_60;
  int iStack_5c;
  undefined4 local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  uVar2 = param_1 * param_1;
  local_48 = *(long *)(lVar3 + 0x28);
  *(uint *)(this + 0x248) = param_1;
  uVar1 = *(uint *)(*(long *)(this + 0x230) + 0xa4);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  *(uint *)(this + 0x264) = uVar1 * uVar2;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a6994c to 00a69957 has its CatchHandler @ 00a69988 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "FoliageTransformGroup \'%s\' may need space for up to %u instances (%u per cell x %u cells)\n"
                    ,*(undefined8 *)(this + 8),(ulong)*(uint *)(this + 0x264),(ulong)uVar1,
                    (ulong)uVar2);
  if (*(void **)(this + 600) != (void *)0x0) {
    operator_delete__(*(void **)(this + 600));
  }
  __s = operator_new__((ulong)uVar2 << 2);
  *(void **)(this + 600) = __s;
  memset(__s,0,(ulong)uVar2 << 2);
  pBVar6 = *(BuddyAllocator **)(this + 0x268);
  *(undefined4 *)(this + 0x260) = 0;
  if (pBVar6 != (BuddyAllocator *)0x0) {
    BuddyAllocator::~BuddyAllocator(pBVar6);
    operator_delete(pBVar6);
  }
  pBVar6 = (BuddyAllocator *)operator_new(0x20);
                    /* try { // try from 00a69894 to 00a6989f has its CatchHandler @ 00a699a0 */
  BuddyAllocator::BuddyAllocator(pBVar6,uVar1,*(uint *)(this + 0x264),8);
  *(BuddyAllocator **)(this + 0x268) = pBVar6;
  if (*(long **)(this + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x250) + 8))();
    pBVar6 = *(BuddyAllocator **)(this + 0x268);
  }
  local_68 = 0;
  local_50 = "Foliage instances";
  iStack_5c = *(int *)(pBVar6 + 0x1c) * *(int *)(pBVar6 + 0x14);
  local_58 = 0x1004;
  local_60 = 8;
  uVar5 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
  uVar5 = (**(code **)(*(long *)param_2 + 0x120))(param_2,uVar5,&local_68);
  *(undefined8 *)(this + 0x250) = uVar5;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


