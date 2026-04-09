// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FFXShadowDenoiser
// Entry Point: 00a43b68
// Size: 152 bytes
// Signature: undefined __thiscall FFXShadowDenoiser(FFXShadowDenoiser * this, IRenderDevice * param_1, RenderController * param_2)


/* FFXShadowDenoiser::FFXShadowDenoiser(IRenderDevice*, RenderController*) */

void __thiscall
FFXShadowDenoiser::FFXShadowDenoiser
          (FFXShadowDenoiser *this,IRenderDevice *param_1,RenderController *param_2)

{
  ShadowDenoiser::ShadowDenoiser((ShadowDenoiser *)this,param_1,param_2);
  *(undefined ***)this = &PTR__FFXShadowDenoiser_00fe3268;
                    /* try { // try from 00a43b98 to 00a43b9f has its CatchHandler @ 00a43c44 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x20));
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
                    /* try { // try from 00a43ba8 to 00a43baf has its CatchHandler @ 00a43c34 */
  AdhocShader::ShaderVariants::ShaderVariants((ShaderVariants *)(this + 0x130));
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
                    /* try { // try from 00a43bc4 to 00a43bcb has its CatchHandler @ 00a43c24 */
  AdhocShader::ShaderVariants::ShaderVariants((ShaderVariants *)(this + 0x178));
                    /* try { // try from 00a43bd0 to 00a43bd7 has its CatchHandler @ 00a43c14 */
  AdhocShader::ShaderVariants::ShaderVariants((ShaderVariants *)(this + 400));
                    /* try { // try from 00a43bdc to 00a43bdf has its CatchHandler @ 00a43c00 */
  AdhocShader::ShaderVariants::ShaderVariants((ShaderVariants *)(this + 0x1a8));
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  return;
}


