// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: streamingThreadFunction
// Entry Point: 00944264
// Size: 368 bytes
// Signature: undefined __cdecl streamingThreadFunction(void * param_1, bool * param_2)


/* I3DStreamingManager::streamingThreadFunction(void*, bool volatile&) */

undefined8 I3DStreamingManager::streamingThreadFunction(void *param_1,bool *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  TextureStreamingManager *this;
  char **ppcVar5;
  char *pcVar6;
  
  uVar4 = ThreadUtil::getCurrentThreadId();
  *(undefined8 *)((long)param_1 + 0x80) = uVar4;
  Event::wait((Event *)((long)param_1 + 0x88),0xffffffff);
  cVar2 = *param_2;
joined_r0x009442a8:
  if (cVar2 != '\0') {
    return 0;
  }
LAB_00944304:
  Mutex::enterCriticalSection();
  ppcVar5 = *(char ***)((long)param_1 + 8);
  do {
    if (ppcVar5 == *(char ***)((long)param_1 + 0x10)) {
      if (*(char *)((long)param_1 + 0x38) == '\0') goto LAB_009442e8;
      ppcVar5 = *(char ***)((long)param_1 + 0x20);
      goto LAB_00944334;
    }
    pcVar6 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
  } while (pcVar6[0x4cd] != '\0');
  goto LAB_00944348;
  while( true ) {
    pcVar6 = *ppcVar5;
    ppcVar5 = ppcVar5 + 1;
    if (pcVar6[0x4cd] == '\0') break;
LAB_00944334:
    if (ppcVar5 == *(char ***)((long)param_1 + 0x28)) goto LAB_009442e8;
  }
LAB_00944348:
  pcVar6[0x4cd] = '\x01';
  Mutex::leaveCriticalSection();
  puVar1 = (undefined4 *)(pcVar6 + 0x4d0);
  if (pcVar6[0x4cc] == '\0') {
    *(undefined4 *)(pcVar6 + 0x4d0) = 2;
    this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
    TextureStreamingManager::waitMemoryBudgetProtectionGreenlight(this,0xffffffff);
    if (pcVar6[0x4cc] == '\0') {
      iVar3 = I3DLoad::loadI3DFileAsync
                        ((I3DLoad *)(pcVar6 + 0x220),pcVar6,2,(bool)pcVar6[0x210],
                         (bool)pcVar6[0x200],(bool)pcVar6[0x201],
                         *(MeshSplitFileState **)(pcVar6 + 0x208),(StreamQueueCallback *)param_1,
                         pcVar6,(LOAD_PROGRESS *)puVar1);
      if (iVar3 == 1) {
        *(undefined4 *)(pcVar6 + 0x4dc) = 2;
      }
      else if (iVar3 == 0) {
        *(undefined4 *)(pcVar6 + 0x4dc) = 0;
      }
      else {
        *(undefined4 *)(pcVar6 + 0x4dc) = 3;
      }
    }
    else {
      *puVar1 = 6;
    }
  }
  else {
    *puVar1 = 6;
  }
  goto LAB_00944304;
LAB_009442e8:
  Mutex::leaveCriticalSection();
  Event::wait((Event *)((long)param_1 + 0x88),0xffffffff);
  cVar2 = *param_2;
  goto joined_r0x009442a8;
}


