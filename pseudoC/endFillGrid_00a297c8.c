// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endFillGrid
// Entry Point: 00a297c8
// Size: 168 bytes
// Signature: undefined __thiscall endFillGrid(LightListRasterizer * this, IRenderDevice * param_1, Vector3 * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)


/* LightListRasterizer::endFillGrid(IRenderDevice*, Vector3 const&, float, float, float, float,
   float, float) */

void __thiscall
LightListRasterizer::endFillGrid
          (LightListRasterizer *this,IRenderDevice *param_1,Vector3 *param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7,float param_8)

{
  ICommandBuffer *pIVar1;
  
  if (*(int *)(this + 0x98) != 0) {
    ThreadPoolTaskManager::waitForAllTasks((ThreadPoolTaskManager *)(this + 0x90),false);
  }
  pIVar1 = (ICommandBuffer *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  updateGridGPUResources
            (this,pIVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


