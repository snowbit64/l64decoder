// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeAudioFrame
// Entry Point: 00c732f0
// Size: 368 bytes
// Signature: undefined decodeAudioFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::decodeAudioFrame() */

void TheoraVideoDecoder::decodeAudioFrame(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  TheoraVideoDecoder *in_x0;
  ulong uVar5;
  long lVar6;
  Stream *pSVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  float **local_70;
  ogg_packet aoStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar7 = *(Stream **)(in_x0 + 0x48);
  while (uVar5 = getPacket(in_x0,pSVar7,aoStack_68), (uVar5 & 1) != 0) {
    iVar2 = vorbis_synthesis(*(long *)(in_x0 + 0x48) + 0x2f8,aoStack_68);
    if (iVar2 == 0) {
      vorbis_synthesis_blockin(*(long *)(in_x0 + 0x48) + 0x268,*(long *)(in_x0 + 0x48) + 0x2f8);
      uVar3 = vorbis_synthesis_pcmout(*(long *)(in_x0 + 0x48) + 0x268,&local_70);
      if (0 < (int)uVar3) {
        uVar9 = 0;
        do {
          uVar4 = copyAudioIntoBuffers(in_x0,local_70,uVar3,*(uint *)(in_x0 + 0xf8));
          uVar9 = uVar9 | uVar4;
          vorbis_synthesis_read(*(long *)(in_x0 + 0x48) + 0x268,uVar3);
          uVar3 = vorbis_synthesis_pcmout(*(long *)(in_x0 + 0x48) + 0x268,&local_70);
        } while (0 < (int)uVar3);
        if ((uVar9 & 1) != 0) goto LAB_00c73438;
      }
    }
    pSVar7 = *(Stream **)(in_x0 + 0x48);
  }
  if (*(long **)(in_x0 + 0x120) == (long *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x10);
    *puVar8 = 0;
    *(undefined8 **)(in_x0 + 0x120) = puVar8;
  }
  else {
    memset((void *)(**(long **)(in_x0 + 0x120) + (ulong)*(uint *)(in_x0 + 0x128) * 2),0,
           (ulong)(*(int *)(in_x0 + 0xfc) - *(uint *)(in_x0 + 0x128)) << 1);
    puVar8 = *(undefined8 **)(in_x0 + 0x120);
  }
  do {
    lVar10 = *(long *)(in_x0 + 0xb0);
    puVar8[1] = lVar10;
    lVar6 = FUN_00f275d0(lVar10,puVar8);
  } while (lVar10 != lVar6);
  FUN_00f27700(1,in_x0 + 0xb8);
  *(undefined8 *)(in_x0 + 0x120) = 0;
LAB_00c73438:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


