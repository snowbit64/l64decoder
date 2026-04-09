// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initConsole
// Entry Point: 006c8784
// Size: 2912 bytes
// Signature: undefined initConsole(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Application::initConsole() */

void Application::initConsole(void)

{
  bool *pbVar1;
  Console *this;
  int iVar2;
  long in_x0;
  ConsoleCommand *pCVar3;
  
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
  pbVar1 = (bool *)(in_x0 + 0x1cf);
                    /* try { // try from 006c87a8 to 006c87c3 has its CatchHandler @ 006c93e4 */
  ConsoleCommand::ConsoleCommand(pCVar3,"exit","Quits application",pbVar1,true);
  this = (Console *)(in_x0 + 0x10);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c87e0 to 006c87fb has its CatchHandler @ 006c93e0 */
  ConsoleCommand::ConsoleCommand(pCVar3,"quit","Quits application",pbVar1,true);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8814 to 006c882f has its CatchHandler @ 006c93dc */
  ConsoleCommand::ConsoleCommand(pCVar3,"q","Quits application",pbVar1,true);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8848 to 006c8863 has its CatchHandler @ 006c93c8 */
  ConsoleCommand::ConsoleCommand(pCVar3,"listResources","Print detailed resource list",FUN_006cb10c)
  ;
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c887c to 006c8897 has its CatchHandler @ 006c93c4 */
  ConsoleCommand::ConsoleCommand(pCVar3,"listEntities","Print detailed entity list",FUN_006cb428);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c88b4 to 006c88cb has its CatchHandler @ 006c93c0 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"showFps","Show frames per second",(bool *)(in_x0 + 0x1cc),false);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c88e4 to 006c88ff has its CatchHandler @ 006c93bc */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"enableFramerateLimit","Enable/disable frames per second limiter",FUN_006cbda0);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8918 to 006c8933 has its CatchHandler @ 006c93b8 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"framerateLimitFPS","Frames per second limit attribute",FUN_006cbe78);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c894c to 006c8967 has its CatchHandler @ 006c93b4 */
  ConsoleCommand::ConsoleCommand(pCVar3,"enablePostFx","Enable/disable postfx",FUN_006cbf38);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8980 to 006c899b has its CatchHandler @ 006c93b0 */
  ConsoleCommand::ConsoleCommand(pCVar3,"enableCloudFx","Enable/disable cloudfx",FUN_006cc09c);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c89b4 to 006c89cf has its CatchHandler @ 006c93ac */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCloudBaseShapeScaling",
             "Scales sampling position of base cloud shape texture",FUN_006cc200);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c89e8 to 006c8a03 has its CatchHandler @ 006c93a8 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCloudErosionScaling","Scales sampling position of cloud erode texture",
             FUN_006cc318);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8a1c to 006c8a37 has its CatchHandler @ 006c93a4 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCloudScatteringCoeff","Sets cloud scattering coefficient",FUN_006cc430);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8a50 to 006c8a6b has its CatchHandler @ 006c93a0 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCloudPrecipitation","Sets cloud precipitation coefficient [0 1]",
             FUN_006cc548);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8a84 to 006c8a9f has its CatchHandler @ 006c939c */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCirrusCloudDensityScaling","Sets cirrus cloud coverage scaling factor",
             FUN_006cc67c);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8ab8 to 006c8ad3 has its CatchHandler @ 006c9398 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCirrusCloudVelocity","Sets cirrus cloud velocity",FUN_006cc794);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8aec to 006c8b07 has its CatchHandler @ 006c9394 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setVolumetricCloudVelocity",
             "Sets Volumetric-Cloud Wind-Direction and -Velocity",FUN_006cc960);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8b20 to 006c8b3b has its CatchHandler @ 006c9390 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setCloudNoiseVelocity","Sets Volumetric Noise Scroll-Velocity",FUN_006ccc04);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8b54 to 006c8b6f has its CatchHandler @ 006c938c */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setBloomThreshold","Sets threshold for bloom mask computation",FUN_006ccd1c);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8b88 to 006c8ba3 has its CatchHandler @ 006c9388 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setBloomMagnitude","Sets bloom magnitude [0..1]",FUN_006cce34);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8bbc to 006c8bd7 has its CatchHandler @ 006c9384 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setDoFParams",
             "DOF parameters, nearCocR, endNearBlurDist, farCocR, startFarBlurDist, endFarBlurDist",
             FUN_006ccf4c);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8bf0 to 006c8c0b has its CatchHandler @ 006c9380 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setDoFBlurArea","DOF Blur Area, top left(x,y) bottom right(x,y), x,y in [0 1]",
             FUN_006cd234);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8c24 to 006c8c3f has its CatchHandler @ 006c937c */
  ConsoleCommand::ConsoleCommand(pCVar3,"enableDoF","Enable / Disable DoF",FUN_006cd4d0);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8c58 to 006c8c73 has its CatchHandler @ 006c9378 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setPostFxAA","Set Post Process Anti Aliasing",FUN_006cd638)
  ;
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8c8c to 006c8ca7 has its CatchHandler @ 006c9374 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setDLSSQuality","Set NVIDIA DLSS Quality",FUN_006cda4c);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8cc0 to 006c8cdb has its CatchHandler @ 006c9370 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setFSRQuality","Set AMD FSR 1.0 Quality",FUN_006cdafc);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8cf4 to 006c8d0f has its CatchHandler @ 006c936c */
  ConsoleCommand::ConsoleCommand(pCVar3,"setSGSRQuality","Set SGSR Quality",FUN_006cdbac);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8d28 to 006c8d43 has its CatchHandler @ 006c9368 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setSharpness",
             "Adjusts image sharpening intensity with image upscaling techniques [1 2]",FUN_006ce0c0
            );
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8d5c to 006c8d77 has its CatchHandler @ 006c9364 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setMSAA","Set MSAA",FUN_006ce1fc);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8d90 to 006c8dab has its CatchHandler @ 006c9360 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setDoFBlendWeights","X-fade distances d0, d1, d2",FUN_006ce320);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8dc4 to 006c8ddf has its CatchHandler @ 006c935c */
  ConsoleCommand::ConsoleCommand(pCVar3,"setDoFFarCoC","Set DoF far CoC radius",FUN_006ce530);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8df8 to 006c8e13 has its CatchHandler @ 006c9358 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setDoFNearCoC","Set DoF near CoC radius",FUN_006ce690);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8e2c to 006c8e47 has its CatchHandler @ 006c9354 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setSSAOIntensity","SSAO intensity",FUN_006ce7f0);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8e60 to 006c8e7b has its CatchHandler @ 006c9350 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setSSAOSamples","num samples in SSAO computation  [1..12]",FUN_006ce948);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8e94 to 006c8eaf has its CatchHandler @ 006c934c */
  ConsoleCommand::ConsoleCommand(pCVar3,"setSSAORadius","world space radius size",FUN_006cea58);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8ec8 to 006c8ee3 has its CatchHandler @ 006c9348 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setMieScaling","Scale mie scattering coefficient [0.001..1000]",FUN_006cebb0);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8efc to 006c8f17 has its CatchHandler @ 006c9344 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setFogPlaneMieScaling",
             "Scale fog plane mie scattering coefficient [0.001..1000]",FUN_006ced04);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8f30 to 006c8f4b has its CatchHandler @ 006c9340 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setFogPlaneHeight","Set fog plane top height [0..1000]",FUN_006cee58);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8f64 to 006c8f7f has its CatchHandler @ 006c933c */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setAsymmetryFactor","Set CornetteShrank asymmetry factor [0..1]",FUN_006cefac);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8f98 to 006c8fb3 has its CatchHandler @ 006c9338 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setMoonSizeScale","Scales Moon disc size",FUN_006cf100);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c8fcc to 006c8fe7 has its CatchHandler @ 006c9334 */
  ConsoleCommand::ConsoleCommand(pCVar3,"setSunSizeScale","Scales Sun disc size",FUN_006cf254);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9000 to 006c901b has its CatchHandler @ 006c9330 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setSunBrightnessScale","Scales Sun brightness",FUN_006cf3a8);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9034 to 006c904f has its CatchHandler @ 006c932c */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setHistogramLogLuminanceRange","Histogram Luminance Range [min max]",
             FUN_006cf4fc);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9068 to 006c9083 has its CatchHandler @ 006c9328 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setMinMaxLuminanceAdaption","Luminance Adaption Range [min max]",FUN_006cf668);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c909c to 006c90b7 has its CatchHandler @ 006c9324 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setTextureStreamingPaused","Set texture streaming pause",FUN_006cf7d4);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c90d0 to 006c90eb has its CatchHandler @ 006c9320 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setTextureStreamingBehavior","Set texture streaming behavior",FUN_006cf92c);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9104 to 006c911f has its CatchHandler @ 006c931c */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"enableOccluderDebugRendering","Enable/disable occluder debug rendering",
             FUN_006cfbb4);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9138 to 006c9153 has its CatchHandler @ 006c9318 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"enableAnimalStatesDebugRendering",
             "Enable/disable animal states debug rendering",FUN_006cfd24);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c916c to 006c9187 has its CatchHandler @ 006c9314 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"reloadAnimalConfiguration",
             "Reload configuration data for animals in husbandires",FUN_006cfe74);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c91a0 to 006c91bb has its CatchHandler @ 006c9310 */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"enableTrafficDebugRendering","Enable/disable traffic system debug rendering",
             FUN_006cff28);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c91d4 to 006c91ef has its CatchHandler @ 006c930c */
  ConsoleCommand::ConsoleCommand
            (pCVar3,"setShapeCullingClipDistanceThresholds",
             "Set clip distance regions for shape culling optimization.",FUN_006d0078);
  Console::addCommand(this,(IConsoleCommand *)pCVar3);
  if (*(char *)(in_x0 + 0x1c1) != '\0') {
    pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9210 to 006c922b has its CatchHandler @ 006c9300 */
    ConsoleCommand::ConsoleCommand
              (pCVar3,"enableNoteRendering","Enable/disable notes rendering",FUN_006d01f8);
    Console::addCommand(this,(IConsoleCommand *)pCVar3);
    pCVar3 = (ConsoleCommand *)operator_new(0x70);
                    /* try { // try from 006c9244 to 006c925f has its CatchHandler @ 006c92fc */
    ConsoleCommand::ConsoleCommand
              (pCVar3,"enableDebugMarkerRendering","Enable/disable debug marker rendering",
               FUN_006d0348);
    Console::addCommand(this,(IConsoleCommand *)pCVar3);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006c92ac to 006c92b7 has its CatchHandler @ 006c92e4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  Logger::addLogSink(LogManager::getInstance()::singletonLogManager,(ILogSink *)this);
  return;
}


