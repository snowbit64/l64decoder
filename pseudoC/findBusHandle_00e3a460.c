// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findBusHandle
// Entry Point: 00e3a460
// Size: 116 bytes
// Signature: undefined findBusHandle(void)


/* WARNING: Removing unreachable block (ram,0x00e3a4d0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Bus::findBusHandle() */

void SoLoud::Bus::findBusHandle(void)

{
  int iVar1;
  long in_x0;
  Soloud *this;
  long lVar2;
  
  if (*(int *)(in_x0 + 0xa8) == 0) {
    lVar2 = 0;
    do {
      while( true ) {
        this = *(Soloud **)(in_x0 + 0x78);
        if (*(int *)(this + 0x54) <= lVar2) {
          return;
        }
        if (*(long *)(this + lVar2 * 8 + 0xa0) == *(long *)(in_x0 + 0xa0)) break;
        lVar2 = lVar2 + 1;
      }
      iVar1 = Soloud::getHandleFromVoice(this,(uint)lVar2);
      *(int *)(in_x0 + 0xa8) = iVar1;
      lVar2 = lVar2 + 1;
    } while (iVar1 == 0);
  }
  return;
}


