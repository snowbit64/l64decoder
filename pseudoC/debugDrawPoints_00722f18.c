// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawPoints
// Entry Point: 00722f18
// Size: 376 bytes
// Signature: undefined __cdecl debugDrawPoints(uint param_1, Vector3 * param_2, DeferredDebugRenderer * param_3)


/* VehicleCollisionDistanceUtil::debugDrawPoints(unsigned int, Vector3*, DeferredDebugRenderer*) */

void VehicleCollisionDistanceUtil::debugDrawPoints
               (uint param_1,Vector3 *param_2,DeferredDebugRenderer *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uStack_78 = 0x3f8000003f800000;
  local_80 = 0;
  if (1 < param_1) {
    uVar3 = param_1 >> 1;
    uVar6 = 0;
    uVar2 = uVar3;
    if (uVar3 < 2) {
      uVar2 = 1;
    }
    puVar7 = (undefined8 *)param_2;
    do {
      uVar6 = uVar6 + 1;
      local_90 = *puVar7;
      local_88 = *(undefined4 *)(puVar7 + 1);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = (uint)uVar6 / uVar3;
      }
      uVar4 = (uint)uVar6 - uVar4 * uVar3;
      local_a0 = *(undefined8 *)(param_2 + (ulong)uVar4 * 0xc);
      local_98 = *(undefined4 *)((long)(param_2 + (ulong)uVar4 * 0xc) + 8);
      DeferredDebugRenderer::addLine
                (param_3,(float *)&local_90,(float *)&local_80,(float *)&local_a0,(float *)&local_80
                 ,0x7ff);
      puVar1 = (undefined8 *)((long)puVar7 + (ulong)uVar3 * 0xc);
      local_90 = *puVar1;
      local_88 = *(undefined4 *)(puVar1 + 1);
      local_a0 = *(undefined8 *)(param_2 + (ulong)(uVar4 + uVar3) * 0xc);
      local_98 = *(undefined4 *)((long)(param_2 + (ulong)(uVar4 + uVar3) * 0xc) + 8);
      DeferredDebugRenderer::addLine
                (param_3,(float *)&local_90,(float *)&local_80,(float *)&local_a0,(float *)&local_80
                 ,0x7ff);
      local_90 = *puVar7;
      local_88 = *(undefined4 *)(puVar7 + 1);
      local_a0 = *puVar1;
      local_98 = *(undefined4 *)(puVar1 + 1);
      DeferredDebugRenderer::addLine
                (param_3,(float *)&local_90,(float *)&local_80,(float *)&local_a0,(float *)&local_80
                 ,0x7ff);
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
    } while (uVar2 != uVar6);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


