// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: runOneFrameInternal
// Entry Point: 006de634
// Size: 1176 bytes
// Signature: undefined __thiscall runOneFrameInternal(EngineApplication * this, float param_1)


/* EngineApplication::runOneFrameInternal(float) */

void __thiscall EngineApplication::runOneFrameInternal(EngineApplication *this,float param_1)

{
  EngineApplication EVar1;
  long lVar2;
  ERROR_CODE EVar3;
  int iVar4;
  EngineManager *this_00;
  undefined8 uVar5;
  ulong uVar6;
  TimerManager *this_01;
  GlobalTimeManager *this_02;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  float local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (EngineManager *)EngineManager::getInstance();
  GpuProfilerManager::getInstance();
  GpuProfilerManager::enterFrame();
  TextureStreamingManager::getInstance();
  TextureStreamingManager::update();
  OcclusionCullingManager::update();
  TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::update();
  if (((CollisionEffectManager::getInstance()::s_instance & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&CollisionEffectManager::getInstance()::s_instance), iVar4 != 0))
  {
                    /* try { // try from 006dea48 to 006dea53 has its CatchHandler @ 006deadc */
    CollisionEffectManager::CollisionEffectManager
              ((CollisionEffectManager *)CollisionEffectManager::getInstance()::s_instance);
    __cxa_atexit(CollisionEffectManager::~CollisionEffectManager,
                 CollisionEffectManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&CollisionEffectManager::getInstance()::s_instance);
  }
  CollisionEffectManager::update();
  (**(code **)(*(long *)this + 0x30))(param_1,this);
  uVar5 = 0;
  if ((this[0x215] == (EngineApplication)0x0) || (this[0x1cf] != (EngineApplication)0x0))
  goto LAB_006de738;
  uVar6 = EngineManager::exitRequested();
  if ((uVar6 & 1) == 0) {
    if (AndroidSysUtil::s_isSoftDestroy == '\0') goto LAB_006de768;
  }
  else {
    uVar6 = EngineManager::exitRequestedIsRestart();
    if (((uVar6 & 1) != 0) &&
       (uVar6 = EngineManager::exitRequestedIsRestartingProcess(), (uVar6 & 1) == 0)) {
      uVar6 = softReset();
      uVar5 = 0;
      if (((uVar6 & 1) == 0) || (AndroidSysUtil::s_isSoftDestroy != '\0')) goto LAB_006de738;
LAB_006de768:
      ENetNetworkManager::getInstance();
      ENetNetworkManager::update();
      this_01 = (TimerManager *)TimerManager::getInstance();
      TimerManager::update(this_01,param_1);
      (**(code **)(*(long *)this + 0x38))(param_1,this);
      uVar6 = EngineManager::exitRequested();
      if ((uVar6 & 1) != 0) {
        ScriptSystemManager::getInstance();
        ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::reclaim();
        uVar6 = EngineManager::exitRequestedIsRestart();
        if ((((uVar6 & 1) == 0) ||
            (uVar6 = EngineManager::exitRequestedIsRestartingProcess(), (uVar6 & 1) != 0)) ||
           (uVar6 = softReset(), (uVar6 & 1) == 0)) goto LAB_006de734;
        ScriptSystemManager::getInstance();
        ScriptSystemManager::getCurrentScriptSystem();
        LuauScriptSystem::yield();
      }
      (**(code **)(*(long *)this + 0x40))(this);
      EVar3 = (**(code **)(**(long **)(this + 0x170) + 0x20))();
      if ((EVar3 != 0) && (EVar3 != 10)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 006dea90 to 006dea9b has its CatchHandler @ 006deacc */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        uVar5 = RenderDeviceUtil::getLastErrorStr(EVar3);
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Render device %s.\n",uVar5);
      }
      local_6c = 0.0;
      uVar6 = EngineManager::getFrameLimiter(this_00,&local_6c);
      if ((uVar6 & 1) == 0) {
        dVar9 = 16.66666666666667;
      }
      else {
        dVar9 = 1000.0 / (double)local_6c;
        if (1000.0 / (double)local_6c <= 16.66666666666667) {
          dVar9 = 16.66666666666667;
        }
      }
      dVar8 = (double)StopWatch::getMs();
      StreamManager::getInstance();
      fVar7 = (float)(dVar9 - dVar8);
      if (fVar7 <= 10.0) {
        fVar7 = 10.0;
      }
      StreamManager::update(fVar7);
      TextureStreamingManager::getInstance();
      TextureStreamingManager::submitSecondaryCommandBuffer();
      (**(code **)(**(long **)(this + 0x178) + 0x90))();
      GpuProfilerManager::getInstance();
      GpuProfilerManager::leaveFrame();
      if ((uVar6 & 1) != 0) {
        EVar1 = this[0x1c0];
        dVar8 = 1000.0 / (double)local_6c;
        dVar9 = (double)StopWatch::getMs();
        dVar9 = dVar8 - dVar9;
        if (EVar1 == (EngineApplication)0x0) {
          for (; 3.0 < dVar9; dVar9 = dVar8 - dVar9) {
            dVar9 = (double)StopWatch::getMs();
            StreamManager::getInstance();
            StreamManager::update(1.0);
            dVar10 = (double)StopWatch::getMs();
            if (dVar10 - dVar9 < 1.0) {
              ThreadUtil::usleep(1000 - (int)((dVar10 - dVar9) * 1000.0));
            }
            dVar9 = (double)StopWatch::getMs();
          }
          do {
            dVar9 = (double)StopWatch::getMs();
          } while (0.05 < dVar8 - dVar9);
        }
        else {
          for (; 1.0 <= dVar9; dVar9 = dVar8 - dVar9) {
            ThreadUtil::usleep((int)(dVar9 * 1000.0));
            dVar9 = (double)StopWatch::getMs();
          }
        }
      }
      StopWatch::stop();
      uVar11 = *(undefined4 *)(this + 0x1c8);
      dVar9 = (double)StopWatch::getStoppedMs();
      fVar7 = (float)NEON_fmadd(uVar11,0x3f666666,(float)dVar9 * 0.1);
      *(float *)(this + 0x1c8) = fVar7;
      *(float *)(this + 0x1c4) = 1000.0 / fVar7;
      StopWatch::reset();
      StopWatch::start();
      this_02 = (GlobalTimeManager *)GlobalTimeManager::getInstance();
      GlobalTimeManager::beginNewInterval(this_02,1000.0 / local_6c);
      uVar5 = 1;
      goto LAB_006de738;
    }
  }
LAB_006de734:
  uVar5 = 0;
LAB_006de738:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


