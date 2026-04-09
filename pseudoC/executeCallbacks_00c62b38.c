// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeCallbacks
// Entry Point: 00c62b38
// Size: 200 bytes
// Signature: undefined __thiscall executeCallbacks(NetworkAvailability * this, CONNECTION_STATUS param_1)


/* NetworkAvailability::executeCallbacks(NetworkAvailability::CONNECTION_STATUS) */

void __thiscall
NetworkAvailability::executeCallbacks(NetworkAvailability *this,CONNECTION_STATUS param_1)

{
  code **ppcVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
                    /* try { // try from 00c62b6c to 00c62b93 has its CatchHandler @ 00c62c00 */
  Mutex::enterCriticalSection();
  if (&local_50 != (void **)this) {
    std::__ndk1::
    vector<NetworkAvailability::CallbackData,std::__ndk1::allocator<NetworkAvailability::CallbackData>>
    ::assign<NetworkAvailability::CallbackData*>
              ((vector<NetworkAvailability::CallbackData,std::__ndk1::allocator<NetworkAvailability::CallbackData>>
                *)&local_50,*(CallbackData **)this,*(CallbackData **)(this + 8));
  }
  Mutex::leaveCriticalSection();
  pvVar3 = local_48;
  if (local_48 != local_50) {
    uVar4 = 0;
    do {
      ppcVar1 = (code **)(*(long *)this + uVar4 * 0x10);
                    /* try { // try from 00c62bb0 to 00c62bb7 has its CatchHandler @ 00c62c04 */
      (**ppcVar1)(param_1,ppcVar1[1]);
      uVar4 = (ulong)((int)uVar4 + 1);
      pvVar3 = local_50;
    } while (uVar4 < (ulong)((long)local_48 - (long)local_50 >> 4));
  }
  if (pvVar3 != (void *)0x0) {
    local_48 = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


