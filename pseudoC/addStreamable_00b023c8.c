// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStreamable
// Entry Point: 00b023c8
// Size: 216 bytes
// Signature: undefined __thiscall addStreamable(StreamManager * this, Streamable * param_1, STREAM_QUEUE param_2)


/* StreamManager::addStreamable(Streamable&, StreamManager::STREAM_QUEUE) */

uint __thiscall
StreamManager::addStreamable(StreamManager *this,Streamable *param_1,STREAM_QUEUE param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 2) {
    StreamQueue::addStreamable((StreamQueue *)this,param_1);
    Streamable::onAddedToStreamQueue(param_1,2);
  }
  else if (param_2 == 1) {
    RenderDeviceManager::getInstance();
    uVar2 = RenderDeviceManager::getCurrentRenderDevice();
    AudioDeviceManager::getInstance();
    uVar3 = AudioDeviceManager::getCurrentAudioDevice();
    ScriptSystemManager::getInstance();
    uVar4 = ScriptSystemManager::getCurrentScriptSystem();
    if (1 < *(int *)(param_1 + 8) - 3U) {
      do {
        uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar2,uVar3,uVar4);
        if (*(int *)(param_1 + 8) - 3U < 2) break;
        ThreadUtil::usleep(0);
      } while (1 < *(int *)(param_1 + 8) - 3U);
      goto LAB_00b02488;
    }
  }
  uVar1 = 1;
LAB_00b02488:
  return uVar1 & 1;
}


