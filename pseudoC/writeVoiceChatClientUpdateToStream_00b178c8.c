// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeVoiceChatClientUpdateToStream
// Entry Point: 00b178c8
// Size: 716 bytes
// Signature: undefined __thiscall writeVoiceChatClientUpdateToStream(VoiceChatManager * this, GsBitStream * param_1, uint param_2)


/* VoiceChatManager::writeVoiceChatClientUpdateToStream(GsBitStream*, unsigned int) */

void __thiscall
VoiceChatManager::writeVoiceChatClientUpdateToStream
          (VoiceChatManager *this,GsBitStream *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = CONCAT22(local_80._2_2_,
                      (short)((uint)(*(int *)(this + 0x1520) - *(int *)(this + 0x1518)) >> 3) *
                      -0x5555 + (short)((uint)(*(int *)(this + 0x14f0) - *(int *)(this + 0x14e8)) >>
                                       3));
  GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
  lVar2 = *(long *)(this + 0x1518);
  if (lVar2 != *(long *)(this + 0x1520)) {
    uVar6 = 0;
    do {
      if (*(int *)(lVar2 + uVar6 * 0x18) == 2) {
        lVar2 = *(long *)(lVar2 + uVar6 * 0x18 + 0x10);
        local_80 = CONCAT31(local_80._1_3_,2);
        GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
        local_80 = CONCAT22(local_80._2_2_,*(undefined2 *)(lVar2 + 2));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
        local_80 = CONCAT31(local_80._1_3_,*(undefined *)(lVar2 + 0x20));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,1,true);
        local_80 = CONCAT22(local_80._2_2_,*(undefined2 *)(lVar2 + 4));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
        if (*(ushort *)(lVar2 + 4) != 0) {
          GsBitStream::writeAlignedBytes
                    (param_1,*(uchar **)(lVar2 + 8),(uint)*(ushort *)(lVar2 + 4));
        }
      }
      *(uint *)(*(long *)(this + 0x1518) + uVar6 * 0x18 + 4) = param_2;
      FUN_00b165dc(this + 0x1500);
      uVar6 = (ulong)((int)uVar6 + 1);
      lVar2 = *(long *)(this + 0x1518);
      uVar3 = (*(long *)(this + 0x1520) - lVar2 >> 3) * -0x5555555555555555;
    } while (uVar6 <= uVar3 && uVar3 - uVar6 != 0);
    *(long *)(this + 0x1520) = lVar2;
  }
  lVar2 = *(long *)(this + 0x14f0);
  lVar4 = *(long *)(this + 0x14e8);
  if (lVar2 != lVar4) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(lVar4 + uVar6 * 8);
      uVar3 = *(ulong *)(lVar5 + 0x10);
      if ((uVar3 & 1) == 0) {
        local_80 = CONCAT31(local_80._1_3_,2);
        *(ulong *)(lVar5 + 0x10) = uVar3 | 1;
        GsBitStream::writeBits(param_1,(uchar *)&local_80,8,true);
        lVar2 = uVar6 * 8;
        local_80 = CONCAT22(local_80._2_2_,
                            *(undefined2 *)(*(long *)(*(long *)(this + 0x14e8) + lVar2) + 2));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
        local_80 = CONCAT31(local_80._1_3_,
                            *(undefined *)(*(long *)(*(long *)(this + 0x14e8) + lVar2) + 0x20));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,1,true);
        local_80 = CONCAT22(local_80._2_2_,
                            *(undefined2 *)(*(long *)(*(long *)(this + 0x14e8) + lVar2) + 4));
        GsBitStream::writeBits(param_1,(uchar *)&local_80,0x10,true);
        lVar2 = *(long *)(*(long *)(this + 0x14e8) + lVar2);
        if (*(ushort *)(lVar2 + 4) != 0) {
          GsBitStream::writeAlignedBytes
                    (param_1,*(uchar **)(lVar2 + 8),(uint)*(ushort *)(lVar2 + 4));
          lVar2 = *(long *)(*(long *)(this + 0x14e8) + uVar6 * 8);
        }
        uStack_78 = 0;
        local_80 = 2;
        local_7c = param_2;
        local_70 = lVar2;
        FUN_00b165dc(this + 0x1500,&local_80);
        lVar2 = *(long *)(this + 0x14f0);
        lVar4 = *(long *)(this + 0x14e8);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(lVar2 - lVar4 >> 3));
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


