// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: freeBufferMemory
// Entry Point: 00abf2a4
// Size: 172 bytes
// Signature: undefined __thiscall freeBufferMemory(VulkanMemoryAllocator * this, Allocation * param_1)


/* VulkanMemoryAllocator::freeBufferMemory(VulkanMemoryAllocator::Allocation*) */

void __thiscall
VulkanMemoryAllocator::freeBufferMemory(VulkanMemoryAllocator *this,Allocation *param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  
  Mutex::enterCriticalSection();
  uVar1 = (ulong)*(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
                    /* try { // try from 00abf2e8 to 00abf2ef has its CatchHandler @ 00abf354 */
  (*vkFreeMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),*(undefined8 *)(param_1 + 0x18),0);
  if (((byte)this[(ulong)uVar2 * 8 + 0x14] & 1) == 0) {
    plVar3 = (long *)(this + 0x270);
    *(ulong *)(this + 0x260) = *(long *)(this + 0x260) - uVar1;
  }
  else {
    plVar3 = (long *)(this + 0x268);
    *(ulong *)(this + 600) = *(long *)(this + 600) - uVar1;
  }
  *plVar3 = *plVar3 - uVar1;
  operator_delete(param_1);
                    /* try { // try from 00abf334 to 00abf33b has its CatchHandler @ 00abf350 */
  Mutex::leaveCriticalSection();
  return;
}


