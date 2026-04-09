// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6150
// Entry Point: 007a6150
// Size: 288 bytes
// Signature: undefined FUN_007a6150(void)


void FUN_007a6150(Vector3 *param_1,undefined4 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  LuauScriptSystem *this;
  TransformGroup *pTVar4;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 local_440;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((float)param_2[0x30] == 0.0) {
    FUN_0079f4f0(&local_448,param_2,param_3,"TransformGroup_createWheelShape");
    DebugUtil::message((char *)&local_448,"Wheel shape mass is zero","pArgs->arg[12].f != 0.0f",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x2571);
    ScriptSystemManager::getInstance();
    this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(this,"handleInternalError");
  }
  local_448 = *param_2;
  uStack_444 = param_2[4];
  local_440 = param_2[8];
  uVar1 = param_2[0x34];
  ScenegraphPhysicsContextManager::getInstance();
  pTVar4 = (TransformGroup *)ScenegraphPhysicsContextManager::getContext();
  uVar3 = Bt2ScenegraphPhysicsContext::enqueueCreateWheelShape
                    (pTVar4,param_1,(float)param_2[0xc],(float)param_2[0x10],(float)param_2[0x14],
                     (float)param_2[0x18],(float)param_2[0x1c],(float)param_2[0x20],
                     (float)param_2[0x24],(float)param_2[0x28],(float)param_2[0x2c],
                     (float)param_2[0x30],(uint)&local_448,uVar1);
  param_2[0x40] = uVar3;
  param_2[0x42] = 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


