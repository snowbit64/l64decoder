// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRigidBody
// Entry Point: 009b551c
// Size: 400 bytes
// Signature: undefined __cdecl addRigidBody(btRigidBody * param_1, Bt2World * param_2, bool param_3)


/* Bt2RaycastVehicle::addRigidBody(btRigidBody*, Bt2World*, bool) */

void Bt2RaycastVehicle::addRigidBody(btRigidBody *param_1,Bt2World *param_2,bool param_3)

{
  int iVar1;
  Logger *pLVar2;
  Bt2World **ppBVar3;
  Bt2World *pBVar4;
  
  ppBVar3 = (Bt2World **)(param_1 + 8);
  if (*ppBVar3 != param_2) {
    if (*ppBVar3 == (Bt2World *)0x0) {
LAB_009b55f0:
      *ppBVar3 = param_2;
      return;
    }
    ppBVar3 = (Bt2World **)(param_1 + 0x10);
    if (*ppBVar3 != param_2) {
      if (*ppBVar3 == (Bt2World *)0x0) goto LAB_009b55f0;
      ppBVar3 = (Bt2World **)(param_1 + 0x18);
      if (*ppBVar3 != param_2) {
        if (*ppBVar3 == (Bt2World *)0x0) goto LAB_009b55f0;
        ppBVar3 = (Bt2World **)(param_1 + 0x20);
        if (*ppBVar3 != param_2) {
          if (*ppBVar3 == (Bt2World *)0x0) goto LAB_009b55f0;
          ppBVar3 = (Bt2World **)(param_1 + 0x28);
          if (*ppBVar3 != param_2) {
            if (*ppBVar3 == (Bt2World *)0x0) goto LAB_009b55f0;
            pBVar4 = *(Bt2World **)(param_1 + 0x30);
            if (pBVar4 != param_2) {
              if (pBVar4 != (Bt2World *)0x0) {
                if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,
                                                param_2,param_3), iVar1 != 0)) {
                    /* try { // try from 009b566c to 009b5673 has its CatchHandler @ 009b56b0 */
                  pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 009b5678 to 009b567b has its CatchHandler @ 009b56ac */
                  Logger::Logger(pLVar2);
                  LogManager::getInstance()::singletonLogManager = pLVar2;
                  __cxa_atexit(LogManager::~LogManager,
                               &LogManager::getInstance()::singletonLogManager,&PTR_LOOP_00fd8de0);
                  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
                }
                LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                                   "Error (physics): Adding too many rigid bodies to a vehicle. Maximum is %u.\n"
                                   ,6);
                return;
              }
              *(Bt2World **)(param_1 + 0x30) = param_2;
              return;
            }
          }
        }
      }
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager,param_2,param_3),
     iVar1 != 0)) {
                    /* try { // try from 009b561c to 009b5623 has its CatchHandler @ 009b56c4 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 009b5628 to 009b562b has its CatchHandler @ 009b56b4 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning (physics): Adding duplicate rigid body to a vehicle.\n");
  return;
}


