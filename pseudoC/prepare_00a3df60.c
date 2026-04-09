// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepare
// Entry Point: 00a3df60
// Size: 80 bytes
// Signature: undefined __thiscall prepare(ScreenSpaceProcessor * this, IRenderDevice * param_1, bool param_2, bool param_3, bool param_4)


/* ScreenSpaceProcessor::prepare(IRenderDevice*, bool, bool, bool) */

void __thiscall
ScreenSpaceProcessor::prepare
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,bool param_2,bool param_3,bool param_4)

{
  this[0x1878] = (ScreenSpaceProcessor)param_2;
  this[0x1b6c] = (ScreenSpaceProcessor)param_4;
  this[0x187a] = (ScreenSpaceProcessor)((byte)this[0x187a] | param_3);
  if (((param_2) && (param_4)) && (*(long *)(this + 0x1b70) != 0)) {
    AtmosphereRenderController::prepareProcessSkyFx();
  }
  *(undefined8 *)(this + 0x1930) = 0;
  return;
}


