// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMultiLayer
// Entry Point: 00a6568c
// Size: 428 bytes
// Signature: undefined __thiscall createMultiLayer(FoliageSystemDesc * this, DensityMap * param_1)


/* FoliageSystemDesc::createMultiLayer(DensityMap*) */

ulong __thiscall FoliageSystemDesc::createMultiLayer(FoliageSystemDesc *this,DensityMap *param_1)

{
  DensityMap *pDVar1;
  long lVar2;
  MultiLayer *pMVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ResourceManager *this_00;
  ulong uVar7;
  ulong uVar8;
  DensityMap *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar2 = *(long *)(this + 0x10);
  lVar4 = *(long *)(this + 0x18) - lVar2;
  uVar8 = (lVar4 >> 3) * -0x3333333333333333;
  if (lVar4 != 0) {
    uVar7 = 0;
    do {
      if (*(DensityMap **)(lVar2 + uVar7 * 0x28) == param_1) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0
           )) {
                    /* try { // try from 00a657fc to 00a65807 has its CatchHandler @ 00a65838 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pDVar1 = param_1 + 0x31;
        if (((byte)param_1[0x30] & 1) != 0) {
          pDVar1 = *(DensityMap **)(param_1 + 0x40);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: DensityMap %s already has a MultiLayer; merging the layers.\n",
                          pDVar1);
        goto LAB_00a657c0;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 <= uVar8 && uVar8 - uVar7 != 0);
  }
  uStack_68 = 0;
  local_70 = (DensityMap *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (param_1 != (DensityMap *)0x0) {
    FUN_00f276d0(1,param_1 + 8);
  }
                    /* try { // try from 00a65714 to 00a65733 has its CatchHandler @ 00a65870 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,(Resource *)0x0);
  local_70 = param_1;
  iVar6 = (**(code **)(*(long *)param_1 + 0x60))(param_1);
  pMVar3 = *(MultiLayer **)(this + 0x18);
  local_50 = 1;
  if (iVar6 == 0) {
    local_50 = 0xffffffff;
  }
  if (pMVar3 < *(MultiLayer **)(this + 0x20)) {
                    /* try { // try from 00a65754 to 00a6575f has its CatchHandler @ 00a65858 */
    std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>::
    construct<FoliageSystemDesc::MultiLayer,FoliageSystemDesc::MultiLayer>
              ((allocator<FoliageSystemDesc::MultiLayer> *)(this + 0x20),pMVar3,
               (MultiLayer *)&local_70);
    *(MultiLayer **)(this + 0x18) = pMVar3 + 0x28;
  }
  else {
                    /* try { // try from 00a6576c to 00a65777 has its CatchHandler @ 00a65850 */
    std::__ndk1::
    vector<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>>::
    __push_back_slow_path<FoliageSystemDesc::MultiLayer>
              ((vector<FoliageSystemDesc::MultiLayer,std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>>
                *)(this + 0x10),(MultiLayer *)&local_70);
  }
  MultiLayer::~MultiLayer((MultiLayer *)&local_70);
  uVar7 = uVar8;
LAB_00a657c0:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


