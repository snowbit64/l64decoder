// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createQueryPools
// Entry Point: 00ab6168
// Size: 392 bytes
// Signature: undefined createQueryPools(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::createQueryPools() */

void VulkanRenderDevice::createQueryPools(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  undefined8 uVar3;
  Logger *this;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68[0] = 0xb;
  local_60 = 0;
  uStack_50 = 0x100;
  local_58 = 0x200000000;
  iVar2 = (*vkCreateQueryPool)(*(undefined8 *)(in_x0 + 0x18),local_68,0,in_x0 + 0x558);
  if (iVar2 == 0) {
    uVar3 = VulkanCommandBuffer::acquireVkCommandBuffer(*(VulkanCommandBuffer **)(in_x0 + 0x390),0);
    (*vkCmdResetQueryPool)(uVar3,*(undefined8 *)(in_x0 + 0x558),0,0x100);
    local_68[0] = 0xb;
    local_60 = 0;
    uStack_50 = 0x100;
    local_58 = 0x200000000;
    iVar2 = (*vkCreateQueryPool)(*(undefined8 *)(in_x0 + 0x18),local_68,0,in_x0 + 0x588);
    if (iVar2 == 0) {
      uVar3 = VulkanCommandBuffer::acquireVkCommandBuffer
                        (*(VulkanCommandBuffer **)(in_x0 + 0x390),0);
      (*vkCmdResetQueryPool)(uVar3,*(undefined8 *)(in_x0 + 0x588),0,0x100);
      uVar3 = 1;
      goto LAB_00ab624c;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00ab62ac to 00ab62b3 has its CatchHandler @ 00ab6300 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00ab62b8 to 00ab62bb has its CatchHandler @ 00ab62f0 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Failed to create render query pool object.");
  uVar3 = 0;
LAB_00ab624c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


