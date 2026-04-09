// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startIndexedTriangleSubsets
// Entry Point: 00901f70
// Size: 288 bytes
// Signature: undefined __cdecl startIndexedTriangleSubsets(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startIndexedTriangleSubsets(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startIndexedTriangleSubsets
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  Logger *this;
  undefined8 extraout_x1;
  long lVar6;
  undefined auVar7 [16];
  uint local_3c;
  long local_38;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)((long)param_1 + 0x278);
  if (*(long *)(lVar6 + 8) != 0) {
    uVar4 = ExpatUtil::getUIntAttr("count",&local_3c,param_3);
    if ((uVar4 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 0090204c to 00902053 has its CatchHandler @ 009020a0 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00902058 to 0090205b has its CatchHandler @ 00902090 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar1 = lVar6 + 0x51;
      if ((*(byte *)(lVar6 + 0x50) & 1) != 0) {
        lVar1 = *(long *)(lVar6 + 0x60);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Missing subset count attribute in triangle set \'%s\' (%u).\n",
                         lVar1,(ulong)*(uint *)(lVar6 + 0x7c));
      plVar5 = *(long **)(lVar6 + 8);
      auVar7._8_8_ = extraout_x1;
      auVar7._0_8_ = plVar5;
      if (plVar5 != (long *)0x0) {
        auVar7 = (**(code **)(*plVar5 + 8))();
      }
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    else {
      auVar7 = IndexedTriangleSet::setNumSubsets(*(IndexedTriangleSet **)(lVar6 + 8),local_3c);
      *(undefined4 *)(lVar6 + 0x48) = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar7._0_8_,auVar7._8_8_);
}


