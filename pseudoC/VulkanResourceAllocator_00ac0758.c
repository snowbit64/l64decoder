// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanResourceAllocator
// Entry Point: 00ac0758
// Size: 604 bytes
// Signature: undefined __thiscall VulkanResourceAllocator(VulkanResourceAllocator * this, VulkanRenderDevice * param_1)


/* VulkanResourceAllocator::VulkanResourceAllocator(VulkanRenderDevice*) */

void __thiscall
VulkanResourceAllocator::VulkanResourceAllocator
          (VulkanResourceAllocator *this,VulkanRenderDevice *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  byte bVar3;
  MEMORY_TYPE MVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_c4;
  undefined auStack_c0 [8];
  uint local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__VulkanResourceAllocator_00fe6450;
  memset(this + 8,0,0x900);
  *(undefined8 *)(this + 0x958) = 0;
  *(undefined8 *)(this + 0x950) = 0;
  *(undefined8 *)(this + 0x968) = 0;
  *(undefined8 *)(this + 0x960) = 0;
  *(undefined8 *)(this + 0x978) = 0;
  *(undefined8 *)(this + 0x970) = 0;
  *(undefined8 *)(this + 0x990) = 0;
  *(undefined8 *)(this + 0x988) = 0;
  *(undefined8 *)(this + 0x9a0) = 0;
  *(undefined8 *)(this + 0x998) = 0;
  *(undefined8 *)(this + 0x9b0) = 0;
  *(undefined8 *)(this + 0x9a8) = 0;
  *(undefined8 *)(this + 0x9c0) = 0;
  *(undefined8 *)(this + 0x9b8) = 0;
  *(undefined8 *)(this + 0x9d0) = 0;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(undefined8 *)(this + 0x9e0) = 0;
  *(undefined8 *)(this + 0x9d8) = 0;
  *(undefined8 *)(this + 0x9f0) = 0;
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined8 *)(this + 0xa00) = 0;
  *(undefined8 *)(this + 0x9f8) = 0;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined8 *)(this + 0xa08) = 0;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined8 *)(this + 0xa48) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
                    /* try { // try from 00ac07e8 to 00ac07f7 has its CatchHandler @ 00ac09b4 */
  Mutex::Mutex((Mutex *)(this + 0xad8),true);
  *(VulkanRenderDevice **)(this + 0x980) = param_1;
  lVar6 = 0;
  lVar7 = 0x948;
  do {
    local_80 = 0;
    uVar5 = (int)lVar7 - 0x948;
    local_a0[0] = 0xc;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0x100;
    if (uVar5 < 8) {
      local_80 = *(undefined4 *)((long)&DAT_00517640 + lVar6);
    }
    local_7c = 0;
    uStack_78 = 0;
    local_70 = 0;
                    /* try { // try from 00ac086c to 00ac087b has its CatchHandler @ 00ac09bc */
    (*vkCreateBuffer)(*(undefined8 *)(param_1 + 0x18),local_a0,0,&local_a8);
                    /* try { // try from 00ac0888 to 00ac0917 has its CatchHandler @ 00ac09c0 */
    (*vkGetBufferMemoryRequirements)(*(undefined8 *)(param_1 + 0x18),local_a8,auStack_c0);
    *(uint *)(this + lVar6 + 0x908) = local_b8;
    if ((uVar5 & 0x7ffffffe) == 6) {
      puVar1 = &local_c4;
      if (0xf < local_b8) {
        puVar1 = (undefined4 *)(this + lVar6 + 0x908);
      }
      local_c4 = 0x10;
      *(undefined4 *)(this + lVar6 + 0x908) = *puVar1;
    }
    if (uVar5 < 8) {
      MVar4 = *(MEMORY_TYPE *)((long)&DAT_005176e0 + lVar6);
    }
    else {
      MVar4 = 4;
    }
    bVar3 = VulkanMemoryAllocator::getMemoryTypeIndex
                      (*(VulkanMemoryAllocator **)(*(long *)(this + 0x980) + 0x378),local_b0,MVar4,
                       (uint *)(this + lVar6 + 0x928));
    this[lVar7] = (VulkanResourceAllocator)(bVar3 & 1);
    (*vkDestroyBuffer)(*(undefined8 *)(param_1 + 0x18),local_a8,0);
    lVar6 = lVar6 + 4;
    lVar7 = lVar7 + 1;
  } while (lVar6 != 0x20);
  *(undefined8 *)(this + 0xab8) = 0;
  *(undefined8 *)(this + 0xa90) = 0x9c400000005;
  *(undefined8 *)(this + 0xa88) = 0x9c400000004;
  *(undefined8 *)(this + 0xaa0) = 0x138800000003;
  *(undefined8 *)(this + 0xa98) = 0x138800000002;
  *(undefined8 *)(this + 0xa80) = 0x138800000009;
  *(undefined8 *)(this + 0xa78) = 0x138800000008;
  *(VulkanResourceAllocator **)(this + 0xad0) = this + 0xa78;
  *(undefined8 *)(this + 0xaa8) = 0x8000000000;
  *(undefined4 *)(this + 0xab0) = 0x21;
  *(undefined8 *)(this + 0xac0) = 0x271000000000;
  *(undefined4 *)(this + 0xac8) = 7;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


