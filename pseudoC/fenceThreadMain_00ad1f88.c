// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fenceThreadMain
// Entry Point: 00ad1f88
// Size: 524 bytes
// Signature: undefined __thiscall fenceThreadMain(VulkanCommandBuffer * this, QUEUE_TYPE param_1, bool * param_2)


/* VulkanCommandBuffer::fenceThreadMain(VulkanUtil::QUEUE_TYPE, bool volatile&) */

void __thiscall
VulkanCommandBuffer::fenceThreadMain(VulkanCommandBuffer *this,QUEUE_TYPE param_1,bool *param_2)

{
  long lVar1;
  long lVar2;
  void ***pppvVar3;
  int iVar4;
  void **ppvVar5;
  void *pvVar6;
  void ***pppvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  void **ppvVar11;
  void *pvVar12;
  void **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = (void **)0x0;
  lVar10 = (*(long **)(this + 0x98))[3];
                    /* try { // try from 00ad1fe0 to 00ad1fe3 has its CatchHandler @ 00ad2194 */
  (**(code **)(**(long **)(this + 0x98) + 0x138))();
  if (*param_2 == false) {
    do {
                    /* try { // try from 00ad2048 to 00ad204f has its CatchHandler @ 00ad219c */
      Semaphore::wait();
      pppvVar3 = &local_70;
      ppvVar11 = local_70;
      if (local_70 == (void **)0x0) {
        do {
          ppvVar11 = *(void ***)(this + (ulong)param_1 * 0x28 + 0x28);
          ppvVar5 = (void **)FUN_00f275d0(ppvVar11,0,this + (ulong)param_1 * 0x28 + 0x28);
        } while (ppvVar11 != ppvVar5);
        local_70 = ppvVar11;
        if (ppvVar11 != (void **)0x0) goto LAB_00ad2084;
        ppvVar5 = (void **)0x0;
      }
      else {
LAB_00ad2084:
        do {
          ppvVar5 = ppvVar11;
          pppvVar7 = pppvVar3;
          ppvVar11 = (void **)ppvVar5[6];
          pppvVar3 = (void ***)(ppvVar5 + 6);
        } while (ppvVar11 != (void **)0x0);
        *pppvVar7 = (void **)0x0;
        FUN_00f27700(0xffffffff,this + (ulong)param_1 * 0x28 + 0x30);
      }
      do {
        if ((ppvVar5 == (void **)0x0) || (*param_2 != false)) goto LAB_00ad2040;
                    /* try { // try from 00ad20c0 to 00ad20db has its CatchHandler @ 00ad21a0 */
        iVar4 = (*vkWaitForFences)(lVar10,1,ppvVar5 + 3,0,1000000);
      } while (iVar4 != 0);
      pvVar6 = *ppvVar5;
      lVar1 = (long)ppvVar5[1] - (long)pvVar6;
      if (lVar1 != 0) {
        uVar8 = 0;
        do {
          puVar9 = *(undefined8 **)((long)pvVar6 + uVar8 * 8);
          uVar8 = (ulong)((int)uVar8 + 1);
          puVar9[1] = *puVar9;
        } while (uVar8 < (ulong)(lVar1 >> 3));
      }
      if ((param_1 == 0) && (*(char *)(ppvVar5 + 5) != '\0')) {
                    /* try { // try from 00ad2120 to 00ad2123 has its CatchHandler @ 00ad2198 */
        VulkanRenderDevice::onFrameRendered
                  (*(VulkanRenderDevice **)(this + 0x98),*(uint *)((long)ppvVar5 + 0x24));
      }
      do {
        pvVar12 = *(void **)(this + 0x80);
        ppvVar5[6] = pvVar12;
        pvVar6 = (void *)FUN_00f275d0(pvVar12,ppvVar5);
      } while (pvVar12 != pvVar6);
      FUN_00f27700(1,this + 0x88);
LAB_00ad2040:
      ppvVar11 = local_70;
    } while (*param_2 == false);
    while (ppvVar11 != (void **)0x0) {
      pvVar6 = *ppvVar11;
      ppvVar5 = (void **)ppvVar11[6];
      if (pvVar6 != (void *)0x0) {
        ppvVar11[1] = pvVar6;
        operator_delete(pvVar6);
      }
      operator_delete(ppvVar11);
      ppvVar11 = ppvVar5;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


