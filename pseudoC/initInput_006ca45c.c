// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initInput
// Entry Point: 006ca45c
// Size: 372 bytes
// Signature: undefined __thiscall initInput(Application * this, bool param_1)


/* Application::initInput(bool) */

void __thiscall Application::initInput(Application *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  AndroidInputDevice *this_00;
  EngineManager *this_01;
  float fVar6;
  float fVar7;
  bool local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  EngineManager::getInstance();
  EngineManager::getUserProfileAppPath();
  uVar4 = Properties::getBoolDefault
                    (*(Properties **)(this + 0x188),"game.input.joystick#enable",false);
  uVar3 = 0;
  fVar7 = 0.1;
  if (((uVar4 & 1) != 0) && (param_1)) {
    uVar4 = Properties::getBoolDefault
                      (*(Properties **)(this + 0x188),"game.input.joystick#vibration",false);
    local_4c[0] = false;
    uVar3 = 0xc;
    if ((uVar4 & 1) == 0) {
      uVar3 = 4;
    }
    fVar6 = (float)Properties::getFloat
                             (*(Properties **)(this + 0x188),"game.input.joystick#deadzone",local_4c
                             );
    fVar7 = 0.1;
    if (local_4c[0] != false) {
      fVar7 = fVar6;
    }
  }
  if (param_1) {
    uVar4 = Properties::getBoolDefault
                      (*(Properties **)(this + 0x188),"game.input.mouse#enable",false);
    uVar1 = uVar3 | 2;
    if ((uVar4 & 1) == 0) {
      uVar1 = uVar3;
    }
    uVar3 = Properties::getBoolDefault
                      (*(Properties **)(this + 0x188),"game.input.keyboard#enable",false);
    uVar3 = uVar1 | uVar3 & 1;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    pcVar5 = (char *)DeviceMappingManager::getInstance();
    DeviceMappingManager::init(pcVar5);
  }
  this_00 = (AndroidInputDevice *)operator_new(0x15a8);
                    /* try { // try from 006ca574 to 006ca57f has its CatchHandler @ 006ca5d0 */
  AndroidInputDevice::AndroidInputDevice(this_00,uVar3,fVar7);
  *(AndroidInputDevice **)(this + 0x180) = this_00;
  this_01 = (EngineManager *)EngineManager::getInstance();
  EngineManager::setInputDevice(this_01,*(AndroidInputDevice **)(this + 0x180));
  AndroidInputDevice::addEventListener(*(IInputEventListener **)(this + 0x180),SUB81(this,0));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


