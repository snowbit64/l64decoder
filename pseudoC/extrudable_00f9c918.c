// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: extrudable
// Entry Point: 00f9c918
// Size: 80 bytes
// Signature: undefined __thiscall extrudable(HullLibrary * this, float param_1)


/* HullLibrary::extrudable(float) */

long __thiscall HullLibrary::extrudable(HullLibrary *this,float param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar3 = (ulong)*(uint *)(this + 4);
  plVar4 = *(long **)(this + 0x10);
  lVar2 = 0;
  do {
    lVar5 = *plVar4;
    lVar1 = lVar5;
    if (((lVar2 != 0) && (lVar1 = lVar2, lVar5 != 0)) &&
       (lVar1 = lVar5, *(float *)(lVar5 + 0x20) <= *(float *)(lVar2 + 0x20))) {
      lVar1 = lVar2;
    }
    uVar3 = uVar3 - 1;
    plVar4 = plVar4 + 1;
    lVar2 = lVar1;
  } while (uVar3 != 0);
  if (*(float *)(lVar1 + 0x20) <= param_1) {
    lVar1 = 0;
  }
  return lVar1;
}


