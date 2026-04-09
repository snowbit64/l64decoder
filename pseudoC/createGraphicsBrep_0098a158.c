// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createGraphicsBrep
// Entry Point: 0098a158
// Size: 576 bytes
// Signature: undefined __cdecl createGraphicsBrep(char * param_1, IndexedTriangleSet * param_2)


/* MeshSplitUtil::createGraphicsBrep(char const*, IndexedTriangleSet*) */

long * MeshSplitUtil::createGraphicsBrep(char *param_1,IndexedTriangleSet *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  
  uVar2 = IndexedTriangleSet::is16Bit();
  if ((uVar2 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0098a288 to 0098a293 has its CatchHandler @ 0098a3a4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar5 = 
    "Warning: Failed to create splittable mesh \'%s\'. Maximum 65536 vertices are allowed.\n";
  }
  else {
    *(uint *)(param_2 + 0x8c) = *(uint *)(param_2 + 0x8c) | 0x10;
    lVar3 = TriangleSet::getNormals();
    if ((lVar3 == 0) || (lVar3 = TriangleSet::getTexCoords((TriangleSet *)param_2,0), lVar3 == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0098a2d0 to 0098a2db has its CatchHandler @ 0098a3a0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = 
      "Warning: Failed to create splittable mesh \'%s\'. Normals and UV set 0 are required.\n";
    }
    else {
      plVar4 = (long *)BrepUtil::createBrepFromIndexedTriangleSet(param_2,true,true);
      if (plVar4 != (long *)0x0) {
        uVar2 = Brep::isClosed();
        if ((uVar2 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar1 != 0)) {
                    /* try { // try from 0098a360 to 0098a36b has its CatchHandler @ 0098a398 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Failed to create splittable mesh \'%s\'. Splittable meshes need to be closed.\n"
                            ,param_1);
          (**(code **)(*plVar4 + 8))(plVar4);
          return (long *)0x0;
        }
        return plVar4;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0098a318 to 0098a323 has its CatchHandler @ 0098a39c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "Warning: Failed to create splittable mesh \'%s\'.\n";
    }
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5,param_1);
  return (long *)0x0;
}


