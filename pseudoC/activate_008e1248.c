// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008e1248
// Size: 256 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* IndexedTriangleSetGeometry::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void IndexedTriangleSetGeometry::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    createVertexBuffers((IndexedTriangleSetGeometry *)param_1,(IRenderDevice *)param_2,
                        *(IndexedTriangleSet **)(param_1 + 0x48));
    uVar3 = IndexedTriangleSet::is16Bit();
    if ((uVar3 & 1) == 0) {
      local_48 = 1;
      local_58 = IndexedTriangleSet::getIndices32();
      lVar5 = 2;
    }
    else {
      local_48 = 0;
      local_58 = IndexedTriangleSet::getIndices16();
      lVar5 = 1;
    }
    local_50 = IndexedTriangleSet::getNumIndices();
    local_50 = local_50 << lVar5;
    local_40 = *(undefined8 *)(param_1 + 0x18);
    uStack_4c = 1;
    uVar4 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
    uVar4 = (**(code **)(*(long *)param_2 + 0x110))(param_2,uVar4,&local_58);
    *(undefined8 *)(param_1 + 0x150) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 3;
    Geometry::freeCollisionProxyMeshBuffers((Geometry *)param_1,false);
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 3);
}


