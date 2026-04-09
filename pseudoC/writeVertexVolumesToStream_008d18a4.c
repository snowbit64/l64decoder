// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeVertexVolumesToStream
// Entry Point: 008d18a4
// Size: 300 bytes
// Signature: undefined __thiscall writeVertexVolumesToStream(FillPlaneGeometry * this, GsBitStream * param_1)


/* FillPlaneGeometry::writeVertexVolumesToStream(GsBitStream*) */

undefined8 __thiscall
FillPlaneGeometry::writeVertexVolumesToStream(FillPlaneGeometry *this,GsBitStream *param_1)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float local_64;
  undefined2 local_60 [2];
  uchar local_5c [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = (ulong)*(uint *)(this + 0x130);
  if (*(uint *)(this + 0x130) == 0) {
    fVar5 = 1e-07;
  }
  else {
    fVar5 = 1e-07;
    pfVar3 = *(float **)(this + 0xe0);
    do {
      if (fVar5 <= *pfVar3) {
        fVar5 = *pfVar3;
      }
      uVar2 = uVar2 - 1;
      pfVar3 = pfVar3 + 8;
    } while (uVar2 != 0);
  }
  local_64 = fVar5;
  GsBitStream::writeBits(param_1,(uchar *)&local_64,0x20,true);
  local_60[0] = (undefined2)*(undefined4 *)(this + 0x130);
  GsBitStream::writeBits(param_1,(uchar *)local_60,0x10,true);
  if (*(int *)(this + 0x130) != 0) {
    lVar4 = 0;
    uVar2 = 0;
    do {
      local_5c[0] = (uchar)(int)((*(float *)(*(long *)(this + 0xe0) + lVar4) / fVar5) * 255.0);
      GsBitStream::writeBits(param_1,local_5c,8,true);
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar2 < *(uint *)(this + 0x130));
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


