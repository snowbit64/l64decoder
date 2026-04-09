// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8a40
// Entry Point: 006e8a40
// Size: 156 bytes
// Signature: undefined FUN_006e8a40(void)


void FUN_006e8a40(double *param_1)

{
  HeadTrackingDevice *this;
  float fVar1;
  
  fVar1 = 0.0;
  switch(*(int *)(param_1 + 1)) {
  case 1:
    fVar1 = (float)*(int *)param_1;
    break;
  case 2:
    fVar1 = (float)NEON_ucvtf(*(int *)param_1);
    break;
  case 4:
    fVar1 = *(float *)param_1;
    break;
  case 5:
    fVar1 = (float)*param_1;
  }
  EngineManager::getInstance();
  this = (HeadTrackingDevice *)EngineManager::getHeadTrackingDevice();
  if (this != (HeadTrackingDevice *)0x0) {
    HeadTrackingDevice::setSensitivity(this,fVar1);
  }
  Properties::setFloat
            (*(Properties **)(GameScriptBinding::s_pApplication + 0x188),
             "game.input.headTracking#sensitivity",fVar1);
  return;
}


