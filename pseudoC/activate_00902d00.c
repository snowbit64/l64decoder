// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00902d00
// Size: 400 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* MeshSplitAttachmentSharedData::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void MeshSplitAttachmentSharedData::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uchar *puVar6;
  uchar *local_d8;
  int local_d0;
  undefined4 local_cc;
  char *local_c8;
  uint local_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    uVar2 = TriangleSet::getAttributes();
    local_bc = IndexedTriangleSetGeometryUtil::getVertexDeclarationAttributes(uVar2 | 2);
    uStack_b8 = 1;
    uStack_ac = 0;
    local_b4 = 0;
    uStack_9c = 0;
    local_a4 = 0;
    uStack_8c = 0;
    local_94 = 0;
    uStack_7c = 0;
    local_84 = 0;
    uStack_6c = 0;
    local_74 = 0;
    uStack_5c = 0;
    local_64 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    IndexedTriangleSetGeometryUtil::buildVertexDeclarationDesc
              (&local_bc,1,false,(VertexDeclarationDesc *)&uStack_b8);
    uVar5 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&uStack_b8);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    iVar3 = TriangleSet::getNumVertices();
    iVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),0);
    puVar6 = (uchar *)operator_new__((ulong)(uint)(iVar4 * iVar3));
    IndexedTriangleSetGeometryUtil::fillVertexBuffer
              (*(IndexedTriangleSet **)(param_1 + 0x28),puVar6,local_bc,false,
               (float *)(param_1 + 0x44),1.0 / *(float *)(param_1 + 0x50),0);
    local_cc = 1;
    local_d8 = puVar6;
    local_d0 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),0);
    local_d0 = local_d0 * iVar3;
    local_c8 = "MeshSplitAttachmentGeometry";
    uVar5 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
    uVar5 = (**(code **)(*(long *)param_2 + 0x108))(param_2,uVar5,&local_d8);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    operator_delete__(puVar6);
    iVar3 = 3;
    *(undefined4 *)(param_1 + 8) = 3;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3 == 3);
}


