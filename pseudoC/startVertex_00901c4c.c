// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startVertex
// Entry Point: 00901c4c
// Size: 240 bytes
// Signature: undefined __cdecl startVertex(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startVertex(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startVertex(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Logger *this;
  long lVar4;
  
  lVar4 = *(long *)((long)param_1 + 0x278);
  if (*(IndexedTriangleSet **)(lVar4 + 8) != (IndexedTriangleSet *)0x0) {
    uVar3 = I3DLoadUtil::getVertexData
                      (param_3,*(IndexedTriangleSet **)(lVar4 + 8),*(uint *)(lVar4 + 0x40));
    if ((uVar3 & 1) == 0) {
      if (*(long **)(lVar4 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + 8) + 8))();
      }
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined4 *)(lVar4 + 0x40) = 0;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00901cfc to 00901d03 has its CatchHandler @ 00901d4c */
        this = (Logger *)operator_new(0x38);
                    /* try { // try from 00901d08 to 00901d0b has its CatchHandler @ 00901d3c */
        Logger::Logger(this);
        LogManager::getInstance()::singletonLogManager = this;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      lVar1 = lVar4 + 0x51;
      if ((*(byte *)(lVar4 + 0x50) & 1) != 0) {
        lVar1 = *(long *)(lVar4 + 0x60);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Missing position data in vertex in triangle set \'%s\' (%u).\n",
                         lVar1,(ulong)*(uint *)(lVar4 + 0x7c));
    }
    else {
      *(int *)(lVar4 + 0x40) = *(int *)(lVar4 + 0x40) + 1;
    }
  }
  return;
}


