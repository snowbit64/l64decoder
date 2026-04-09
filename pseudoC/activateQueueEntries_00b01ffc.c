// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activateQueueEntries
// Entry Point: 00b01ffc
// Size: 216 bytes
// Signature: undefined __thiscall activateQueueEntries(StreamManager * this, float param_1)


/* StreamManager::activateQueueEntries(float) */

void __thiscall StreamManager::activateQueueEntries(StreamManager *this,float param_1)

{
  long lVar1;
  double dVar2;
  IRenderDevice *pIVar3;
  IAudioDevice *pIVar4;
  LuauScriptSystem *pLVar5;
  ulong uVar6;
  bool local_64 [4];
  StopWatch aSStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  RenderDeviceManager::getInstance();
  pIVar3 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
  AudioDeviceManager::getInstance();
  pIVar4 = (IAudioDevice *)AudioDeviceManager::getCurrentAudioDevice();
  ScriptSystemManager::getInstance();
  pLVar5 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  StopWatch::StopWatch(aSStack_60);
  StopWatch::start();
  local_64[0] = false;
  do {
    do {
      uVar6 = StreamQueue::activateNextStreamable((StreamQueue *)this,pIVar3,pIVar4,pLVar5,local_64)
      ;
      if ((uVar6 & 1) == 0) goto LAB_00b020a4;
    } while (param_1 < 0.0);
    if (local_64[0] == false) break;
    dVar2 = (double)StopWatch::getMs();
  } while ((float)dVar2 <= param_1);
LAB_00b020a4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


