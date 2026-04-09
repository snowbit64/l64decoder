// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processPostFxOpaque
// Entry Point: 00a4153c
// Size: 356 bytes
// Signature: undefined __thiscall processPostFxOpaque(ScreenSpaceProcessor * this, ICommandBuffer * param_1, RenderArgs * param_2)


/* ScreenSpaceProcessor::processPostFxOpaque(ICommandBuffer*, RenderArgs const*) */

void __thiscall
ScreenSpaceProcessor::processPostFxOpaque
          (ScreenSpaceProcessor *this,ICommandBuffer *param_1,RenderArgs *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *local_88;
  long *plStack_80;
  char *local_78;
  undefined8 local_70;
  undefined4 local_68;
  char *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((this[0x1878] != (ScreenSpaceProcessor)0x0) && (this[0x1b6c] != (ScreenSpaceProcessor)0x0))
      && (lVar3 = *(long *)(this + 0x1b70), lVar3 != 0)) && (*(int *)(lVar3 + 0x97c) != 0)) {
    uStack_40 = 0;
    puVar2 = (undefined8 *)(lVar3 + 0x938);
    if (*(char *)(lVar3 + 0x994) != '\0') {
      puVar2 = (undefined8 *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x964) * 8 + 0x940);
    }
    local_78 = "sceneTexture";
    local_70 = *puVar2;
    uStack_58 = *(undefined8 *)(*(long *)(this + 0x1b80) + 0x68);
    plStack_80 = *(long **)(this + 0x19e8);
    uVar6 = *(undefined8 *)(this + 0x1868);
    local_60 = "blueNoise";
    local_68 = 0xffffffff;
    local_50 = 0xffffffff;
    local_88 = "CopyTextureParams";
    if (((byte)param_2[0x3a8] >> 3 & 1) != 0) {
      fVar4 = (float)*(undefined8 *)(param_2 + 0x590);
      fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x590) >> 0x20);
      uStack_40 = CONCAT44(fVar5 + fVar5,fVar4 + fVar4);
    }
    uVar7 = NEON_ucvtf(uVar6,4);
    uVar6 = NEON_ucvtf(CONCAT44((int)((ulong)uVar6 >> 0x20) + 1,(int)uVar6 + 1) & 0xfffffffefffffffe
                       ,4);
    local_48 = CONCAT44((float)((ulong)uVar7 >> 0x20) / (float)((ulong)uVar6 >> 0x20),
                        (float)uVar7 / (float)uVar6);
    puVar2 = (undefined8 *)(**(code **)(*plStack_80 + 0x10))(plStack_80,param_1);
    puVar2[1] = uStack_40;
    *puVar2 = local_48;
    uVar6 = NEON_ucvtf(*(undefined8 *)(this + 0x1868),4);
    puVar2[2] = uVar6;
    (**(code **)(**(long **)(this + 0x19e8) + 0x18))(*(long **)(this + 0x19e8),param_1);
    processPostFxOpaque(this,param_1,(ShaderTexture *)&local_78,2,(ShaderConstantBuffer *)&local_88,
                        1,(AdhocShader *)(this + 0x158));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


