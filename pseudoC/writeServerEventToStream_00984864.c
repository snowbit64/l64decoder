// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeServerEventToStream
// Entry Point: 00984864
// Size: 1040 bytes
// Signature: undefined __cdecl writeServerEventToStream(GsBitStream * param_1, uint param_2)


/* MeshSplitManager::writeServerEventToStream(GsBitStream*, unsigned int) */

void MeshSplitManager::writeServerEventToStream(GsBitStream *param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  Brep **ppBVar3;
  undefined2 uVar4;
  long lVar5;
  GsBitStream *this;
  uint uVar6;
  long lVar7;
  Brep **ppBVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  long local_88;
  
  this = (GsBitStream *)(ulong)param_2;
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  Mutex::enterCriticalSection();
  uVar2 = (uint)((ulong)(*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150)) >> 4);
  if ((*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) & 0xfffffffc0U) != 0) {
    uVar2 = 4;
  }
  uVar6 = (uint)((ulong)(*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168)) >> 3);
  if ((*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) & 0x7ffffffe0U) != 0) {
    uVar6 = 4;
  }
  local_98._0_1_ = (char)uVar2;
  GsBitStream::writeBits(this,(uchar *)&local_98,8,true);
  local_98 = CONCAT31(local_98._1_3_,(char)uVar6);
  GsBitStream::writeBits(this,(uchar *)&local_98,8,true);
  if (uVar2 != 0) {
    uVar13 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x150);
      lVar11 = *(long *)(lVar7 + uVar13 * 0x10);
      if (lVar11 == 0) {
        local_98 = 0xffffffff;
        GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
        lVar7 = lVar7 + uVar13 * 0x10;
        puVar9 = (uint *)(lVar7 + 0xc);
        local_98 = *(uint *)(lVar7 + 8);
        if (*puVar9 != 0xffffffff) {
          local_98 = local_98 | 0x80000000;
          GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
          local_98 = *puVar9;
        }
        GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
      }
      else {
        local_98 = *(undefined4 *)(lVar11 + 0x208);
        lVar7 = *(long *)(lVar11 + 0x170);
        GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
        local_98 = *(undefined4 *)(lVar11 + 0x214);
        GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
        local_98 = *(undefined4 *)(lVar11 + 0x20c);
        GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
        local_98 = CONCAT22(local_98._2_2_,
                            (short)((uint)(*(int *)(lVar7 + 0x180) - *(int *)(lVar7 + 0x178)) >> 3))
        ;
        GsBitStream::writeBits(this,(uchar *)&local_98,0x10,true);
        RawTransformGroup::updateWorldTransformation();
        uVar14 = *(undefined4 *)(lVar11 + 0xe8);
        uVar15 = *(undefined4 *)(lVar11 + 0xec);
        uVar16 = *(undefined4 *)(lVar11 + 0xf0);
        Matrix4x4::getEulerAnglesXYZ((Matrix4x4 *)(lVar11 + 0xb8),(Vector3 *)&local_98);
        local_9c = uVar14;
        GsBitStream::writeBits(this,(uchar *)&local_9c,0x20,true);
        local_9c = uVar15;
        GsBitStream::writeBits(this,(uchar *)&local_9c,0x20,true);
        local_9c = uVar16;
        GsBitStream::writeBits(this,(uchar *)&local_9c,0x20,true);
        local_9c = local_98;
        GsBitStream::writeBits(this,(uchar *)&local_9c,0x20,true);
        local_9c = local_94;
        GsBitStream::writeBits(this,(uchar *)&local_9c,0x20,true);
        local_9c = local_90;
        GsBitStream::writeBits(this,(uchar *)&local_9c,0x20,true);
        if ((((int)((ulong)(*(long *)(lVar11 + 0x30) - (long)*(long **)(lVar11 + 0x28)) >> 3) == 0)
            || (lVar11 = **(long **)(lVar11 + 0x28), (*(byte *)(lVar11 + 0x11) >> 3 & 1) == 0)) ||
           (lVar11 = *(long *)(lVar11 + 0x170), (*(byte *)(lVar11 + 0x31) >> 1 & 1) == 0)) {
          local_9c = (uint)local_9c._2_2_ << 0x10;
          GsBitStream::writeBits(this,(uchar *)&local_9c,0x10,true);
        }
        else {
          uVar10 = *(long *)(lVar11 + 0x98) - *(long *)(lVar11 + 0x90) >> 2;
          local_9c = CONCAT22(local_9c._2_2_,(short)uVar10);
          GsBitStream::writeBits(this,(uchar *)&local_9c,0x10,true);
          if ((uVar10 & 0xffff) != 0) {
            lVar12 = 0;
            do {
              puVar1 = (undefined2 *)(*(long *)(lVar11 + 0x90) + lVar12);
              uVar4 = puVar1[1];
              local_9c._0_2_ = *puVar1;
              GsBitStream::writeBits(this,(uchar *)&local_9c,0x10,true);
              local_9c = CONCAT22(local_9c._2_2_,uVar4);
              GsBitStream::writeBits(this,(uchar *)&local_9c,0x10,true);
              lVar12 = lVar12 + 4;
            } while ((ulong)((uint)uVar10 & 0xffff) * 4 - lVar12 != 0);
          }
        }
        BrepUtil::writeBrepToStream(*(Brep **)(lVar7 + 0x170),this);
        ppBVar3 = *(Brep ***)(lVar7 + 0x180);
        for (ppBVar8 = *(Brep ***)(lVar7 + 0x178); ppBVar8 != ppBVar3; ppBVar8 = ppBVar8 + 1) {
          BrepUtil::writeBrepToStream(*ppBVar8,this);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  if (uVar6 != 0) {
    lVar7 = 0;
    do {
      lVar11 = *(long *)(param_1 + 0x168);
      local_98 = *(undefined4 *)(lVar11 + lVar7);
      GsBitStream::writeBits(this,(uchar *)&local_98,0x20,true);
      local_98 = CONCAT22(local_98._2_2_,*(undefined2 *)((undefined4 *)(lVar11 + lVar7) + 1));
      GsBitStream::writeBits(this,(uchar *)&local_98,0x10,true);
      lVar7 = lVar7 + 8;
    } while ((ulong)uVar6 * 8 - lVar7 != 0);
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


