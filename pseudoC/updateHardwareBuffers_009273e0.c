// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateHardwareBuffers
// Entry Point: 009273e0
// Size: 824 bytes
// Signature: undefined updateHardwareBuffers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DestructionGeometry::updateHardwareBuffers() */

void DestructionGeometry::updateHardwareBuffers(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  long *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  long *plVar8;
  void *__src;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  RenderDeviceManager::getInstance();
  plVar4 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  if (*(char *)(in_x0 + 0xd0) != '\0') {
    plVar8 = *(long **)(in_x0 + 0xb8);
    if (plVar8 == (long *)0x0) {
      local_68 = *(undefined8 *)(in_x0 + 0xa8);
      local_60 = *(int *)(in_x0 + 200) << 1;
      local_50 = *(undefined8 *)(in_x0 + 0x18);
      local_5c = 2;
      uStack_58 = 0;
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4,uVar5,&local_68);
      *(undefined8 *)(in_x0 + 0xb8) = uVar5;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar5,0,*(int *)(in_x0 + 200) << 1,1);
      memcpy(pvVar6,*(void **)(in_x0 + 0xa8),(ulong)*(uint *)(in_x0 + 200) << 1);
      plVar8 = *(long **)(in_x0 + 0xb8);
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar5);
    }
    *(undefined *)(in_x0 + 0xd0) = 0;
  }
  if (*(char *)(in_x0 + 0xd1) != '\0') {
    plVar8 = *(long **)(in_x0 + 0xb0);
    if (plVar8 == (long *)0x0) {
      iVar1 = *(int *)(in_x0 + 0xc4);
      plVar8 = (long *)DestructionGeometryShared::getVertexDeclaration();
      local_60 = (**(code **)(*plVar8 + 0x10))(plVar8,0);
      local_60 = local_60 * iVar1;
      local_68 = *(undefined8 *)(in_x0 + 0xa0);
      local_5c = 4;
      uStack_58 = (undefined4)*(undefined8 *)(in_x0 + 0x18);
      uStack_54 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x18) >> 0x20);
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      uVar5 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar5,&local_68);
      *(undefined8 *)(in_x0 + 0xb0) = uVar5;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      iVar1 = *(int *)(in_x0 + 0xc4);
      plVar7 = (long *)DestructionGeometryShared::getVertexDeclaration();
      iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0);
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar5,0,iVar3 * iVar1,1);
      __src = *(void **)(in_x0 + 0xa0);
      iVar1 = *(int *)(in_x0 + 0xc4);
      plVar8 = (long *)DestructionGeometryShared::getVertexDeclaration();
      iVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,0);
      memcpy(pvVar6,__src,(ulong)(uint)(iVar3 * iVar1));
      plVar8 = *(long **)(in_x0 + 0xb0);
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar5);
    }
    *(undefined *)(in_x0 + 0xd1) = 0;
  }
  if (*(char *)(in_x0 + 0x98) != '\0') {
    plVar8 = *(long **)(in_x0 + 0x88);
    if (plVar8 == (long *)0x0) {
      local_68 = *(undefined8 *)(in_x0 + 0x80);
      local_60 = *(int *)(in_x0 + 0x94) << 1;
      local_50 = *(undefined8 *)(in_x0 + 0x18);
      local_5c = 2;
      uStack_58 = 0;
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      uVar5 = (**(code **)(*plVar4 + 0x110))(plVar4,uVar5,&local_68);
      *(undefined8 *)(in_x0 + 0x88) = uVar5;
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      pvVar6 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar5,0,*(int *)(in_x0 + 0xc4) << 1,1);
      memcpy(pvVar6,*(void **)(in_x0 + 0x80),(ulong)*(uint *)(in_x0 + 0xc4) << 1);
      plVar8 = *(long **)(in_x0 + 0x88);
      uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4);
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar5);
    }
    *(undefined *)(in_x0 + 0x98) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


