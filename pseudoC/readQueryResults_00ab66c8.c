// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readQueryResults
// Entry Point: 00ab66c8
// Size: 576 bytes
// Signature: undefined readQueryResults(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::readQueryResults() */

void VulkanRenderDevice::readQueryResults(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long in_x0;
  undefined8 uVar5;
  Logger *this;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  undefined8 local_870 [256];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar12 = 0;
  uVar1 = *(uint *)(in_x0 + 0x3b8);
  do {
    lVar10 = in_x0 + lVar12 * 0x30;
    uVar2 = *(uint *)(lVar10 + 0x560);
    if (0xff < uVar2) {
      uVar2 = 0x100;
    }
    if (*(ulong *)(lVar10 + 0x580) <= (ulong)uVar1 && uVar2 != 0) {
      lVar11 = in_x0 + lVar12 * 0x30;
      iVar4 = (*vkGetQueryPoolResults)
                        (*(undefined8 *)(in_x0 + 0x18),*(undefined8 *)(lVar11 + 0x558),0,uVar2,
                         uVar2 << 3,local_870,8,1);
      if (iVar4 == 0) {
        fVar13 = *(float *)(in_x0 + 0x3a8);
        uVar6 = 0;
        iVar4 = *(int *)(in_x0 + 0x3ac);
        lVar7 = *(long *)(in_x0 + lVar12 * 0x30 + 0x568);
        do {
          if (iVar4 == 0) {
            lVar8 = 0;
          }
          else {
            dVar14 = (double)NEON_ucvtf(local_870[uVar6]);
            lVar8 = (long)((dVar14 * (double)fVar13) / 1000.0);
          }
          lVar9 = *(long *)(lVar7 + uVar6 * 8);
          if (uVar6 == *(uint *)(lVar9 + 0x18)) {
            *(long *)(lVar9 + 0x28) = lVar8;
            *(undefined4 *)(lVar9 + 0x18) = 0xffffffff;
            *(undefined *)(lVar9 + 0x38) = 1;
          }
          else if (uVar6 == *(uint *)(lVar9 + 0x1c)) {
            *(long *)(lVar9 + 0x30) = lVar8;
            *(undefined4 *)(lVar9 + 0x1c) = 0xffffffff;
            *(undefined *)(lVar9 + 0x39) = 1;
          }
          uVar6 = uVar6 + 1;
        } while (uVar2 != uVar6);
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 00ab6890 to 00ab6897 has its CatchHandler @ 00ab6918 */
          this = (Logger *)operator_new(0x38);
                    /* try { // try from 00ab689c to 00ab689f has its CatchHandler @ 00ab6908 */
          Logger::Logger(this);
          LogManager::getInstance()::singletonLogManager = this;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Failed to read render query results.");
      }
      uVar5 = VulkanCommandBuffer::acquireVkCommandBuffer
                        (*(VulkanCommandBuffer **)(in_x0 + 0x390),0);
      (*vkCmdResetQueryPool)(uVar5,*(undefined8 *)(lVar11 + 0x558),0,(ulong)uVar2);
      *(undefined4 *)(lVar10 + 0x560) = 0;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 2);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


