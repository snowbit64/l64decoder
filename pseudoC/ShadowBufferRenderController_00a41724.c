// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShadowBufferRenderController
// Entry Point: 00a41724
// Size: 588 bytes
// Signature: undefined __thiscall ShadowBufferRenderController(ShadowBufferRenderController * this, IRenderDevice * param_1, RenderController * param_2, AtmosphereRenderControllerShared * param_3)


/* ShadowBufferRenderController::ShadowBufferRenderController(IRenderDevice*, RenderController*,
   AtmosphereRenderControllerShared const*) */

void __thiscall
ShadowBufferRenderController::ShadowBufferRenderController
          (ShadowBufferRenderController *this,IRenderDevice *param_1,RenderController *param_2,
          AtmosphereRenderControllerShared *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(IRenderDevice **)(this + 0x28) = param_1;
  *(RenderController **)(this + 0x30) = param_2;
  *(AtmosphereRenderControllerShared **)(this + 0x38) = param_3;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xc0));
                    /* try { // try from 00a41780 to 00a4192f has its CatchHandler @ 00a41abc */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x2c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x3c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x4c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x5c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x6c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x7c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x8c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x9c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xac0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xbc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xcc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xdc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xec0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xfc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x10c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x11c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x12c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x13c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x14c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x15c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x16c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x17c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x18c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x19c0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1ac0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1bc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1cc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1dc0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1ec0));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x1fc0));
                    /* try { // try from 00a41938 to 00a4193b has its CatchHandler @ 00a41970 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x20c0));
  *(undefined8 *)(this + 0x21d8) = 0;
  *(undefined4 *)(this + 0x21c8) = 0xffffffff;
  this[0x21cc] = (ShadowBufferRenderController)0x0;
  *(undefined8 *)(this + 0x21c0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x21d0) = 0x1000000010;
  return;
}


