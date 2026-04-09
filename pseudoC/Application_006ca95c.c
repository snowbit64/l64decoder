// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Application
// Entry Point: 006ca95c
// Size: 996 bytes
// Signature: undefined __thiscall ~Application(Application * this)


/* Application::~Application() */

void __thiscall Application::~Application(Application *this)

{
  int iVar1;
  long lVar2;
  NetworkAvailability *this_00;
  
  *(undefined ***)this = &PTR__Application_00fd8df8;
  *(undefined **)(this + 8) = &DAT_00fd8e58;
                    /* try { // try from 006ca984 to 006ca9df has its CatchHandler @ 006cadac */
  AdsProviderManager::getInstance();
  lVar2 = AdsProviderManager::getAdsProvider();
  if (lVar2 != 0) {
    AdsProviderManager::getInstance();
    AdsProviderManager::getAdsProvider();
    GiantsAdsProvider::flushImpressions();
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006cab58 to 006cab63 has its CatchHandler @ 006cad98 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  Logger::removeLogSink(LogManager::getInstance()::singletonLogManager,(ILogSink *)(this + 0x10));
  if (*(long *)(this + 0x168) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006cad08 to 006cad13 has its CatchHandler @ 006cad40 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    Logger::removeLogSink
              (LogManager::getInstance()::singletonLogManager,*(ILogSink **)(this + 0x168));
    if (*(long **)(this + 0x168) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x168) + 8))();
    }
  }
                    /* try { // try from 006ca9f4 to 006caa0b has its CatchHandler @ 006cadac */
  Console::removeAllCommands();
  Console::destroyGraphicsData();
  EngineManager::getInstance();
  EngineManager::destroy();
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 8))();
  }
  if (((HeadMountedDisplayManager::getInstance()::self & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&HeadMountedDisplayManager::getInstance()::self), iVar1 != 0)) {
                    /* try { // try from 006caba0 to 006cabab has its CatchHandler @ 006cad84 */
    HeadMountedDisplayManager::HeadMountedDisplayManager
              ((HeadMountedDisplayManager *)HeadMountedDisplayManager::getInstance()::self);
    __cxa_atexit(HeadMountedDisplayManager::~HeadMountedDisplayManager,
                 HeadMountedDisplayManager::getInstance()::self,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&HeadMountedDisplayManager::getInstance()::self);
  }
                    /* try { // try from 006caa30 to 006caaab has its CatchHandler @ 006cadac */
  HeadMountedDisplayManager::destroy();
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar1 != 0)
     ) {
                    /* try { // try from 006cabe8 to 006cabf3 has its CatchHandler @ 006cad70 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  InstancedGeometryManager::destroy();
  AdhocShader::destroyStandardSamplers();
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 006cac30 to 006cac3b has its CatchHandler @ 006cad5c */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  ShaderManager::saveShaderArchiveCache
            ((ShaderManager *)&ShaderManager::getInstance()::instance,false);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 006cac78 to 006cac83 has its CatchHandler @ 006cad58 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  ShaderManager::destroy();
  if (((OverlayRenderManager::getInstance()::obj & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&OverlayRenderManager::getInstance()::obj), iVar1 != 0)) {
                    /* try { // try from 006cacc0 to 006caccb has its CatchHandler @ 006cad44 */
    OverlayRenderManager::OverlayRenderManager
              ((OverlayRenderManager *)OverlayRenderManager::getInstance()::obj);
    __cxa_atexit(OverlayRenderManager::~OverlayRenderManager,
                 OverlayRenderManager::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&OverlayRenderManager::getInstance()::obj);
  }
  OverlayRenderManager::destroy();
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 8))();
  }
                    /* try { // try from 006caac0 to 006caacf has its CatchHandler @ 006cadac */
  GpuProfilerManager::getInstance();
  GpuProfilerManager::destroy();
  RenderDeviceManager::getInstance();
  RenderDeviceManager::destroyCurrentRenderDevice();
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x28))();
  }
                    /* try { // try from 006caae4 to 006cab23 has its CatchHandler @ 006cadac */
  AudioDeviceManager::getInstance();
  AudioDeviceManager::destroyCurrentAudioDevice();
  CloudDeviceManager::getInstance();
  CloudDeviceManager::destroyCloudDevice();
  this_00 = *(NetworkAvailability **)(this + 400);
  if (this_00 != (NetworkAvailability *)0x0) {
    NetworkAvailability::~NetworkAvailability(this_00);
    operator_delete(this_00);
  }
  NullGameStats::term();
  EngineManager::getInstance();
  EngineManager::exitRequestedIsRestart();
  AdsProviderManager::getInstance();
  AdsProviderManager::destroyAdsProvider();
  Network::shutdown();
  if (((byte)this[0x1a8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1b8));
  }
  Console::~Console((Console *)(ILogSink *)(this + 0x10));
  return;
}


