// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocateBufferMemory
// Entry Point: 00abf0f0
// Size: 400 bytes
// Signature: undefined __thiscall allocateBufferMemory(VulkanMemoryAllocator * this, uint param_1, uint param_2, uint param_3, bool param_4)


/* VulkanMemoryAllocator::allocateBufferMemory(unsigned int, unsigned int, unsigned int, bool) */

undefined8 * __thiscall
VulkanMemoryAllocator::allocateBufferMemory
          (VulkanMemoryAllocator *this,uint param_1,uint param_2,uint param_3,bool param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined4 *local_80;
  ulong uStack_78;
  uint local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = (ulong)param_1;
  Mutex::enterCriticalSection();
  local_88[0] = 5;
  local_80 = (undefined4 *)0x0;
  if (*(char *)(*(long *)(this + 8) + 0x43d) != '\0') {
    local_80 = local_a0;
    local_98 = 0;
    local_a0[0] = 0x3b9bb460;
    local_90 = 0x100000001;
  }
  local_a8 = 0;
                    /* try { // try from 00abf18c to 00abf19b has its CatchHandler @ 00abf28c */
  uStack_78 = uVar5;
  local_70 = param_3;
  iVar3 = (*vkAllocateMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_88,0,&local_a8);
  lVar2 = local_a8;
  if (iVar3 == 0) {
    if (((byte)this[(ulong)param_3 * 8 + 0x14] & 1) == 0) {
      plVar4 = (long *)(this + 0x270);
      *(ulong *)(this + 0x260) = *(long *)(this + 0x260) + uVar5;
    }
    else {
      plVar4 = (long *)(this + 0x268);
      *(ulong *)(this + 600) = *(long *)(this + 600) + uVar5;
    }
    *plVar4 = *plVar4 + uVar5;
    if (local_a8 != 0) {
                    /* try { // try from 00abf1ec to 00abf1f3 has its CatchHandler @ 00abf284 */
      puVar6 = (undefined8 *)operator_new(0x30);
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(uint *)((long)puVar6 + 0xc) = param_1;
      puVar6[3] = lVar2;
      puVar6[4] = 0;
      *(uint *)(puVar6 + 2) = param_3;
      if (param_4) {
                    /* try { // try from 00abf228 to 00abf23b has its CatchHandler @ 00abf280 */
        (*vkMapMemory)(*(undefined8 *)(*(long *)(this + 8) + 0x18),lVar2,0,uVar5,0);
      }
      *(undefined4 *)(puVar6 + 5) = 0;
      goto LAB_00abf240;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_00abf240:
                    /* try { // try from 00abf240 to 00abf247 has its CatchHandler @ 00abf288 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


