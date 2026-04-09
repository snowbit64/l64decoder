// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInstance
// Entry Point: 00afe4e0
// Size: 120 bytes
// Signature: undefined getInstance(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GpuProfilerManager::getInstance() */

undefined * GpuProfilerManager::getInstance(void)

{
  int iVar1;
  
  if (((DAT_02115128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02115128), iVar1 != 0)) {
                    /* try { // try from 00afe520 to 00afe52b has its CatchHandler @ 00afe558 */
    GpuProfilerManager((GpuProfilerManager *)&DAT_02113d58);
    __cxa_atexit(~GpuProfilerManager,&DAT_02113d58,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02115128);
  }
  return &DAT_02113d58;
}


