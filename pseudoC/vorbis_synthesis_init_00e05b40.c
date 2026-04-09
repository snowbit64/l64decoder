// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_synthesis_init
// Entry Point: 00e05b40
// Size: 156 bytes
// Signature: undefined vorbis_synthesis_init(void)


undefined8 vorbis_synthesis_init(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00e049c0(param_1,param_2,0);
  if ((int)uVar2 == 0) {
    if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 8) != 0)) {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x30);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x1690);
        lVar3 = *(long *)(lVar3 + 8);
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xe0) = 0xffffffffffffffff;
        lVar3 = lVar3 >> ((ulong)(uVar1 + 1) & 0x3f);
        *(long *)(param_1 + 0x50) = lVar3;
        *(int *)(param_1 + 0x24) = (int)(lVar3 >> ((ulong)uVar1 & 0x3f));
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        return 0;
      }
      return 0;
    }
  }
  else {
    vorbis_dsp_clear(param_1);
    uVar2 = 1;
  }
  return uVar2;
}


