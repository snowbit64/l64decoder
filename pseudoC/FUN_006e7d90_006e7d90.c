// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7d90
// Entry Point: 006e7d90
// Size: 128 bytes
// Signature: undefined FUN_006e7d90(void)


void FUN_006e7d90(float *param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  AudioDeviceManager::getInstance();
  plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  fVar3 = *param_1;
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = 1.0, fVar3 <= 1.0)) {
    fVar2 = fVar3;
  }
  (**(code **)(*plVar1 + 0x130))(fVar2);
  plVar1 = *(long **)(GameScriptBinding::s_pApplication + 0x188);
  Properties::setFloat((Properties *)plVar1,"game.audio#volume",*param_1);
                    /* WARNING: Could not recover jumptable at 0x006e7e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1);
  return;
}


