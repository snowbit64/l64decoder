// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initAudio
// Entry Point: 006c9cd4
// Size: 276 bytes
// Signature: undefined __thiscall initAudio(Application * this, bool param_1)


/* Application::initAudio(bool) */

void __thiscall Application::initAudio(Application *this,bool param_1)

{
  Application *pAVar1;
  byte bVar2;
  AudioDeviceManager *this_00;
  long *plVar3;
  VoiceChatManager *this_01;
  EngineManager *this_02;
  AUDIO_DEVICE_TYPE AVar4;
  float fVar5;
  undefined4 uVar6;
  
  bVar2 = Properties::getBoolDefault(*(Properties **)(this + 0x188),"game.audio#enable",false);
  this_00 = (AudioDeviceManager *)AudioDeviceManager::getInstance();
  AVar4 = 1;
  if ((bVar2 & param_1 & 1) != 0) {
    AVar4 = 2;
  }
  plVar3 = (long *)AudioDeviceManager::createCurrentAudioDevice(this_00,AVar4);
  this_01 = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setIsAudioDisabled(this_01,(bool)(~param_1 & 1));
  if (plVar3 != (long *)0x0) {
    this_02 = (EngineManager *)EngineManager::getInstance();
    EngineManager::setSoundDevice(this_02,(IAudioDevice *)plVar3);
    uVar6 = 0;
    fVar5 = (float)Properties::getFloat(*(Properties **)(this + 0x188),"game.audio#volume",0.0);
    if (0.0 <= fVar5) {
      fVar5 = (float)Properties::getFloat(*(Properties **)(this + 0x188),"game.audio#volume",0.0);
      uVar6 = 0x3f800000;
      if (fVar5 <= 1.0) {
        uVar6 = Properties::getFloat(*(Properties **)(this + 0x188),"game.audio#volume",0.0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x006c9db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x130))(uVar6,plVar3);
    return;
  }
  pAVar1 = this + 0x1a9;
  if (((byte)this[0x1a8] & 1) != 0) {
    pAVar1 = *(Application **)(this + 0x1b8);
  }
  SystemDialogUtil::showMessageBoxOk
            ((char *)pAVar1,"Error: Audio device initialization failed.\n",true);
                    /* WARNING: Subroutine does not return */
  exit(1);
}


