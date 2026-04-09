// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 00761520
// Size: 376 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* FieldCropsQuery::construct(MethodInvocation*) */

undefined8 * FieldCropsQuery::construct(MethodInvocation *param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  long lVar3;
  undefined8 *puVar4;
  Logger *this_00;
  
  uVar1 = *(uint *)param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((lVar3 == 0) || (-1 < *(char *)(lVar3 + 0x15))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00761658 to 0076165f has its CatchHandler @ 007616a8 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00761664 to 00761667 has its CatchHandler @ 00761698 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid ground with id %u.\n",(ulong)uVar1);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x2c8);
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xb] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x10] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x15] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x25] = 0;
    puVar4[0x26] = 0;
    puVar4[0x24] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x30] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x34] = 0;
    puVar4[0x35] = 0;
    puVar4[0x33] = 0;
    puVar4[0x39] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x38] = 0;
    puVar4[0x3e] = 0;
    puVar4[0x3f] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x44] = 0;
    puVar4[0x42] = 0;
    puVar4[0x43] = 0;
    puVar4[0x48] = 0;
    puVar4[0x47] = 0;
    puVar4[0x49] = 0;
    puVar4[0x4d] = 0;
    puVar4[0x4c] = 0;
    puVar4[0x4e] = 0;
    puVar4[0x52] = 0;
    puVar4[0x51] = 0;
    puVar4[0x53] = 0;
    puVar4[0x57] = 0;
    puVar4[0x56] = 0;
    puVar4[0x58] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR__FieldCropsQuery_00fdb528;
    puVar4[1] = lVar3;
    *(undefined *)(puVar4 + 8) = 0;
    *(undefined4 *)((long)puVar4 + 0x44) = 0;
  }
  return puVar4;
}


