// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EngineApplication
// Entry Point: 006dac34
// Size: 188 bytes
// Signature: undefined __thiscall EngineApplication(EngineApplication * this, EngineApplicationDesc * param_1)


/* EngineApplication::EngineApplication(EngineApplicationDesc&) */

void __thiscall
EngineApplication::EngineApplication(EngineApplication *this,EngineApplicationDesc *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  Application::Application((Application *)this,(ApplicationDesc *)param_1);
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined ***)this = &PTR__EngineApplication_00fd9160;
  *(undefined **)(this + 8) = &DAT_00fd91c0;
                    /* try { // try from 006dac70 to 006dac83 has its CatchHandler @ 006dacf0 */
  StopWatch::StopWatch((StopWatch *)(this + 0x238));
  ApplicationDesc::ApplicationDesc((ApplicationDesc *)(this + 0x2a0),(ApplicationDesc *)param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  this[0x215] = (EngineApplication)0x0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x250) = 0x3f800000;
  *(undefined8 *)(this + 0x378) = uVar2;
  *(undefined8 *)(this + 0x370) = uVar1;
  *(undefined8 *)(this + 600) = 0;
  this[0x298] = (EngineApplication)0x1;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x218) = 0x42c8000000000000;
  *(undefined8 *)(this + 0x290) = 0;
  if (this[0x1ce] != (EngineApplication)0x0) {
                    /* try { // try from 006dacc8 to 006dacdf has its CatchHandler @ 006dacf8 */
    TextureStreamingManager::getInstance();
    TextureStreamingManager::init();
    TerrainPatchOccluderManager::getInstance();
    TerrainPatchOccluderManager::init();
    initOverlay();
  }
  return;
}


