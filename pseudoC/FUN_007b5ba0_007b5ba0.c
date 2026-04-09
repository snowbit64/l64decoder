// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5ba0
// Entry Point: 007b5ba0
// Size: 88 bytes
// Signature: undefined FUN_007b5ba0(void)


DensityMapVisualizationOverlay * FUN_007b5ba0(char **param_1)

{
  DensityMapVisualizationOverlay *this;
  IRenderDevice *pIVar1;
  
  this = (DensityMapVisualizationOverlay *)operator_new(0x293f0);
                    /* try { // try from 007b5bcc to 007b5bd3 has its CatchHandler @ 007b5bf8 */
  DensityMapVisualizationOverlay::DensityMapVisualizationOverlay
            (this,*param_1,*(uint *)(param_1 + 2),*(uint *)(param_1 + 4),true);
  RenderDeviceManager::getInstance();
  pIVar1 = (IRenderDevice *)RenderDeviceManager::getCurrentRenderDevice();
  DensityMapVisualizationOverlay::activate(this,pIVar1);
  return this;
}


