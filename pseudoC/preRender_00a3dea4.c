// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preRender
// Entry Point: 00a3dea4
// Size: 188 bytes
// Signature: undefined __thiscall preRender(ScreenSpaceProcessor * this, IRenderDevice * param_1, ICommandBuffer * param_2, PostFxParams * param_3)


/* ScreenSpaceProcessor::preRender(IRenderDevice*, ICommandBuffer*, PostFxParams const&) */

void __thiscall
ScreenSpaceProcessor::preRender
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,ICommandBuffer *param_2,
          PostFxParams *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(long **)(this + 0x1988) + 0x10))(*(long **)(this + 0x1988),param_2);
  plVar3 = *(long **)(this + 0x1988);
  *puVar1 = *(undefined8 *)(param_3 + 0x2c);
  fVar5 = *(float *)(param_3 + 0x38);
  lVar4 = *plVar3;
  *(float *)(puVar1 + 1) = fVar5 / *(float *)(param_3 + 8);
  *(float *)((long)puVar1 + 0xc) = fVar5;
  (**(code **)(lVar4 + 0x18))(plVar3,param_2);
  puVar2 = (undefined4 *)
           (**(code **)(**(long **)(this + 0x1a00) + 0x10))(*(long **)(this + 0x1a00),param_2);
  plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x80))(param_1);
  uVar6 = (**(code **)(*plVar3 + 0xd0))();
  plVar3 = *(long **)(this + 0x1a00);
  *puVar2 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00a3df5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  return;
}


