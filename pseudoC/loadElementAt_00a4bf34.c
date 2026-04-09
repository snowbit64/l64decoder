// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadElementAt
// Entry Point: 00a4bf34
// Size: 508 bytes
// Signature: undefined __thiscall loadElementAt(AudioSourceSample * this, uint param_1, STREAM_QUEUE param_2)


/* AudioSourceSample::loadElementAt(unsigned int, StreamManager::STREAM_QUEUE) */

undefined4 __thiscall
AudioSourceSample::loadElementAt(AudioSourceSample *this,uint param_1,STREAM_QUEUE param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ResourceManager *this_00;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  
  puVar2 = (uint *)((long)(this + 0xb0) + ((ulong)param_1 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar2 = (uint *)(*(long *)(this + 0xf0) + (ulong)param_1 * 0x38);
  }
  pcVar1 = (char *)((long)puVar2 + 9);
  pcVar8 = pcVar1;
  if ((*(byte *)(puVar2 + 2) & 1) != 0) {
    pcVar8 = *(char **)(puVar2 + 6);
  }
  uVar5 = StringUtil::iEndsWith(pcVar8,".gls");
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  pcVar8 = pcVar1;
  if ((*(byte *)(puVar2 + 2) & 1) != 0) {
    pcVar8 = *(char **)(puVar2 + 6);
  }
  if ((uVar5 & 1) == 0) {
    lVar6 = ResourceManager::get(this_00,pcVar8,3,(ResourceDesc *)0x0,param_2,true,false);
    *(long *)(puVar2 + 8) = lVar6;
    if (lVar6 != 0) {
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a4c0b0 to 00a4c0bb has its CatchHandler @ 00a4c134 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    bVar3 = *(byte *)(puVar2 + 2);
    pcVar9 = *(char **)(puVar2 + 6);
    pcVar8 = "Error: Can\'t load sample \'%s\'.\n";
  }
  else {
    lVar6 = ResourceManager::get(this_00,pcVar8,4,(ResourceDesc *)0x0,param_2,true,false);
    if (lVar6 != 0) {
      plVar7 = (long *)operator_new(0xa8);
                    /* try { // try from 00a4bfdc to 00a4bfe3 has its CatchHandler @ 00a4c15c */
      LoopSynthesisGenerator::LoopSynthesisGenerator((LoopSynthesisGenerator *)(plVar7 + 2));
                    /* try { // try from 00a4bfe8 to 00a4bfeb has its CatchHandler @ 00a4c14c */
      LoopSynthesisStreamSource::LoopSynthesisStreamSource
                ((LoopSynthesisStreamSource *)(plVar7 + 0x12));
      *(long **)(puVar2 + 10) = plVar7;
      *plVar7 = lVar6;
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00a4c0f8 to 00a4c103 has its CatchHandler @ 00a4c130 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    bVar3 = *(byte *)(puVar2 + 2);
    pcVar9 = *(char **)(puVar2 + 6);
    pcVar8 = "Error: Can\'t load loop synthesis element \'%s\'.\n";
  }
  if ((bVar3 & 1) != 0) {
    pcVar1 = pcVar9;
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar8,pcVar1);
  return 0;
}


