// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createState
// Entry Point: 00a64d00
// Size: 336 bytes
// Signature: undefined __thiscall createState(Layer * this, bool param_1)


/* FoliageSystemDesc::Layer::createState(bool) */

uint __thiscall FoliageSystemDesc::Layer::createState(Layer *this,bool param_1)

{
  long lVar1;
  int iVar2;
  long *this_00;
  Layer *pLVar3;
  uint uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (long *)(this + 0x58);
  uVar4 = (int)(*(ulong *)(this + 0x60) - *this_00 >> 3) * -0x3b13b13b;
  if (uVar4 >> (ulong)(*(uint *)(this + 0x50) & 0x1f) == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    if (*(ulong *)(this + 0x60) < *(ulong *)(this + 0x68)) {
                    /* try { // try from 00a64db8 to 00a64dd3 has its CatchHandler @ 00a64e68 */
      std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
      ::__construct_one_at_end<FoliageSystemDesc::State>
                ((vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                  *)this_00,(State *)&local_a0);
    }
    else {
      std::__ndk1::vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
      ::__push_back_slow_path<FoliageSystemDesc::State>
                ((vector<FoliageSystemDesc::State,std::__ndk1::allocator<FoliageSystemDesc::State>>
                  *)this_00,(State *)&local_a0);
    }
    State::~State((State *)&local_a0);
  }
  else if (param_1) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00a64e14 to 00a64e1f has its CatchHandler @ 00a64e50 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pLVar3 = *(Layer **)(this + 0x10);
    if (((byte)*this & 1) == 0) {
      pLVar3 = this + 1;
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: FoliageSystemDesc: no more states can be created for layer \'%s\' - max %u.\n"
                       ,pLVar3,(ulong)(uint)(1 << (ulong)(*(uint *)(this + 0x50) & 0x1f)));
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


