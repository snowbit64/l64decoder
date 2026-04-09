// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsReady
// Entry Point: 00871c9c
// Size: 368 bytes
// Signature: undefined getIsReady(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMapVisualizationOverlay::getIsReady() */

void DensityMapVisualizationOverlay::getIsReady(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  double dVar8;
  void *local_88;
  uint local_80;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar7 = *(int *)(in_x0 + 0x293e0);
  if (iVar7 == 1) {
    lVar2 = Watch::getCurrentTicks();
    do {
      uVar3 = executeUpdateFSM();
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(in_x0 + 0x293e0) = 2;
        if (*(long *)(in_x0 + 0x293d8) == 0) goto LAB_00871dc0;
        goto LAB_00871d1c;
      }
      lVar4 = Watch::getCurrentTicks();
      dVar8 = (double)Watch::convertTicksToMs(lVar4 - lVar2);
    } while (dVar8 < *(double *)(in_x0 + 0x293c0));
    iVar7 = *(int *)(in_x0 + 0x293e0);
  }
  if (iVar7 == 2) {
    if (*(long *)(in_x0 + 0x293d8) != 0) {
LAB_00871d1c:
      RenderDeviceManager::getInstance();
      plVar5 = (long *)RenderDeviceManager::getCurrentRenderDevice();
      uVar6 = (**(code **)(*plVar5 + 0x138))();
      (**(code **)(**(long **)(in_x0 + 0x293d8) + 0x68))
                (*(long **)(in_x0 + 0x293d8),uVar6,0,0,0,0,*(undefined4 *)(in_x0 + 0x293d0),
                 *(undefined4 *)(in_x0 + 0x293d4),0,1,1,&local_88);
      PixelFormatUtil::convertPixelFormat
                (*(void **)(in_x0 + 0x293c8),0,0,5,local_88,local_80,0,5,*(uint *)(in_x0 + 0x293d0),
                 *(uint *)(in_x0 + 0x293d4),1);
      (**(code **)(**(long **)(in_x0 + 0x293d8) + 0x70))
                (*(long **)(in_x0 + 0x293d8),uVar6,&local_88);
    }
LAB_00871dc0:
    iVar7 = 0;
    *(undefined4 *)(in_x0 + 0x293e0) = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7 == 0);
  }
  return;
}


