// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateTypeIndex
// Entry Point: 00a642fc
// Size: 256 bytes
// Signature: undefined __thiscall allocateTypeIndex(MultiLayer * this, uint * param_1, bool param_2)


/* FoliageSystemDesc::MultiLayer::allocateTypeIndex(unsigned int&, bool) */

undefined8 __thiscall
FoliageSystemDesc::MultiLayer::allocateTypeIndex(MultiLayer *this,uint *param_1,bool param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  Logger *this_00;
  long lVar6;
  
  uVar2 = *(uint *)(this + 0x20);
  *param_1 = uVar2;
  if (uVar2 == 0xffffffff) {
    uVar5 = 1;
  }
  else {
    uVar4 = (**(code **)(**(long **)this + 0x60))();
    if (uVar2 >> (uVar4 & 0x3f) == 0) {
      uVar5 = 1;
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    }
    else {
      if (param_2) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00a643bc to 00a643c3 has its CatchHandler @ 00a6440c */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a643c8 to 00a643cb has its CatchHandler @ 00a643fc */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar6 = *(long *)this;
        lVar1 = lVar6 + 0x31;
        if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
          lVar1 = *(long *)(lVar6 + 0x40);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: no more type indexes can be allocated for MultiLayer \'%s\'.\n"
                           ,lVar1);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


