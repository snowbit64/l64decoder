// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: filterFuncCs
// Entry Point: 00a0ddb8
// Size: 476 bytes
// Signature: undefined __cdecl filterFuncCs(ICommandBuffer * param_1, ITextureObject * param_2, FilterEnvMapRenderData * param_3)


/* IndirectLightRenderController::filterFuncCs(ICommandBuffer*, ITextureObject*,
   IndirectLightRenderController::FilterEnvMapRenderData const&) */

void IndirectLightRenderController::filterFuncCs
               (ICommandBuffer *param_1,ITextureObject *param_2,FilterEnvMapRenderData *param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  char *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  uint local_88;
  char *local_80;
  ITextureObject *pIStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = *(uint *)(param_3 + 0x28);
  uVar3 = *(uint *)(param_3 + 0x2c);
  if (uVar6 < uVar3) {
    lVar5 = *(long *)param_3;
    uVar4 = *(uint *)(param_3 + 0x34);
    do {
      uVar7 = *(uint *)(param_3 + 0x30);
      if (uVar7 < uVar4) {
        do {
          uStack_a0 = *(undefined8 *)
                       (*(long *)(lVar5 + 0x220) + (ulong)(uVar7 + uVar6 * *(int *)(lVar5 + 8)) * 8)
          ;
          local_80 = "envMap";
          uStack_90 = *(undefined8 *)(lVar5 + 0x180);
          local_70 = 0xffffffff;
          local_a8 = "EnvmapPrefilterCsParam";
          local_98 = "outMip1";
          uVar3 = (0x100U >> (ulong)(uVar7 & 0x1f)) + 7 >> 3;
          local_88 = uVar7;
          pIStack_78 = param_2;
          AdhocShader::bindResourcesCs
                    ((AdhocShader *)(lVar5 + 0x40),param_1,(ShaderTexture *)&local_80,1,
                     (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_98,1,
                     (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_a8,1,
                     (ShaderSampler *)0x0,0);
          plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
          (**(code **)(*plVar2 + 0x60))(plVar2,uVar3,uVar3,1);
          AdhocShader::unbindResourcesCs
                    ((AdhocShader *)(lVar5 + 0x40),param_1,(ShaderTexture *)&local_80,1,
                     (ShaderStructBuffer *)0x0,0,(ShaderTexture *)&local_98,1,
                     (ShaderStructBuffer *)0x0,0,(ShaderConstantBuffer *)&local_a8,1,
                     (ShaderSampler *)0x0,0);
          uVar4 = *(uint *)(param_3 + 0x34);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        uVar3 = *(uint *)(param_3 + 0x2c);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


