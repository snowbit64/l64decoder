// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00a74ca8
// Size: 364 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* TerrainLayerTransformGroup::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void TerrainLayerTransformGroup::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ushort *local_d0;
  int local_c8;
  undefined8 local_c4;
  char *local_b8;
  ushort *local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x1e8);
  if (iVar3 == 0) {
    if (*(int *)(*(long *)(param_1 + 0x630) + 0x8c) != 0) {
      local_44 = 0;
      local_84 = 0;
      local_94 = 0x600000000;
      uStack_7c = 8;
      uStack_9c = 0;
      uStack_8c = 0xa00000000;
      local_3c = 1;
      local_a4 = 0x100000000;
      local_74 = 0;
      uStack_6c = 0xf00000000;
      local_a8 = 2;
      uStack_4c = 0;
      local_54 = 0;
      uStack_5c = 0;
      local_64 = 0;
      uVar2 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&local_a8);
      *(undefined8 *)(param_1 + 0x648) = uVar2;
      local_b0 = (ushort *)0x0;
      local_c8 = GeoMipMappingTerrainPatch::generateTriListIndex
                           (0,*(int *)(param_1 + 0x20c) + 1,&local_b0);
      *(int *)(param_1 + 0x658) = local_c8;
      local_c8 = local_c8 << 1;
      local_d0 = local_b0;
      local_c4 = 1;
      local_b8 = "TerrainDetailTransformGroup";
      uVar2 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
      uVar2 = (**(code **)(*(long *)param_2 + 0x110))(param_2,uVar2,&local_d0);
      *(undefined8 *)(param_1 + 0x650) = uVar2;
      if (local_b0 != (ushort *)0x0) {
        operator_delete__(local_b0);
      }
    }
    LocalGeometryTransformGroup::allocateGrid
              ((LocalGeometryTransformGroup *)param_1,(IRenderDevice *)param_2);
    iVar3 = 3;
    *(undefined4 *)(param_1 + 0x1e8) = 3;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == 3);
}


