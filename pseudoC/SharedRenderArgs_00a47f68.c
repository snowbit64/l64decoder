// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SharedRenderArgs
// Entry Point: 00a47f68
// Size: 132 bytes
// Signature: undefined __thiscall SharedRenderArgs(SharedRenderArgs * this, IRenderDevice * param_1, FontOverlayRenderer * param_2, DeferredDebugRenderer * param_3)


/* SharedRenderArgs::SharedRenderArgs(IRenderDevice*, FontOverlayRenderer*, DeferredDebugRenderer*)
    */

void __thiscall
SharedRenderArgs::SharedRenderArgs
          (SharedRenderArgs *this,IRenderDevice *param_1,FontOverlayRenderer *param_2,
          DeferredDebugRenderer *param_3)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(SharedRenderArgs **)(this + 0x148) = this + 0x150;
  *(undefined4 *)(this + 0x44) = 5;
  *(IRenderDevice **)this = param_1;
  *(FontOverlayRenderer **)(this + 8) = param_2;
  this[0x88] = (SharedRenderArgs)0x1;
  this[0x48] = (SharedRenderArgs)0x1;
  *(DeferredDebugRenderer **)(this + 0x80) = param_3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x4c) = 0x1e;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x74) = 0x3f800000;
  *(undefined8 *)(this + 0x3c) = 0x3f80000000000000;
  this[0x78] = (SharedRenderArgs)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = uVar1;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x140] = (SharedRenderArgs)0x0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  this[0x130] = (SharedRenderArgs)0x0;
  return;
}


