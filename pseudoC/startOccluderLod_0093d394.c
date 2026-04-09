// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startOccluderLod
// Entry Point: 0093d394
// Size: 316 bytes
// Signature: undefined __cdecl startOccluderLod(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startOccluderLod(void*, char const*, char const**) */

void I3DSceneGraphFactory::startOccluderLod(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  Logger *this;
  long lVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)((long)param_1 + 0x280);
  ExpatUtil::getUIntAttr("occLodLevel",&local_3c,param_3);
  if (local_3c < 4) {
    lVar3 = lVar3 + (ulong)local_3c * 0x10;
    ExpatUtil::getUIntAttr("occFaceCount",(uint *)(lVar3 + 0x198),param_3);
    ExpatUtil::getFloatAttr("occMaxHausdorffDistance",(float *)(lVar3 + 0x19c),param_3);
    ExpatUtil::getFloatAttr("occMaxHausdorffDistanceExtra",(float *)(lVar3 + 0x1a0),param_3);
    ExpatUtil::getFloatAttr("occMinHorizontalDistance",(float *)(lVar3 + 0x1a4),param_3);
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093d48c to 0093d493 has its CatchHandler @ 0093d4e0 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0093d498 to 0093d49b has its CatchHandler @ 0093d4d0 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: invalid occluder lod level %u\n",(ulong)local_3c);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


