// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rawAllocateMemory
// Entry Point: 00abe3a0
// Size: 256 bytes
// Signature: undefined __thiscall rawAllocateMemory(VulkanMemoryAllocator * this, uint param_1, uint param_2, void * param_3)


/* VulkanMemoryAllocator::rawAllocateMemory(unsigned int, unsigned int, void*) */

void __thiscall
VulkanMemoryAllocator::rawAllocateMemory
          (VulkanMemoryAllocator *this,uint param_1,uint param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 local_78;
  undefined4 local_70 [2];
  void *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulong uStack_48;
  uint local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = (ulong)param_1;
  local_58[0] = 5;
  local_50 = (undefined4 *)param_3;
  if (*(char *)(*(long *)(this + 8) + 0x43d) != '\0') {
    local_50 = local_70;
    local_70[0] = 0x3b9bb460;
    local_60 = 0x100000001;
    local_68 = param_3;
  }
  local_78 = 0;
  uStack_48 = uVar5;
  local_40 = param_2;
  iVar2 = (*vkAllocateMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_58,0,&local_78);
  uVar3 = 0;
  if (iVar2 == 0) {
    if (((byte)this[(ulong)param_2 * 8 + 0x14] & 1) == 0) {
      plVar4 = (long *)(this + 0x270);
      *(ulong *)(this + 0x260) = *(long *)(this + 0x260) + uVar5;
    }
    else {
      plVar4 = (long *)(this + 0x268);
      *(ulong *)(this + 600) = *(long *)(this + 600) + uVar5;
    }
    *plVar4 = *plVar4 + uVar5;
    uVar3 = local_78;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


