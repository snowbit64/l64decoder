// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeBrepToStream
// Entry Point: 00b774b4
// Size: 880 bytes
// Signature: undefined __cdecl writeBrepToStream(Brep * param_1, GsBitStream * param_2)


/* BrepUtil::writeBrepToStream(Brep const*, GsBitStream*) */

void BrepUtil::writeBrepToStream(Brep *param_1,GsBitStream *param_2)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(param_1 + 0x2ef8);
  lVar6 = *(long *)(param_1 + 0x2ef0);
  lVar7 = *(long *)(param_1 + 0x2f70);
  lVar4 = *(long *)(param_1 + 0x2f68);
  uVar10 = (*(long *)(param_1 + 0x2fa0) - *(long *)(param_1 + 0x2f98) >> 3) * 0xaaab;
  local_6c._0_2_ = (short)((ulong)(lVar5 - lVar6) >> 4);
  GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
  local_6c = CONCAT22(local_6c._2_2_,(short)uVar10);
  GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
  iVar8 = (int)((ulong)(lVar7 - lVar4) >> 5);
  local_6c = iVar8;
  GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
  uVar9 = (ulong)(lVar5 - lVar6) >> 4;
  if ((uVar9 & 0xffff) != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x2ef0) + lVar5);
      local_6c = *puVar1;
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c = puVar1[1];
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c = puVar1[2];
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      lVar5 = lVar5 + 0x10;
    } while ((ulong)((uint)uVar9 & 0xffff) * 0x10 - lVar5 != 0);
  }
  if ((uVar10 & 0xffff) != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x2f98) + lVar5);
      local_6c = puVar1[3];
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c = puVar1[4];
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c = *puVar1;
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c = puVar1[1];
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c = puVar1[2];
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      lVar5 = lVar5 + 0x18;
    } while ((ulong)((uint)uVar10 & 0xffff) * 0x18 - lVar5 != 0);
  }
  if (iVar8 != 0) {
    uVar9 = 0;
    lVar5 = 2;
    do {
      lVar6 = *(long *)(param_1 + 0x2f68);
      local_6c = *(int *)((undefined2 *)(lVar6 + lVar5) + 1);
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x20,true);
      local_6c._0_2_ = *(undefined2 *)(lVar6 + lVar5);
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      lVar6 = (uVar9 & 0xfffffffc) * 8;
      uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar6 + 10);
      local_6c._0_2_ =
           *(undefined2 *)
            (*(long *)(param_1 + 0x2f50) +
            (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar6 + 8) * 0xc);
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      local_6c._0_2_ = uVar2;
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar6 + 0x12);
      local_6c._0_2_ =
           *(undefined2 *)
            (*(long *)(param_1 + 0x2f50) +
            (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar6 + 0x10) * 0xc);
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      local_6c._0_2_ = uVar2;
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x2f68) + lVar6 + 0x1a);
      local_6c._0_2_ =
           *(undefined2 *)
            (*(long *)(param_1 + 0x2f50) +
            (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar6 + 0x18) * 0xc);
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      local_6c = CONCAT22(local_6c._2_2_,uVar2);
      GsBitStream::writeBits(param_2,(uchar *)&local_6c,0x10,true);
      uVar9 = uVar9 + 4;
      lVar5 = lVar5 + 0x20;
    } while (((ulong)(lVar7 - lVar4) >> 5 & 0xffffffff) * 4 - uVar9 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


