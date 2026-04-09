// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPingRequest
// Entry Point: 00b406f0
// Size: 68 bytes
// Signature: undefined __thiscall findPingRequest(MasterServerManager * this, uint param_1)


/* MasterServerManager::findPingRequest(unsigned int) */

uint * __thiscall MasterServerManager::findPingRequest(MasterServerManager *this,uint param_1)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x1f0);
  do {
    if (lVar2 == *(long *)(this + 0x1f8)) {
      return (uint *)0x0;
    }
    for (puVar1 = *(uint **)(lVar2 + 8); puVar1 != *(uint **)(lVar2 + 0x10); puVar1 = puVar1 + 9) {
      if (*puVar1 == param_1) {
        return puVar1;
      }
    }
    lVar2 = lVar2 + 0x28;
  } while( true );
}


