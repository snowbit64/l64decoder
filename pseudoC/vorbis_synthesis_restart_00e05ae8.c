// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_restart
// Entry Point: 00e05ae8
// Size: 88 bytes
// Signature: undefined vorbis_synthesis_restart(void)


undefined8 vorbis_synthesis_restart(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0xffffffff;
  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 8) != 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x30);
    uVar2 = 0xffffffff;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x1690);
      *(undefined4 *)(param_1 + 0x30) = 0;
      lVar3 = *(long *)(lVar3 + 8) >> ((ulong)(uVar1 + 1) & 0x3f);
      *(long *)(param_1 + 0x50) = lVar3;
      *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
      *(int *)(param_1 + 0x24) = (int)(lVar3 >> ((ulong)uVar1 & 0x3f));
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xe0) = 0xffffffffffffffff;
    }
  }
  return uVar2;
}


