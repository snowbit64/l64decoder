// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_bitrate_flushpacket
// Entry Point: 00e07418
// Size: 156 bytes
// Signature: undefined vorbis_bitrate_flushpacket(void)


undefined8 vorbis_bitrate_flushpacket(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x88);
  lVar5 = *(long *)(lVar4 + 0xd0);
  if (lVar5 != 0) {
    if (param_2 != (undefined8 *)0x0) {
      if (*(int *)(*(long *)(*(long *)(lVar5 + 0x68) + 0x88) + 0x90) == 0) {
        lVar3 = 7;
      }
      else {
        lVar3 = (long)*(int *)(lVar4 + 0xd8);
      }
      lVar3 = *(long *)(lVar5 + 0xb8) + lVar3 * 8;
      uVar2 = oggpack_get_buffer(*(undefined8 *)(lVar3 + 0x10));
      *param_2 = uVar2;
      uVar2 = oggpack_bytes(*(undefined8 *)(lVar3 + 0x10));
      iVar1 = *(int *)(lVar5 + 0x50);
      param_2[1] = uVar2;
      param_2[2] = 0;
      uVar6 = *(undefined8 *)(lVar5 + 0x60);
      uVar2 = *(undefined8 *)(lVar5 + 0x58);
      param_2[3] = (long)iVar1;
      param_2[5] = uVar6;
      param_2[4] = uVar2;
    }
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    return 1;
  }
  return 0;
}


