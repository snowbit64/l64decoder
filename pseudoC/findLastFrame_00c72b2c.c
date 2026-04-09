// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findLastFrame
// Entry Point: 00c72b2c
// Size: 288 bytes
// Signature: undefined findLastFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TheoraVideoDecoder::findLastFrame() */

void TheoraVideoDecoder::findLastFrame(void)

{
  long lVar1;
  int iVar2;
  long **in_x0;
  ulong uVar3;
  bool bVar4;
  float fVar5;
  ogg_packet aoStack_78 [32];
  undefined8 local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar5 = 1.0;
  do {
    seekImpl((TheoraVideoDecoder *)in_x0,fVar5);
    uVar3 = getPacket((TheoraVideoDecoder *)in_x0,(Stream *)in_x0[8],aoStack_78);
    if ((uVar3 & 1) != 0) {
      bVar4 = false;
      do {
        while( true ) {
          th_decode_ctl(in_x0[8][0x41],5,local_58,8);
          iVar2 = th_granule_frame(in_x0[8][0x41],local_58[0]);
          if (iVar2 < 0) break;
          *(int *)((long)in_x0 + 0x114) = iVar2;
          uVar3 = getPacket((TheoraVideoDecoder *)in_x0,(Stream *)in_x0[8],aoStack_78);
          bVar4 = true;
          if ((uVar3 & 1) == 0) goto LAB_00c72c08;
        }
        uVar3 = getPacket((TheoraVideoDecoder *)in_x0,(Stream *)in_x0[8],aoStack_78);
      } while ((uVar3 & 1) != 0);
      if (bVar4) {
LAB_00c72c08:
        (**(code **)(**in_x0 + 0x38))(*in_x0,0);
        goto LAB_00c72c1c;
      }
    }
    fVar5 = fVar5 + -0.1;
    if (fVar5 <= 0.0) {
LAB_00c72c1c:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


