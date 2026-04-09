// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRequestDropped_any
// Entry Point: 0096eb44
// Size: 248 bytes
// Signature: undefined __thiscall onRequestDropped_any(UpgradePipeline * this, MipsBuffer param_1)


/* TextureStreamingManager::UpgradePipeline::onRequestDropped_any(TextureStreamingManager::UpgradePipeline::MipsBuffer)
    */

void __thiscall
TextureStreamingManager::UpgradePipeline::onRequestDropped_any
          (UpgradePipeline *this,MipsBuffer param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  puVar2 = (undefined8 *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = puVar2[1];
  local_60 = *puVar2;
  local_50 = puVar2[2];
  Mutex::enterCriticalSection();
                    /* try { // try from 0096eb90 to 0096eb9b has its CatchHandler @ 0096ec48 */
  FUN_0096e9f4(this + 0x200,&local_60);
                    /* try { // try from 0096eb9c to 0096eba3 has its CatchHandler @ 0096ec44 */
  Mutex::leaveCriticalSection();
  pvVar3 = (void *)puVar2[2];
  Mutex::enterCriticalSection();
  if (pvVar3 == *(void **)(this + 0x2a8)) {
    this[0x2a0] = (UpgradePipeline)0x0;
                    /* try { // try from 0096ebdc to 0096ebe3 has its CatchHandler @ 0096ec3c */
    Mutex::leaveCriticalSection();
  }
  else {
                    /* try { // try from 0096ebc0 to 0096ebc7 has its CatchHandler @ 0096ec40 */
    Mutex::leaveCriticalSection();
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  DAT_0210ee44._0_4_ = (int)DAT_0210ee44 + -1;
  DAT_0210ee4c = DAT_0210ee4c + 1;
  FUN_00f27700(0xffffffff,this + 0x230);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


