// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seekImpl
// Entry Point: 00c7249c
// Size: 1252 bytes
// Signature: undefined __thiscall seekImpl(TheoraVideoDecoder * this, float param_1)


/* TheoraVideoDecoder::seekImpl(float) */

void __thiscall TheoraVideoDecoder::seekImpl(TheoraVideoDecoder *this,float param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void **ppvVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  TheoraVideoDecoder **ppTVar11;
  TheoraVideoDecoder *pTVar12;
  Thread *pTVar13;
  void **ppvVar14;
  void **ppvVar15;
  void *pvVar16;
  void **ppvVar17;
  void **ppvVar18;
  long lVar19;
  TheoraVideoDecoder **ppTVar20;
  ogg_packet aoStack_a8 [32];
  undefined8 local_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  Thread::cancel();
  Thread::cancel();
  Semaphore::post();
  Semaphore::post();
  pTVar13 = *(Thread **)(this + 0x58);
  if (pTVar13 != (Thread *)0x0) {
    Thread::~Thread(pTVar13);
    operator_delete(pTVar13);
  }
  pTVar13 = *(Thread **)(this + 0x70);
  *(undefined8 *)(this + 0x58) = 0;
  if (pTVar13 != (Thread *)0x0) {
    Thread::~Thread(pTVar13);
    operator_delete(pTVar13);
  }
  ppvVar17 = (void **)(this + 200);
  *(undefined8 *)(this + 0x70) = 0;
  do {
    ppvVar18 = ppvVar17;
    ppvVar14 = (void **)*ppvVar17;
    if ((void **)*ppvVar17 == (void **)0x0) {
      ppvVar18 = *(void ***)(this + 0xc0);
      do {
        ppvVar14 = (void **)*ppvVar18;
        ppvVar7 = (void **)FUN_00f275d0(ppvVar14,0,ppvVar18);
      } while (ppvVar14 != ppvVar7);
      *ppvVar17 = ppvVar14;
      ppvVar18 = ppvVar17;
      if (ppvVar14 == (void **)0x0) break;
    }
    do {
      ppvVar15 = ppvVar14;
      ppvVar7 = ppvVar18;
      ppvVar14 = (void **)ppvVar15[1];
      ppvVar18 = ppvVar15 + 1;
    } while (ppvVar14 != (void **)0x0);
    *ppvVar7 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(this + 0xc0) + 8);
    if (*ppvVar15 != (void *)0x0) {
      operator_delete__(*ppvVar15);
    }
    operator_delete(ppvVar15);
  } while( true );
  ppvVar17 = (void **)(this + 0xa8);
  do {
    ppvVar18 = ppvVar17;
    ppvVar14 = (void **)*ppvVar17;
    if ((void **)*ppvVar17 == (void **)0x0) {
      ppvVar18 = *(void ***)(this + 0xa0);
      do {
        ppvVar14 = (void **)*ppvVar18;
        ppvVar7 = (void **)FUN_00f275d0(ppvVar14,0,ppvVar18);
      } while (ppvVar14 != ppvVar7);
      *ppvVar17 = ppvVar14;
      ppvVar18 = ppvVar17;
      if (ppvVar14 == (void **)0x0) break;
    }
    do {
      ppvVar15 = ppvVar14;
      ppvVar7 = ppvVar18;
      ppvVar14 = (void **)ppvVar15[1];
      ppvVar18 = ppvVar15 + 1;
    } while (ppvVar14 != (void **)0x0);
    *ppvVar7 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(this + 0xa0) + 8);
    if (*ppvVar15 != (void *)0x0) {
      operator_delete__(*ppvVar15);
    }
    operator_delete(ppvVar15);
  } while( true );
  ppvVar17 = (void **)(this + 0xe8);
  pvVar16 = *ppvVar17;
  do {
    ppvVar18 = ppvVar17;
    if (pvVar16 == (void *)0x0) {
      ppvVar18 = *(void ***)(this + 0xe0);
      do {
        pvVar16 = *ppvVar18;
        pvVar8 = (void *)FUN_00f275d0(pvVar16,0,ppvVar18);
      } while (pvVar16 != pvVar8);
      *ppvVar17 = pvVar16;
      ppvVar18 = ppvVar17;
      if (pvVar16 == (void *)0x0) break;
    }
    do {
      pvVar8 = pvVar16;
      ppvVar14 = ppvVar18;
      ppvVar18 = (void **)((long)pvVar8 + 0x10008);
      pvVar16 = *ppvVar18;
    } while (pvVar16 != (void *)0x0);
    *ppvVar14 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(this + 0xe0) + 8);
    operator_delete(pvVar8);
    pvVar16 = *ppvVar17;
  } while( true );
  ppvVar17 = *(void ***)(this + 0x88);
  if (ppvVar17 != (void **)0x0) {
    if (*ppvVar17 != (void *)0x0) {
      operator_delete__(*ppvVar17);
    }
    operator_delete(ppvVar17);
  }
  *(undefined8 *)(this + 0x88) = 0;
  lVar9 = (**(code **)(**(long **)this + 0x48))();
  uVar1 = (int)((float)lVar9 * param_1) & 0xfffff000;
  (**(code **)(**(long **)this + 0x38))(*(long **)this,uVar1);
  iVar5 = 0;
  do {
    pvVar16 = operator_new(0x10010);
    iVar4 = (**(code **)(**(long **)this + 0x28))(*(long **)this,pvVar16,0x10000);
    if (iVar4 < 0) {
      operator_delete(pvVar16);
    }
    else {
      *(int *)((long)pvVar16 + 0x10000) = iVar4;
      do {
        lVar19 = *(long *)(this + 0xd0);
        *(long *)((long)pvVar16 + 0x10008) = lVar19;
        lVar9 = FUN_00f275d0(lVar19,pvVar16);
      } while (lVar19 != lVar9);
      FUN_00f27700(1,this + 0xd8);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x20);
  ogg_sync_reset(this + 8);
  ppTVar20 = *(TheoraVideoDecoder ***)(this + 0x28);
  while (ppTVar20 != (TheoraVideoDecoder **)(this + 0x30)) {
    ogg_stream_reset(ppTVar20[5]);
    ppTVar11 = (TheoraVideoDecoder **)ppTVar20[1];
    if ((TheoraVideoDecoder **)ppTVar20[1] == (TheoraVideoDecoder **)0x0) {
      ppTVar11 = ppTVar20 + 2;
      bVar3 = *(TheoraVideoDecoder ***)*ppTVar11 != ppTVar20;
      ppTVar20 = (TheoraVideoDecoder **)*ppTVar11;
      if (bVar3) {
        do {
          pTVar12 = *ppTVar11;
          ppTVar11 = (TheoraVideoDecoder **)(pTVar12 + 0x10);
          ppTVar20 = (TheoraVideoDecoder **)*ppTVar11;
        } while (*ppTVar20 != pTVar12);
      }
    }
    else {
      do {
        ppTVar20 = ppTVar11;
        ppTVar11 = (TheoraVideoDecoder **)*ppTVar20;
      } while ((TheoraVideoDecoder **)*ppTVar20 != (TheoraVideoDecoder **)0x0);
    }
  }
  ppvVar17 = *(void ***)(this + 0x120);
  if (ppvVar17 != (void **)0x0) {
    if (*ppvVar17 != (void *)0x0) {
      operator_delete__(*ppvVar17);
    }
    operator_delete(ppvVar17);
  }
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  if (uVar1 != 0) {
    *(undefined *)(*(long *)(this + 0x48) + 0x3b8) = 0;
    do {
      uVar10 = getPacket(this,*(Stream **)(this + 0x40),aoStack_a8);
      if ((uVar10 & 1) == 0) break;
      iVar5 = th_packet_iskeyframe(aoStack_a8);
      th_decode_packetin(*(undefined8 *)(*(long *)(this + 0x40) + 0x208),aoStack_a8,0);
    } while (iVar5 < 1);
    *(undefined *)(*(long *)(this + 0x48) + 0x3b8) = 1;
    uVar6 = th_granule_frame(*(undefined8 *)(*(long *)(this + 0x40) + 0x208),local_88);
    *(undefined4 *)(this + 0x118) = uVar6;
  }
  pTVar13 = (Thread *)operator_new(0x48);
                    /* try { // try from 00c72890 to 00c72893 has its CatchHandler @ 00c72984 */
  Thread::Thread(pTVar13);
  *(Thread **)(this + 0x70) = pTVar13;
  Thread::start(pTVar13,staticStreamerThread,this,0xffffffff,"Theora streamer thread",2,0x4000);
  pTVar13 = (Thread *)operator_new(0x48);
                    /* try { // try from 00c728cc to 00c728cf has its CatchHandler @ 00c72980 */
  Thread::Thread(pTVar13);
  *(Thread **)(this + 0x58) = pTVar13;
  Thread::start(pTVar13,staticDecoderThread,this,0xffffffff,"Theora decoder thread",2,0x20000);
  Semaphore::post();
  Semaphore::post();
  Semaphore::post();
  Semaphore::post();
  while (*(int *)(this + 0xb8) != 4) {
    ThreadUtil::usleep(1000);
  }
  while (*(int *)(this + 0x98) != 2) {
    ThreadUtil::usleep(1000);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


