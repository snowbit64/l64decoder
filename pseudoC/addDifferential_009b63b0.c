// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDifferential
// Entry Point: 009b63b0
// Size: 260 bytes
// Signature: undefined __thiscall addDifferential(Bt2RaycastVehicle * this, uint param_1, bool param_2, uint param_3, bool param_4, float param_5, float param_6)


/* Bt2RaycastVehicle::addDifferential(unsigned int, bool, unsigned int, bool, float, float) */

undefined8 __thiscall
Bt2RaycastVehicle::addDifferential
          (Bt2RaycastVehicle *this,uint param_1,bool param_2,uint param_3,bool param_4,float param_5
          ,float param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  Logger *this_00;
  uint uVar4;
  
  if (param_2) {
    if (*(uint *)(this + 0x3c) <= param_1) {
      param_1 = 0xffffffff;
    }
    uVar4 = param_1;
    if (param_4) goto LAB_009b6400;
LAB_009b63d0:
    uVar1 = param_3 + 0x14;
    if (*(uint *)(this + 0x5c) <= param_3) {
      uVar1 = 0xffffffff;
    }
    param_3 = uVar1;
    if (uVar4 == uVar1) goto LAB_009b6430;
  }
  else {
    uVar4 = param_1 + 0x14;
    if (*(uint *)(this + 0x5c) <= param_1) {
      uVar4 = 0xffffffff;
    }
    if (!param_4) goto LAB_009b63d0;
LAB_009b6400:
    if (*(uint *)(this + 0x3c) <= param_3) {
      param_3 = 0xffffffff;
    }
    if (uVar4 == param_3) goto LAB_009b6430;
  }
  if ((uVar4 != 0xffffffff) && (param_3 != 0xffffffff)) {
    uVar3 = addDifferential(this,uVar4,param_3,param_5,param_6);
    return uVar3;
  }
LAB_009b6430:
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 009b6474 to 009b647b has its CatchHandler @ 009b64c4 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 009b6480 to 009b6483 has its CatchHandler @ 009b64b4 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error (physics): Adding differential with invalid child indices.\n");
  return 0xffffffff;
}


