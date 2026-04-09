// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initLoadMipsSharedBuffer_async
// Entry Point: 00968e34
// Size: 216 bytes
// Signature: undefined initLoadMipsSharedBuffer_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::UpgradePipeline::initLoadMipsSharedBuffer_async() */

void TextureStreamingManager::UpgradePipeline::initLoadMipsSharedBuffer_async(void)

{
  long lVar1;
  uint uVar2;
  long in_x0;
  void *pvVar3;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0x100000001;
  local_48 = 0;
  local_44 = 0;
  local_80 = 2;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_90 = 0x100000001000;
  local_58 = 0;
  uStack_50 = 0x10;
                    /* try { // try from 00968ea8 to 00968ec7 has its CatchHandler @ 00968f10 */
  uVar2 = MipMapUtil::getMipRangeSize((ImageDesc *)&local_90,0,3);
  *(uint *)(in_x0 + 0x2a4) = uVar2;
  pvVar3 = operator_new__((ulong)uVar2);
  *(void **)(in_x0 + 0x2a8) = pvVar3;
  *(undefined *)(in_x0 + 0x2a0) = 0;
  DAT_0210ee80 = (ulong)uVar2;
                    /* try { // try from 00968edc to 00968ee3 has its CatchHandler @ 00968f0c */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


