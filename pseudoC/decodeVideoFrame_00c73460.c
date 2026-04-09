// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeVideoFrame
// Entry Point: 00c73460
// Size: 216 bytes
// Signature: undefined decodeVideoFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::decodeVideoFrame() */

undefined8 * TheoraVideoDecoder::decodeVideoFrame(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  TheoraVideoDecoder *in_x0;
  ulong uVar5;
  undefined8 *this;
  ogg_packet aoStack_c0 [48];
  th_img_plane atStack_90 [72];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  do {
    uVar5 = getPacket(in_x0,*(Stream **)(in_x0 + 0x40),aoStack_c0);
    if ((uVar5 & 1) == 0) {
      this = (undefined8 *)operator_new(0x10);
      *this = 0;
      goto LAB_00c73508;
    }
    iVar4 = th_decode_packetin(*(undefined8 *)(*(long *)(in_x0 + 0x40) + 0x208),aoStack_c0,0);
  } while (iVar4 < 0);
  th_decode_ycbcr_out(*(undefined8 *)(*(long *)(in_x0 + 0x40) + 0x208),atStack_90);
  uVar1 = *(uint *)(*(long *)(in_x0 + 0x40) + 0x1b4);
  uVar2 = *(uint *)(*(long *)(in_x0 + 0x40) + 0x1b8);
  this = (undefined8 *)operator_new(0x10);
                    /* try { // try from 00c734e4 to 00c734f3 has its CatchHandler @ 00c73538 */
  RGBVideoFrame::RGBVideoFrame
            ((RGBVideoFrame *)this,uVar1,uVar2,*(uint *)(in_x0 + 0x104),*(uint *)(in_x0 + 0x108),
             atStack_90);
LAB_00c73508:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


