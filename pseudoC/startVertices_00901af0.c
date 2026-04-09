// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startVertices
// Entry Point: 00901af0
// Size: 308 bytes
// Signature: undefined __cdecl startVertices(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startVertices(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startVertices(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  Logger *this;
  undefined8 extraout_x1;
  uint *puVar7;
  undefined auVar8 [16];
  uint local_3c;
  long local_38;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar7 = *(uint **)((long)param_1 + 0x278);
  if (*(long *)(puVar7 + 2) != 0) {
    uVar5 = ExpatUtil::getIntAttr("count",(int *)&local_3c,param_3);
    if ((uVar5 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00901be0 to 00901be7 has its CatchHandler @ 00901c34 */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00901bec to 00901bef has its CatchHandler @ 00901c24 */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar1 = (long)puVar7 + 0x51;
      if ((*(byte *)(puVar7 + 0x14) & 1) != 0) {
        lVar1 = *(long *)(puVar7 + 0x18);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Missing vertices count attribute in triangle set \'%s\' (%u).\n",
                         lVar1,(ulong)puVar7[0x1f]);
      plVar6 = *(long **)(puVar7 + 2);
      auVar8._8_8_ = extraout_x1;
      auVar8._0_8_ = plVar6;
      if (plVar6 != (long *)0x0) {
        auVar8 = (**(code **)(*plVar6 + 8))();
      }
      *(undefined8 *)(puVar7 + 2) = 0;
    }
    else {
      uVar3 = I3DLoadUtil::getVertexAttributes(param_3);
      *puVar7 = uVar3;
      auVar8 = TriangleSet::setNumVertices(*(TriangleSet **)(puVar7 + 2),local_3c,uVar3);
      puVar7[0x10] = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar8._0_8_,auVar8._8_8_);
}


