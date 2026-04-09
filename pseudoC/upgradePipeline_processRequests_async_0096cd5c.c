// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_processRequests_async
// Entry Point: 0096cd5c
// Size: 436 bytes
// Signature: undefined upgradePipeline_processRequests_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_processRequests_async() */

void TextureStreamingManager::upgradePipeline_processRequests_async(void)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long in_x0;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulonglong *puVar7;
  ulonglong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  uVar1 = *(uint *)(in_x0 + 0x2c8);
                    /* try { // try from 0096cd94 to 0096cd9b has its CatchHandler @ 0096cf18 */
  Mutex::leaveCriticalSection();
  if ((uVar1 < 10) && (lVar5 = *(long *)(in_x0 + 0x408), lVar5 != 0)) {
    if (*(char *)(in_x0 + 0x840) == '\0') {
      Mutex::enterCriticalSection();
      cVar2 = *(char *)(in_x0 + 0x678);
                    /* try { // try from 0096cecc to 0096ced3 has its CatchHandler @ 0096cf10 */
      Mutex::leaveCriticalSection();
      if (cVar2 != '\0') goto LAB_0096ced8;
      lVar5 = *(long *)(in_x0 + 0x408);
    }
    uVar6 = *(ulong *)(in_x0 + 0x400);
    puVar7 = (ulonglong *)((long)(*(void ***)(in_x0 + 1000))[uVar6 / 0xaa] + (uVar6 % 0xaa) * 0x18);
    uStack_58 = puVar7[1];
    local_60 = *puVar7;
    local_50 = puVar7[2];
    *(long *)(in_x0 + 0x408) = lVar5 + -1;
    *(ulong *)(in_x0 + 0x400) = uVar6 + 1;
    if (0x153 < uVar6 + 1) {
      operator_delete(**(void ***)(in_x0 + 1000));
      *(long *)(in_x0 + 1000) = *(long *)(in_x0 + 1000) + 8;
      *(long *)(in_x0 + 0x400) = *(long *)(in_x0 + 0x400) + -0xaa;
    }
    uVar6 = CommonPipelineData::tryChangeTextureStatus_any
                      ((CommonPipelineData *)(in_x0 + 0x218),local_60,1,2);
    if ((uVar6 & 1) == 0) {
      DAT_0210ee50 = *(int *)(in_x0 + 0x5a8) - uStack_58._4_4_;
      *(int *)(in_x0 + 0x5a8) = DAT_0210ee50;
      DAT_0210ee40 = DAT_0210ee40 + -1;
      DAT_0210ee4c = DAT_0210ee4c + 1;
      FUN_00f27700(0xffffffff,in_x0 + 0x608);
    }
    else {
      Mutex::enterCriticalSection();
      *(int *)(in_x0 + 0x2c8) = *(int *)(in_x0 + 0x2c8) + 1;
                    /* try { // try from 0096ce5c to 0096ce63 has its CatchHandler @ 0096cf14 */
      Mutex::leaveCriticalSection();
      UpgradePipeline::nativeLoadMipsFromFile_async
                ((UpgradePipeline *)(in_x0 + 0x3d8),(ChangeRequest *)&local_60);
    }
    uVar4 = 1;
  }
  else {
LAB_0096ced8:
    uVar4 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


