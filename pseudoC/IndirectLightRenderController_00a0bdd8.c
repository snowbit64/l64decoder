// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~IndirectLightRenderController
// Entry Point: 00a0bdd8
// Size: 108 bytes
// Signature: undefined __thiscall ~IndirectLightRenderController(IndirectLightRenderController * this)


/* IndirectLightRenderController::~IndirectLightRenderController() */

void __thiscall
IndirectLightRenderController::~IndirectLightRenderController(IndirectLightRenderController *this)

{
  void *pvVar1;
  EnvMapBlender *this_00;
  
                    /* try { // try from 00a0bde8 to 00a0bdeb has its CatchHandler @ 00a0be44 */
  cleanup();
  this_00 = *(EnvMapBlender **)(this + 0x198);
  if (this_00 != (EnvMapBlender *)0x0) {
    EnvMapBlender::~EnvMapBlender(this_00);
    operator_delete(this_00);
  }
  pvVar1 = *(void **)(this + 0x220);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x228) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1f8) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x1d8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1e0) = pvVar1;
    operator_delete(pvVar1);
  }
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x40));
  return;
}


