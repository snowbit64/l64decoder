// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadI3DFileAsync
// Entry Point: 008fea78
// Size: 868 bytes
// Signature: undefined __thiscall loadI3DFileAsync(I3DLoad * this, char * param_1, STREAM_QUEUE param_2, bool param_3, bool param_4, bool param_5, MeshSplitFileState * param_6, StreamQueueCallback * param_7, void * param_8, LOAD_PROGRESS * param_9)


/* I3DLoad::loadI3DFileAsync(char const*, StreamManager::STREAM_QUEUE, bool, bool, bool,
   MeshSplitFileState const*, StreamManager::StreamQueueCallback*, void*, I3DLoad::LOAD_PROGRESS
   volatile*) */

void __thiscall
I3DLoad::loadI3DFileAsync
          (I3DLoad *this,char *param_1,STREAM_QUEUE param_2,bool param_3,bool param_4,bool param_5,
          MeshSplitFileState *param_6,StreamQueueCallback *param_7,void *param_8,
          LOAD_PROGRESS *param_9)

{
  undefined8 *this_00;
  I3DLoad **ppIVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  StreamManager *this_01;
  Logger *pLVar7;
  basic_string *extraout_x1;
  long lVar8;
  long lVar9;
  I3DLoad **ppIVar10;
  I3DLoad **ppIVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  *(StreamQueueCallback **)(this + 600) = param_7;
  this_00 = (undefined8 *)(this + 0x210);
  *(void **)(this + 0x260) = param_8;
  *(STREAM_QUEUE *)(this + 0x254) = param_2;
  this[0x34] = (I3DLoad)param_4;
  this[0x35] = (I3DLoad)param_5;
  *(MeshSplitFileState **)(this + 0x1a8) = param_6;
  this[0x36] = (I3DLoad)param_3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this_00);
  PathUtil::makeUnifiedPath((PathUtil *)this_00,extraout_x1);
  if (((byte)this[0x210] & 1) != 0) {
    operator_delete(*(void **)(this + 0x220));
  }
  *(undefined8 *)(this + 0x218) = uStack_78;
  *this_00 = local_80;
  *(undefined8 *)(this + 0x220) = local_70;
  PathUtil::getBasePath((basic_string *)this_00,(basic_string *)(this + 0x1f8),true);
  StopWatch::StopWatch((StopWatch *)&local_80);
  StopWatch::start();
  if (param_9 != (LOAD_PROGRESS *)0x0) {
    *(undefined4 *)param_9 = 3;
  }
  plVar5 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  if (plVar5 == (long *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008fed98 to 008fed9f has its CatchHandler @ 008fedec */
      pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008feda4 to 008feda7 has its CatchHandler @ 008feddc */
      Logger::Logger(pLVar7);
      LogManager::getInstance()::singletonLogManager = pLVar7;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: i3d  \'%s\' could not be found.\n",param_1);
    *(undefined4 *)(this + 0x1b0) = 1;
  }
  else {
    uVar6 = loadExpat(this,(File *)plVar5);
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(this + 0x1b0) = 2;
    }
    (**(code **)(*plVar5 + 8))(plVar5);
    if (*(int *)(this + 0x1b0) == 0) {
      lVar12 = *(long *)(this + 0x280);
      lVar8 = *(long *)(lVar12 + 0x18);
      lVar9 = *(long *)(lVar12 + 0x20);
      if (lVar9 != lVar8) {
        uVar6 = 0;
        ppIVar1 = (I3DLoad **)(this + 0x138);
        do {
          ppIVar11 = (I3DLoad **)*ppIVar1;
          if (ppIVar11 != (I3DLoad **)0x0) {
            uVar2 = *(uint *)(lVar8 + uVar6 * 0x10 + 8);
            ppIVar10 = ppIVar1;
            do {
              if (*(uint *)(ppIVar11 + 4) >= uVar2) {
                ppIVar10 = ppIVar11;
              }
              ppIVar11 = (I3DLoad **)ppIVar11[*(uint *)(ppIVar11 + 4) < uVar2];
            } while (ppIVar11 != (I3DLoad **)0x0);
            if (((ppIVar10 != ppIVar1) && (*(uint *)(ppIVar10 + 4) <= uVar2)) &&
               (((byte)ppIVar10[5][0x11] >> 3 & 1) != 0)) {
              plVar5 = *(long **)(lVar8 + uVar6 * 0x10);
              (**(code **)(*plVar5 + 0x50))(plVar5,ppIVar10[5],1);
              lVar8 = *(long *)(lVar12 + 0x18);
              lVar9 = *(long *)(lVar12 + 0x20);
            }
          }
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (uVar6 < (ulong)(lVar9 - lVar8 >> 4));
      }
    }
  }
  StopWatch::stop();
  if ((*(int *)(this + 0x1b0) == 0) && (param_3)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 008fed48 to 008fed4f has its CatchHandler @ 008fee00 */
      pLVar7 = (Logger *)operator_new(0x38);
                    /* try { // try from 008fed54 to 008fed57 has its CatchHandler @ 008fedf0 */
      Logger::Logger(pLVar7);
      LogManager::getInstance()::singletonLogManager = pLVar7;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    StopWatch::getStoppedMs();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"%s (%.2f ms)\n",
                      param_1);
  }
  Mutex::leaveCriticalSection();
  if (*(int *)(this + 0x1b0) == 0) {
    if (param_9 != (LOAD_PROGRESS *)0x0) {
      *(undefined4 *)param_9 = 4;
    }
    TerrainPatchOccluderManager::getInstance();
    TerrainPatchOccluderManager::waitIsInitialSetupComplete();
  }
  *(undefined4 *)(this + 0x38) = 0;
  if (param_9 != (LOAD_PROGRESS *)0x0) {
    *(undefined4 *)param_9 = 5;
  }
  this_01 = (StreamManager *)StreamManager::getInstance();
  StreamManager::addStreamable(this_01,(Streamable *)this,*(STREAM_QUEUE *)(this + 0x254));
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(this + 0x1b0));
}


