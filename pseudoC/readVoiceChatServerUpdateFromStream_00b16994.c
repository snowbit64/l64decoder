// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readVoiceChatServerUpdateFromStream
// Entry Point: 00b16994
// Size: 868 bytes
// Signature: undefined __cdecl readVoiceChatServerUpdateFromStream(GsBitStream * param_1, float param_2, uint param_3)


/* VoiceChatManager::readVoiceChatServerUpdateFromStream(GsBitStream*, float, unsigned int) */

void VoiceChatManager::readVoiceChatServerUpdateFromStream
               (GsBitStream *param_1,float param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uchar *puVar6;
  uchar *puVar7;
  GsBitStream *this;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  byte local_b4 [4];
  byte local_b0 [4];
  byte local_ac [4];
  uchar local_a8 [4];
  short local_a4 [2];
  undefined2 local_a0;
  undefined4 local_9e;
  uchar *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined local_80;
  long local_78;
  
  this = (GsBitStream *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_a4[0] = 0;
  GsBitStream::readBits(this,(uchar *)local_a4,0x10,true);
  iVar4 = GsBitStream::getNumUnreadBits();
  if ((iVar4 != 0) && (local_a4[0] != 0)) {
    while (uVar5 = GsBitStream::readBits(this,local_a8,8,true), (uVar5 & 1) != 0) {
      if (local_a8[0] == '\x02') {
        local_a0 = local_a0 & 0xff00;
        local_9e = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_98 = (uchar *)0x0;
        local_80 = 0;
                    /* try { // try from 00b16bb8 to 00b16c37 has its CatchHandler @ 00b16cf8 */
        GsBitStream::readBits(this,local_ac,8,true);
        local_80 = (char)local_ac[0] < '\0';
        bVar8 = local_ac[0];
        if ((bool)local_80) {
          bVar8 = local_ac[0] & 0x7f;
        }
        local_a0 = CONCAT11(local_a0._1_1_,bVar8);
        GsBitStream::readBits(this,(uchar *)((ulong)&local_a0 | 2),0x10,true);
        GsBitStream::readBits(this,(uchar *)((ulong)&local_a0 | 4),0x10,true);
        uVar3 = local_9e._2_2_;
        if ((ulong)local_9e._2_2_ == 0) {
          local_98 = (uchar *)0x0;
        }
        else {
          local_98 = (uchar *)operator_new__((ulong)local_9e._2_2_);
          GsBitStream::readAlignedBytes(this,local_98,(uint)uVar3);
        }
        lVar9 = *(long *)(param_1 + 0x1490);
        if (lVar9 != *(long *)(param_1 + 0x1498)) {
          do {
            if (*(char *)(lVar9 + 0x6c) == (byte)local_a0) {
              *(undefined *)(lVar9 + 0x6e) = local_80;
              break;
            }
            lVar9 = lVar9 + 0x70;
          } while (lVar9 != *(long *)(param_1 + 0x1498));
        }
                    /* try { // try from 00b16c84 to 00b16c93 has its CatchHandler @ 00b16cf8 */
        writeRemoteAudio((VoiceChatManager *)param_1,(AudioData *)&local_a0,param_2);
        if (local_98 != (uchar *)0x0) {
          operator_delete__(local_98);
        }
      }
      else if (local_a8[0] == '\x01') {
        GsBitStream::readBits(this,(uchar *)&local_a0,8,true);
        bVar8 = (byte)local_a0 & 0x7f;
        lVar9 = *(long *)(param_1 + 0x1498) - *(long *)(param_1 + 0x1490);
        local_a0 = local_a0 & 0xff7f;
        if (lVar9 != 0) {
          uVar5 = 0;
          uVar10 = (lVar9 >> 4) * 0x6db6db6db6db6db7;
          do {
            if (*(byte *)(*(long *)(param_1 + 0x1490) + uVar5 * 0x70 + 0x6c) == bVar8) {
              deleteConnection((VoiceChatManager *)param_1,(int)uVar5);
              break;
            }
            uVar5 = (ulong)((int)uVar5 + 1);
          } while (uVar5 <= uVar10 && uVar10 - uVar5 != 0);
        }
      }
      else if (local_a8[0] == '\0') {
        GsBitStream::readBits(this,local_ac,8,true);
        bVar2 = local_ac[0];
        local_ac[0] = local_ac[0] & 0x7f;
        GsBitStream::readBits(this,local_b0,8,true);
        bVar8 = local_b0[0];
        puVar6 = (uchar *)operator_new__((ulong)local_b0[0] + 1);
        GsBitStream::readAlignedBytes(this,puVar6,(uint)bVar8);
        puVar6[local_b0[0]] = '\0';
        GsBitStream::readBits(this,local_b4,8,true);
        bVar8 = local_b4[0];
        puVar7 = (uchar *)operator_new__((ulong)local_b4[0] + 1);
        GsBitStream::readAlignedBytes(this,puVar7,(uint)bVar8);
        puVar7[local_b4[0]] = '\0';
        GsBitStream::readBits(this,(uchar *)&local_a0,0x10,true);
        createConnection((VoiceChatManager *)param_1,0,(char *)puVar6,(char *)puVar7,(uint)local_a0,
                         local_ac[0],(bool)(bVar2 >> 7));
        operator_delete__(puVar7);
        operator_delete__(puVar6);
        if (local_ac[0] == 0) {
          synchronizeUnavailability((VoiceChatManager *)param_1,(bool)param_1[0x30]);
        }
      }
      local_a4[0] = local_a4[0] + -1;
      iVar4 = GsBitStream::getNumUnreadBits();
      if ((iVar4 == 0) || (local_a4[0] == 0)) break;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


