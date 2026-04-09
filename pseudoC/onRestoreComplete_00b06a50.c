// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRestoreComplete
// Entry Point: 00b06a50
// Size: 176 bytes
// Signature: undefined __thiscall onRestoreComplete(AndroidInAppPurchase * this, int param_1)


/* AndroidInAppPurchase::onRestoreComplete(int) */

void __thiscall AndroidInAppPurchase::onRestoreComplete(AndroidInAppPurchase *this,int param_1)

{
  int iVar1;
  Logger *this_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar2 = *(undefined8 *)(this + 0x30);
    *(code **)(this + 0x28) = (code *)0x0;
    *(undefined8 *)(this + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00b06a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b06ac0 to 00b06ac7 has its CatchHandler @ 00b06b10 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b06acc to 00b06acf has its CatchHandler @ 00b06b00 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "onRestoreComplete: callback function not found.");
  return;
}


