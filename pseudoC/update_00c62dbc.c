// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00c62dbc
// Size: 108 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NetworkAvailability::update() */

void NetworkAvailability::update(void)

{
  CONNECTION_STATUS CVar1;
  NetworkAvailability *in_x0;
  long lVar2;
  ulong uVar3;
  
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(in_x0 + 0x50);
  if (lVar2 != *(long *)(in_x0 + 0x58)) {
    uVar3 = 0;
    do {
      CVar1 = *(CONNECTION_STATUS *)(lVar2 + uVar3 * 4);
      *(CONNECTION_STATUS *)(in_x0 + 0x48) = CVar1;
      executeCallbacks(in_x0,CVar1);
      lVar2 = *(long *)(in_x0 + 0x50);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(in_x0 + 0x58) - lVar2 >> 2));
    *(long *)(in_x0 + 0x58) = lVar2;
  }
  Mutex::leaveCriticalSection();
  return;
}


