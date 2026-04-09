// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IndirectLightRenderController
// Entry Point: 00a0bc74
// Size: 196 bytes
// Signature: undefined __thiscall IndirectLightRenderController(IndirectLightRenderController * this, IRenderDevice * param_1)


/* IndirectLightRenderController::IndirectLightRenderController(IRenderDevice*) */

void __thiscall
IndirectLightRenderController::IndirectLightRenderController
          (IndirectLightRenderController *this,IRenderDevice *param_1)

{
  EnvMapBlender *this_00;
  long lVar1;
  
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x40));
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined4 *)this = 0xffffffff;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(IRenderDevice **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x148] = (IndirectLightRenderController)0x0;
  *(undefined8 *)(this + 0x140) = 0;
                    /* try { // try from 00a0bcdc to 00a0bce3 has its CatchHandler @ 00a0bd38 */
  this_00 = (EnvMapBlender *)operator_new(0xb90);
                    /* try { // try from 00a0bcec to 00a0bcff has its CatchHandler @ 00a0bd48 */
  lVar1 = EngineManager::getInstance();
  EnvMapBlender::EnvMapBlender(this_00,param_1,*(bool *)(lVar1 + 0x24a));
  *(EnvMapBlender **)(this + 0x198) = this_00;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x10) = 0xff0000000000ff;
  *(undefined2 *)(this + 0xc) = 0;
  this[0xe] = (IndirectLightRenderController)0x0;
  this[0x1d0] = (IndirectLightRenderController)0x0;
  return;
}


