// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00c70bb4
// Size: 404 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VideoPlayer::update() */

void VideoPlayer::update(void)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  VideoPlayer *in_x0;
  TheoraVideoDecoder *this;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  if (*in_x0 == (VideoPlayer)0x0) {
    return;
  }
  this = *(TheoraVideoDecoder **)(in_x0 + 8);
  if (this[0x50] == (TheoraVideoDecoder)0x0) {
LAB_00c70c60:
    plVar6 = *(long **)(in_x0 + 0x38);
joined_r0x00c70cc0:
    if (plVar6 == (long *)0x0) {
      lVar8 = *(long *)(in_x0 + 0x48);
      lVar7 = Watch::getCurrentTicks();
      *(long *)(in_x0 + 0x48) = lVar7;
      dVar10 = (double)Watch::convertTicksToMs(lVar7 - lVar8);
      dVar12 = (double)NEON_ucvtf((ulong)*(uint *)(*(long *)(in_x0 + 8) + 0x10c));
      dVar13 = (double)NEON_ucvtf((ulong)*(uint *)(*(long *)(in_x0 + 8) + 0x110));
      fVar9 = *(float *)(in_x0 + 0x50) + (float)((dVar10 * 0.001 * dVar12) / dVar13);
      fVar11 = (float)NEON_ucvtf((int)fVar9);
      *(float *)(in_x0 + 0x50) = fVar9 - fVar11;
      iVar3 = (int)fVar9;
    }
    else {
      uVar4 = (**(code **)(*plVar6 + 0x20))();
      lVar7 = *(long *)(in_x0 + 8);
      uVar2 = 0;
      if ((ulong)*(uint *)(lVar7 + 0x110) != 0) {
        uVar2 = ((ulong)*(uint *)(lVar7 + 0x10c) * (uVar4 & 0xffffffff)) /
                (ulong)*(uint *)(lVar7 + 0x110);
      }
      uVar1 = 0;
      if ((ulong)*(uint *)(lVar7 + 0xf4) != 0) {
        uVar1 = (uint)(uVar2 / *(uint *)(lVar7 + 0xf4));
      }
      iVar3 = 0;
      if (*(uint *)(lVar7 + 0x118) <= uVar1) {
        iVar3 = uVar1 - *(uint *)(lVar7 + 0x118);
      }
    }
    while (iVar3 != 0) {
      getNextVideoBuffer(in_x0,iVar3 + -1 == 0);
      iVar3 = iVar3 + -1;
    }
  }
  else {
    plVar6 = *(long **)(in_x0 + 0x38);
    if (plVar6 == (long *)0x0) {
      if (in_x0[1] != (VideoPlayer)0x0) {
LAB_00c70c14:
        TheoraVideoDecoder::seek(this,0.0);
        if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
          (**(code **)(**(long **)(in_x0 + 0x38) + 0x40))(0,0);
          (**(code **)(**(long **)(in_x0 + 0x38) + 0x10))
                    (*(undefined4 *)(in_x0 + 4),0x3f800000,0,0,*(long **)(in_x0 + 0x38),0,0);
          goto LAB_00c70c60;
        }
        uVar5 = Watch::getCurrentTicks();
        *(undefined4 *)(in_x0 + 0x50) = 0;
        *(undefined8 *)(in_x0 + 0x48) = uVar5;
        plVar6 = *(long **)(in_x0 + 0x38);
        goto joined_r0x00c70cc0;
      }
    }
    else {
      if (this[0x51] == (TheoraVideoDecoder)0x0) goto LAB_00c70c60;
      if (in_x0[1] != (VideoPlayer)0x0) goto LAB_00c70c14;
      (**(code **)(*plVar6 + 0x40))(0,0,plVar6);
    }
    *in_x0 = (VideoPlayer)0x0;
  }
  return;
}


