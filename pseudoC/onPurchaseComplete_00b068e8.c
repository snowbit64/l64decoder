// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onPurchaseComplete
// Entry Point: 00b068e8
// Size: 320 bytes
// Signature: undefined __thiscall onPurchaseComplete(AndroidInAppPurchase * this, uint param_1, int param_2)


/* AndroidInAppPurchase::onPurchaseComplete(unsigned int, int) */

void __thiscall
AndroidInAppPurchase::onPurchaseComplete(AndroidInAppPurchase *this,uint param_1,int param_2)

{
  long lVar1;
  void *__dest;
  ulong uVar2;
  uint *puVar3;
  size_t __n;
  int iVar4;
  Logger *this_00;
  ulong uVar5;
  uint *puVar6;
  
  puVar3 = *(uint **)(this + 0x10);
  if (*(long *)(this + 0x18) - (long)puVar3 != 0) {
    uVar5 = 0;
    uVar2 = (*(long *)(this + 0x18) - (long)puVar3) / 0x18;
    puVar6 = puVar3;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    do {
      if (*puVar6 == param_1) {
        lVar1 = (uVar5 & 0xffffffff) + (uVar5 & 0xffffffff) * 2;
        (**(code **)(puVar3 + lVar1 * 2 + 2))
                  (param_2,param_1,*(undefined8 *)(puVar3 + lVar1 * 2 + 4));
        __dest = (void *)(*(long *)(this + 0x10) + lVar1 * 8);
        __n = *(long *)(this + 0x18) - (long)(void *)((long)__dest + 0x18);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x18),__n);
        }
        *(size_t *)(this + 0x18) = (long)__dest + __n;
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar2 != uVar5);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00b069e8 to 00b069ef has its CatchHandler @ 00b06a38 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b069f4 to 00b069f7 has its CatchHandler @ 00b06a28 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "onPurchaseComplete: callback function for product id %d not found.",
                    (ulong)param_1);
  return;
}


