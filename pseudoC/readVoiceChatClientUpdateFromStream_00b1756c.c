// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readVoiceChatClientUpdateFromStream
// Entry Point: 00b1756c
// Size: 860 bytes
// Signature: undefined __cdecl readVoiceChatClientUpdateFromStream(GsBitStream * param_1, float param_2, uint param_3, uint param_4)


/* VoiceChatManager::readVoiceChatClientUpdateFromStream(GsBitStream*, float, unsigned int, unsigned
   int) */

void VoiceChatManager::readVoiceChatClientUpdateFromStream
               (GsBitStream *param_1,float param_2,uint param_3,uint param_4)

{
  GsBitStream **ppGVar1;
  GsBitStream GVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  AudioData *pAVar9;
  uchar *puVar10;
  void *__dest;
  GsBitStream *this;
  AudioData AVar11;
  long lVar12;
  AudioData **ppAVar13;
  long lVar14;
  GsBitStream **ppGVar15;
  GsBitStream **ppGVar16;
  AudioData *pAVar17;
  void *__src;
  ulong __n;
  uchar **ppuVar18;
  uchar local_80 [4];
  short local_7c [2];
  long local_78;
  
  this = (GsBitStream *)(ulong)param_3;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_7c[0] = 0;
  GsBitStream::readBits(this,(uchar *)local_7c,0x10,true);
  iVar7 = GsBitStream::getNumUnreadBits();
  if ((iVar7 != 0) && (local_7c[0] != 0)) {
    ppGVar1 = (GsBitStream **)(param_1 + 0x40);
    while (uVar8 = GsBitStream::readBits(this,local_80,8,true), (uVar8 & 1) != 0) {
      if (local_80[0] == '\x02') {
        pAVar9 = (AudioData *)operator_new(0x28);
        lVar12 = *(long *)(param_1 + 0x1490);
        lVar14 = *(long *)(param_1 + 0x1498);
        *pAVar9 = (AudioData)0x0;
        *(undefined8 *)(pAVar9 + 0x10) = 0;
        *(undefined8 *)(pAVar9 + 0x18) = 0;
        pAVar9[0x20] = (AudioData)0x0;
        *(undefined4 *)(pAVar9 + 2) = 0;
        ppuVar18 = (uchar **)(pAVar9 + 8);
        *ppuVar18 = (uchar *)0x0;
        for (; lVar12 != lVar14; lVar12 = lVar12 + 0x70) {
          if (*(uint *)(lVar12 + 0x4c) == param_4) {
            AVar11 = *(AudioData *)(lVar12 + 0x6c);
            goto LAB_00b17678;
          }
        }
        AVar11 = (AudioData)0x0;
LAB_00b17678:
        *pAVar9 = AVar11;
        GsBitStream::readBits(this,(uchar *)(pAVar9 + 2),0x10,true);
        pAVar17 = pAVar9 + 0x20;
        *pAVar17 = (AudioData)0x0;
        GsBitStream::readBits(this,(uchar *)pAVar17,1,true);
        GsBitStream::readBits(this,(uchar *)(pAVar9 + 4),0x10,true);
        uVar3 = *(ushort *)(pAVar9 + 4);
        if ((ulong)uVar3 == 0) {
          *ppuVar18 = (uchar *)0x0;
        }
        else {
          puVar10 = (uchar *)operator_new__((ulong)uVar3);
          *ppuVar18 = puVar10;
          GsBitStream::readAlignedBytes(this,puVar10,(uint)uVar3);
        }
        AVar11 = *pAVar9;
        for (lVar12 = *(long *)(param_1 + 0x1490); lVar12 != *(long *)(param_1 + 0x1498);
            lVar12 = lVar12 + 0x70) {
          if (*(AudioData *)(lVar12 + 0x6c) == AVar11) {
            *(AudioData *)(lVar12 + 0x6e) = *pAVar17;
            break;
          }
        }
        *(ulong *)(pAVar9 + 0x10) = 1L << ((ulong)(byte)AVar11 & 0x3f) | *(ulong *)(pAVar9 + 0x10);
        uVar5 = Watch::getTimeSec();
        ppGVar15 = (GsBitStream **)*ppGVar1;
        *(undefined8 *)(pAVar9 + 0x18) = uVar5;
        if (ppGVar15 != (GsBitStream **)0x0) {
          GVar2 = *(GsBitStream *)pAVar9;
          ppGVar16 = ppGVar1;
          do {
            bVar6 = (byte)*(GsBitStream *)((long)ppGVar15 + 0x19) < (byte)GVar2;
            if (!bVar6) {
              ppGVar16 = ppGVar15;
            }
            ppGVar15 = (GsBitStream **)ppGVar15[bVar6];
          } while (ppGVar15 != (GsBitStream **)0x0);
          if ((ppGVar16 != ppGVar1) &&
             ((byte)*(GsBitStream *)((long)ppGVar16 + 0x19) <= (byte)GVar2)) {
            writeRemoteAudio((VoiceChatManager *)param_1,pAVar9,param_2);
          }
        }
        Mutex::enterCriticalSection();
        ppAVar13 = *(AudioData ***)(param_1 + 0x14d8);
        if (ppAVar13 == *(AudioData ***)(param_1 + 0x14e0)) {
          __src = *(void **)(param_1 + 0x14d0);
          __n = (long)ppAVar13 - (long)__src;
          uVar8 = ((long)__n >> 3) + 1;
          if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar8 <= (ulong)((long)__n >> 2)) {
            uVar8 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar8 = 0x1fffffffffffffff;
          }
          if (uVar8 == 0) {
            __dest = (void *)0x0;
          }
          else {
            if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar8 << 3);
          }
          ppAVar13 = (AudioData **)((long)__dest + ((long)__n >> 3) * 8);
          *ppAVar13 = pAVar9;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(AudioData ***)(param_1 + 0x14d8) = ppAVar13 + 1;
          *(void **)(param_1 + 0x14d0) = __dest;
          *(void **)(param_1 + 0x14e0) = (void *)((long)__dest + uVar8 * 8);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *ppAVar13 = pAVar9;
          *(AudioData ***)(param_1 + 0x14d8) = ppAVar13 + 1;
        }
        Mutex::leaveCriticalSection();
      }
      local_7c[0] = local_7c[0] + 1;
      iVar7 = GsBitStream::getNumUnreadBits();
      if ((iVar7 == 0) || (local_7c[0] == 0)) break;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


