// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMemoryStats
// Entry Point: 00ab63e8
// Size: 316 bytes
// Signature: undefined __thiscall getMemoryStats(VulkanRenderDevice * this, ulonglong * param_1, ulonglong * param_2, ulonglong * param_3, ulonglong * param_4, ulonglong * param_5, ulonglong * param_6)


/* VulkanRenderDevice::getMemoryStats(unsigned long long&, unsigned long long&, unsigned long long&,
   unsigned long long&, unsigned long long&, unsigned long long&) const */

void __thiscall
VulkanRenderDevice::getMemoryStats
          (VulkanRenderDevice *this,ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,
          ulonglong *param_4,ulonglong *param_5,ulonglong *param_6)

{
  long *plVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulonglong uVar7;
  ulong uVar8;
  long *plVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined4 local_380 [2];
  undefined4 *local_378;
  uint local_26c;
  uint auStack_260 [62];
  undefined4 local_168 [2];
  undefined8 local_160;
  long local_158 [16];
  long local_d8 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  lVar6 = *(long *)(this + 0x378);
  uVar10 = *(ulonglong *)(lVar6 + 0x270);
  uVar7 = *(ulonglong *)(lVar6 + 600);
  *param_2 = *(ulonglong *)(lVar6 + 0x268);
  *param_5 = uVar10;
  if (this[0x43a] == (VulkanRenderDevice)0x0) {
    *param_1 = uVar7;
    *param_3 = 0x80000000;
  }
  else {
    local_378 = local_168;
    local_168[0] = 0x3b9e67c8;
    local_160 = 0;
    local_380[0] = 0x3b9bb07e;
    (*vkGetPhysicalDeviceMemoryProperties2KHR)(*(undefined8 *)(this + 0x20),local_380);
    uVar8 = (ulong)local_26c;
    if (local_26c != 0) {
      plVar9 = local_d8;
      puVar11 = auStack_260;
      do {
        bVar5 = (*puVar11 & 1) != 0;
        puVar2 = param_4;
        if (bVar5) {
          puVar2 = param_1;
        }
        puVar3 = param_6;
        if (bVar5) {
          puVar3 = param_3;
        }
        uVar8 = uVar8 - 1;
        *puVar2 = *puVar2 + *plVar9;
        plVar1 = plVar9 + -0x10;
        plVar9 = plVar9 + 1;
        *puVar3 = *puVar3 + *plVar1;
        puVar11 = puVar11 + 4;
      } while (uVar8 != 0);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


