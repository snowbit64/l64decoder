// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: estimateInstanceBufferSize
// Entry Point: 00a07a78
// Size: 540 bytes
// Signature: undefined estimateInstanceBufferSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderController::estimateInstanceBufferSize() */

void RenderController::estimateInstanceBufferSize(void)

{
  ulong uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long **in_x0;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined (*pauVar13) [16];
  long lVar14;
  ulong uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined8 local_58;
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar7 != 0)
     ) {
                    /* try { // try from 00a07c58 to 00a07c63 has its CatchHandler @ 00a07c94 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  uVar5 = InstancedGeometryManager::getInstance()::s_instance._88_4_;
  plVar9 = in_x0[0x42];
  if ((long)in_x0[0x43] - (long)plVar9 == 0) {
    uVar12 = 0;
  }
  else {
    uVar10 = (long)in_x0[0x43] - (long)plVar9 >> 2;
    uVar1 = uVar10;
    if (uVar10 < 2) {
      uVar1 = 1;
    }
    if (uVar1 < 8) {
      uVar11 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar15 = uVar10;
      if (uVar10 < 2) {
        uVar15 = 1;
      }
      uVar11 = 0;
      if (((int)(uVar15 - 1) != -1) && (uVar15 - 1 >> 0x20 == 0)) {
        uVar11 = uVar1 & 0xfffffffffffffff8;
        pauVar13 = (undefined (*) [16])(plVar9 + 2);
        auVar16 = ZEXT816(0);
        auVar17 = ZEXT816(0);
        uVar15 = uVar11;
        do {
          auVar3 = pauVar13[-1];
          auVar4 = *pauVar13;
          *(undefined8 *)(pauVar13[-1] + 8) = 0;
          *(undefined8 *)pauVar13[-1] = 0;
          *(undefined8 *)(*pauVar13 + 8) = 0;
          *(undefined8 *)*pauVar13 = 0;
          pauVar13 = pauVar13 + 2;
          uVar15 = uVar15 - 8;
          auVar16 = NEON_umax(auVar16,auVar3,4);
          auVar17 = NEON_umax(auVar17,auVar4,4);
        } while (uVar15 != 0);
        auVar16 = NEON_umax(auVar16,auVar17,4);
        uVar6 = NEON_umaxv(auVar16,4);
        uVar12 = uVar6;
        if (uVar1 == uVar11) goto LAB_00a07b0c;
      }
    }
    do {
      lVar14 = uVar11 * 4;
      uVar11 = uVar11 + 1;
      uVar12 = *(uint *)((long)plVar9 + lVar14);
      *(undefined4 *)((long)plVar9 + lVar14) = 0;
      if (uVar12 <= uVar6) {
        uVar12 = uVar6;
      }
      uVar6 = uVar12;
    } while ((uVar11 & 0xffffffff) < uVar10);
  }
LAB_00a07b0c:
  uVar6 = ((uint)uVar5 >> 5) + ((uint)uVar5 >> 1) + 0x4000;
  if (uVar12 <= uVar6) {
    uVar12 = uVar6;
  }
  uVar12 = uVar12 + 0x3fff & 0xffffc000;
  if (uVar12 < 0x100001) {
    uVar12 = 0x100000;
  }
  if (in_x0[0x45] != (long *)0x0) {
    uVar6 = (**(code **)(*in_x0[0x45] + 0x28))();
    if (uVar12 <= uVar6) goto LAB_00a07bb4;
    if (in_x0[0x45] != (long *)0x0) {
      (**(code **)(*in_x0[0x45] + 8))();
    }
  }
  local_58 = 0;
  local_50 = 8;
  local_40 = "Instance Expand Buffer";
  local_48 = 8;
  plVar9 = (long *)*in_x0[1];
  uStack_4c = uVar12;
  uVar8 = (**(code **)(**in_x0 + 0x138))();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x120))(plVar9,uVar8,&local_58);
  in_x0[0x45] = plVar9;
LAB_00a07bb4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


