// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enterFrame
// Entry Point: 00afe9a4
// Size: 680 bytes
// Signature: undefined enterFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GpuProfilerManager::enterFrame() */

void GpuProfilerManager::enterFrame(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long in_x0;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 local_70 [2];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar1 = *(int *)(in_x0 + 0x13c4) + 1;
  bVar5 = uVar1 <= *(int *)(in_x0 + 0x13c8) + 5U;
  *(uint *)(in_x0 + 0x13c4) = uVar1;
  *(bool *)(in_x0 + 0x1390) = bVar5;
  if (bVar5) {
    *(undefined8 *)(in_x0 + 0x13b0) = *(undefined8 *)(in_x0 + 0x1398);
    iVar2 = 0;
    if (*(int *)(in_x0 + 0x13c0) + 1U < 3) {
      iVar2 = *(int *)(in_x0 + 0x13c0) + 1;
    }
    *(undefined8 *)(in_x0 + 0x13b8) = 0;
    *(int *)(in_x0 + 0x13c0) = iVar2;
    RenderDeviceManager::getInstance();
    plVar6 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    lVar10 = 0;
    local_70[0] = 1;
    if (*(char *)(in_x0 + 0x13cc) == '\0') {
      local_70[0] = 2;
    }
    do {
      lVar11 = in_x0 + lVar10 * 0x78;
      uVar1 = *(uint *)(in_x0 + 0x13c0);
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0x28;
      *(undefined8 *)(lVar11 + 8) = 0;
      lVar9 = *(long *)(lVar11 + 0x28);
      plVar12 = (long *)(lVar11 + 0x20);
      lVar8 = *plVar12;
      *(undefined4 *)(lVar11 + (ulong)uVar1 * 4 + 0x68) = 0;
      if (lVar9 != lVar8) {
        uVar14 = 0;
        do {
          if (*(long *)(lVar8 + uVar14 * 0x10) == 0) {
            uVar7 = (**(code **)(*plVar6 + 0x140))(plVar6,local_70);
            cVar3 = *(char *)(in_x0 + 0x13cc);
            lVar8 = *plVar12;
            *(undefined8 *)(lVar8 + uVar14 * 0x10) = uVar7;
            if (cVar3 != '\0') {
              uVar7 = (**(code **)(*plVar6 + 0x140))(plVar6,local_70);
              lVar8 = *plVar12;
              *(undefined8 *)(lVar8 + uVar14 * 0x10 + 8) = uVar7;
            }
          }
          uVar14 = (ulong)((int)uVar14 + 1);
        } while (uVar14 < (ulong)(*(long *)(lVar11 + 0x28) - lVar8 >> 4));
      }
      lVar8 = in_x0 + lVar10 * 0x78;
      plVar12 = (long *)(lVar8 + 0x40);
      plVar13 = (long *)(lVar8 + 0x38);
      lVar8 = *plVar13;
      if (*plVar12 != lVar8) {
        uVar14 = 0;
        do {
          if (*(long *)(lVar8 + uVar14 * 0x10) == 0) {
            uVar7 = (**(code **)(*plVar6 + 0x140))(plVar6,local_70);
            cVar3 = *(char *)(in_x0 + 0x13cc);
            lVar8 = *plVar13;
            *(undefined8 *)(lVar8 + uVar14 * 0x10) = uVar7;
            if (cVar3 != '\0') {
              uVar7 = (**(code **)(*plVar6 + 0x140))(plVar6,local_70);
              lVar8 = *plVar13;
              *(undefined8 *)(lVar8 + uVar14 * 0x10 + 8) = uVar7;
            }
          }
          uVar14 = (ulong)((int)uVar14 + 1);
        } while (uVar14 < (ulong)(*plVar12 - lVar8 >> 4));
      }
      lVar8 = in_x0 + lVar10 * 0x78;
      plVar12 = (long *)(lVar8 + 0x58);
      plVar13 = (long *)(lVar8 + 0x50);
      lVar8 = *plVar13;
      if (*plVar12 != lVar8) {
        uVar14 = 0;
        do {
          if (*(long *)(lVar8 + uVar14 * 0x10) == 0) {
            uVar7 = (**(code **)(*plVar6 + 0x140))(plVar6,local_70);
            cVar3 = *(char *)(in_x0 + 0x13cc);
            lVar8 = *plVar13;
            *(undefined8 *)(lVar8 + uVar14 * 0x10) = uVar7;
            if (cVar3 != '\0') {
              uVar7 = (**(code **)(*plVar6 + 0x140))(plVar6,local_70);
              lVar8 = *plVar13;
              *(undefined8 *)(lVar8 + uVar14 * 0x10 + 8) = uVar7;
            }
          }
          uVar14 = (ulong)((int)uVar14 + 1);
        } while (uVar14 < (ulong)(*plVar12 - lVar8 >> 4));
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x28);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


