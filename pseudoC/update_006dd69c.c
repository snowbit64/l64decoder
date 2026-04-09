// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 006dd69c
// Size: 1136 bytes
// Signature: undefined __thiscall update(EngineApplication * this, float param_1)


/* EngineApplication::update(float) */

void __thiscall EngineApplication::update(EngineApplication *this,float param_1)

{
  long lVar1;
  int iVar2;
  ScenegraphPhysicsContextManager *this_00;
  I3DStreamingManager *this_01;
  I3DManager *this_02;
  LuauScriptSystem *pLVar3;
  UpdateManager *this_03;
  AndroidAchievements *this_04;
  AndroidInAppPurchase *this_05;
  long *plVar4;
  long lVar5;
  AdsBrockerManager *this_06;
  float fVar6;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8 [2];
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined local_1aa;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined local_19a;
  undefined4 local_190;
  undefined2 local_18c;
  undefined local_18a;
  undefined4 local_180;
  undefined2 local_17c;
  undefined local_17a;
  undefined4 local_170;
  undefined2 local_16c;
  undefined local_16a;
  undefined4 local_160;
  undefined2 local_15c;
  undefined local_15a;
  undefined4 local_150;
  undefined2 local_14c;
  undefined local_14a;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined4 local_130;
  undefined2 local_12c;
  undefined local_12a;
  undefined4 local_120;
  undefined2 local_11c;
  undefined local_11a;
  undefined4 local_110;
  undefined2 local_10c;
  undefined local_10a;
  undefined4 local_100;
  undefined2 local_fc;
  undefined local_fa;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined local_ea;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined local_da;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined local_ca;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined local_ba;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined local_aa;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined local_9a;
  undefined4 local_90;
  undefined2 local_8c;
  undefined local_8a;
  undefined4 local_80;
  undefined2 local_7c;
  undefined local_7a;
  undefined4 local_70;
  undefined2 local_6c;
  undefined local_6a;
  undefined4 local_60;
  undefined2 local_5c;
  undefined local_5a;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  MasterServerManager::getInstance();
  MasterServerManager::update(param_1);
  EngineManager::getInstance();
  this_00 = (ScenegraphPhysicsContextManager *)ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::update(this_00,param_1);
  if (*(long *)(this + 0x1a0) != 0) {
    HeadTrackingDevice::updateTracking(param_1);
  }
  this_01 = (I3DStreamingManager *)I3DStreamingManager::getInstance();
  I3DStreamingManager::issueCallbacks(this_01,param_1 * 0.001,100,0);
  this_02 = (I3DManager *)I3DManager::getInstance();
  I3DManager::issueCallbacks(this_02,param_1 * 0.001,100);
  VehicleNavigationManager::getInstance();
  VehicleNavigationManager::beginFrame();
  local_1aa = 0;
  local_1ac = 0;
  local_1a0 = 0;
  local_19a = 0;
  local_19c = 0;
  local_190 = 0;
  local_18a = 0;
  local_18c = 0;
  local_180 = 0;
  local_17a = 0;
  local_17c = 0;
  local_170 = 0;
  local_16a = 0;
  local_16c = 0;
  local_160 = 0;
  local_15a = 0;
  local_15c = 0;
  local_150 = 0;
  local_14a = 0;
  local_14c = 0;
  local_140 = 0;
  local_13a = 0;
  local_13c = 0;
  local_130 = 0;
  local_12a = 0;
  local_12c = 0;
  local_120 = 0;
  local_11a = 0;
  local_11c = 0;
  local_110 = 0;
  local_10a = 0;
  local_10c = 0;
  local_100 = 0;
  local_fa = 0;
  local_fc = 0;
  local_f0 = 0;
  local_ea = 0;
  local_ec = 0;
  local_e0 = 0;
  local_da = 0;
  local_dc = 0;
  local_d0 = 0;
  local_ca = 0;
  local_cc = 0;
  local_c0 = 0;
  local_ba = 0;
  local_bc = 0;
  local_b0 = 0;
  local_aa = 0;
  local_ac = 0;
  local_a0 = 0;
  local_9a = 0;
  local_9c = 0;
  local_90 = 0;
  local_8a = 0;
  local_8c = 0;
  local_80 = 0;
  local_7a = 0;
  local_7c = 0;
  local_70 = 0;
  local_6a = 0;
  local_6c = 0;
  local_5a = 0;
  local_5c = 0;
  local_60 = 0;
  local_1b0 = 4;
  local_1b8[0] = param_1;
  ScriptSystemManager::getInstance();
  pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::invokeScriptMethod
            (pLVar3,"update",(MethodInvocation *)local_1b8,1,0,(void *)0x0);
  EngineScriptBinding::cleanupTempResources();
  MeshSplitManager::update(param_1);
  this_03 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::update(this_03,param_1);
  VehicleNavigationManager::getInstance();
  VehicleNavigationManager::endFrame();
  ScriptSystemManager::getInstance();
  pLVar3 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::invokeScriptMethod
            (pLVar3,"postAnimationUpdate",(MethodInvocation *)local_1b8,1,0,(void *)0x0);
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::tick();
  this_04 = (AndroidAchievements *)EngineManager::getAchievements();
  AndroidAchievements::tick(this_04,param_1);
  this_05 = (AndroidInAppPurchase *)EngineManager::getInAppPurchase();
  AndroidInAppPurchase::update(this_05,param_1);
  CloudDeviceManager::getInstance();
  plVar4 = (long *)CloudDeviceManager::getCloudDevice();
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(param_1);
  }
  SaveHelperManager::getInstance();
  SaveHelperManager::update();
  ScriptSystemManager::getInstance();
  ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::yield();
  AudioDeviceManager::getInstance();
  plVar4 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  lVar5 = Renderer::getCamera();
  if (lVar5 == 0) {
    *(undefined8 *)(this + 0x230) = 0;
  }
  else {
    RawTransformGroup::updateWorldTransformation();
    local_1c0 = *(float *)(lVar5 + 0xf0);
    local_1c8 = *(undefined8 *)(lVar5 + 0xe8);
    local_1d8 = CONCAT44(-(float)((ulong)*(undefined8 *)(lVar5 + 0xd8) >> 0x20),
                         -(float)*(undefined8 *)(lVar5 + 0xd8));
    local_1e0 = *(undefined4 *)(lVar5 + 0xd0);
    local_1d0 = -*(float *)(lVar5 + 0xe0);
    local_1e8 = *(undefined8 *)(lVar5 + 200);
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_1c8);
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_1d8,&local_1e8);
    if (lVar5 == *(long *)(this + 0x230)) {
      fVar6 = *(float *)(this + 0x218) + param_1;
      *(float *)(this + 0x218) = fVar6;
      if (*(float *)(this + 0x21c) < fVar6) {
        fVar6 = -1.0 / fVar6;
        *(ulong *)(this + 0x220) =
             CONCAT44(((float)((ulong)*(undefined8 *)(this + 0x220) >> 0x20) -
                      (float)((ulong)local_1c8 >> 0x20)) * fVar6,
                      ((float)*(undefined8 *)(this + 0x220) - (float)local_1c8) * fVar6);
        *(float *)(this + 0x228) = fVar6 * (*(float *)(this + 0x228) - local_1c0);
        (**(code **)(*plVar4 + 0x48))(plVar4,this + 0x220);
        *(undefined8 *)(this + 0x220) = local_1c8;
        *(float *)(this + 0x228) = local_1c0;
        *(undefined8 *)(this + 0x218) = 0x42c8000000000000;
      }
    }
    else {
      *(long *)(this + 0x230) = lVar5;
      *(undefined8 *)(this + 0x220) = local_1c8;
      *(undefined8 *)(this + 0x218) = 0x41f0000000000000;
      *(float *)(this + 0x228) = local_1c0;
    }
  }
  (**(code **)(*plVar4 + 0x160))(plVar4);
  AdsProviderManager::getInstance();
  AdsProviderManager::getAdsProvider();
  GiantsAdsProvider::update();
  this_06 = (AdsBrockerManager *)AdsBrockerManager::getInstance();
  AdsBrockerManager::update(this_06,param_1);
  if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar2 != 0)) {
                    /* try { // try from 006ddad0 to 006ddadb has its CatchHandler @ 006ddb0c */
    HeadMountedDisplayManager::HeadMountedDisplayManager
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
    __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                 HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
  }
  HeadMountedDisplayManager::update();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


