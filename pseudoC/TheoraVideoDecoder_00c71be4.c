// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TheoraVideoDecoder
// Entry Point: 00c71be4
// Size: 972 bytes
// Signature: undefined __thiscall ~TheoraVideoDecoder(TheoraVideoDecoder * this)


/* TheoraVideoDecoder::~TheoraVideoDecoder() */

void __thiscall TheoraVideoDecoder::~TheoraVideoDecoder(TheoraVideoDecoder *this)

{
  bool bVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *pvVar4;
  TheoraVideoDecoder **ppTVar5;
  long lVar6;
  Thread *pTVar7;
  void **ppvVar8;
  void **ppvVar9;
  void *pvVar10;
  void **ppvVar11;
  TheoraVideoDecoder *pTVar12;
  void **ppvVar13;
  TheoraVideoDecoder **ppTVar14;
  
  if (this[0xf0] != (TheoraVideoDecoder)0x0) {
                    /* try { // try from 00c71c0c to 00c71c3f has its CatchHandler @ 00c71fb0 */
    Thread::cancel();
    Semaphore::post();
    pTVar7 = *(Thread **)(this + 0x58);
    if (pTVar7 != (Thread *)0x0) {
      Thread::~Thread(pTVar7);
      operator_delete(pTVar7);
    }
    Thread::cancel();
    Semaphore::post();
    pTVar7 = *(Thread **)(this + 0x70);
    if (pTVar7 != (Thread *)0x0) {
      Thread::~Thread(pTVar7);
      operator_delete(pTVar7);
    }
  }
  ppvVar13 = (void **)(this + 200);
  do {
    ppvVar11 = ppvVar13;
    ppvVar8 = (void **)*ppvVar13;
    if ((void **)*ppvVar13 == (void **)0x0) {
      ppvVar11 = *(void ***)(this + 0xc0);
      do {
        ppvVar8 = (void **)*ppvVar11;
        ppvVar2 = (void **)FUN_00f275d0(ppvVar8,0,ppvVar11);
      } while (ppvVar8 != ppvVar2);
      *ppvVar13 = ppvVar8;
      ppvVar11 = ppvVar13;
      if (ppvVar8 == (void **)0x0) {
        ppvVar11 = (void **)(this + 0xa8);
        do {
          ppvVar8 = ppvVar11;
          ppvVar2 = (void **)*ppvVar11;
          if ((void **)*ppvVar11 == (void **)0x0) {
            ppvVar8 = *(void ***)(this + 0xa0);
            do {
              ppvVar2 = (void **)*ppvVar8;
              ppvVar3 = (void **)FUN_00f275d0(ppvVar2,0,ppvVar8);
            } while (ppvVar2 != ppvVar3);
            *ppvVar11 = ppvVar2;
            ppvVar8 = ppvVar11;
            if (ppvVar2 == (void **)0x0) {
              ppvVar8 = (void **)(this + 0xe8);
              pvVar10 = *ppvVar8;
              do {
                ppvVar2 = ppvVar8;
                if (pvVar10 == (void *)0x0) {
                  ppvVar2 = *(void ***)(this + 0xe0);
                  do {
                    pvVar10 = *ppvVar2;
                    pvVar4 = (void *)FUN_00f275d0(pvVar10,0,ppvVar2);
                  } while (pvVar10 != pvVar4);
                  *ppvVar8 = pvVar10;
                  ppvVar2 = ppvVar8;
                  if (pvVar10 == (void *)0x0) {
                    /* try { // try from 00c71dd0 to 00c71dd3 has its CatchHandler @ 00c71fb0 */
                    ogg_sync_clear(this + 8);
                    ppTVar14 = *(TheoraVideoDecoder ***)(this + 0x28);
                    while (ppTVar14 != (TheoraVideoDecoder **)(this + 0x30)) {
                      pTVar12 = ppTVar14[5];
                    /* try { // try from 00c71df4 to 00c71dfb has its CatchHandler @ 00c71fb4 */
                      ogg_stream_clear(pTVar12);
                      if (pTVar12 != (TheoraVideoDecoder *)0x0) {
                    /* try { // try from 00c71e04 to 00c71e0f has its CatchHandler @ 00c72008 */
                        th_setup_free(*(undefined8 *)(pTVar12 + 0x200));
                        th_decode_free(*(undefined8 *)(pTVar12 + 0x208));
                        operator_delete(pTVar12);
                      }
                      ppTVar5 = (TheoraVideoDecoder **)ppTVar14[1];
                      if ((TheoraVideoDecoder **)ppTVar14[1] == (TheoraVideoDecoder **)0x0) {
                        ppTVar5 = ppTVar14 + 2;
                        bVar1 = *(TheoraVideoDecoder ***)*ppTVar5 != ppTVar14;
                        ppTVar14 = (TheoraVideoDecoder **)*ppTVar5;
                        if (bVar1) {
                          do {
                            pTVar12 = *ppTVar5;
                            ppTVar5 = (TheoraVideoDecoder **)(pTVar12 + 0x10);
                            ppTVar14 = (TheoraVideoDecoder **)*ppTVar5;
                          } while (*ppTVar14 != pTVar12);
                        }
                      }
                      else {
                        do {
                          ppTVar14 = ppTVar5;
                          ppTVar5 = (TheoraVideoDecoder **)*ppTVar14;
                        } while ((TheoraVideoDecoder **)*ppTVar14 != (TheoraVideoDecoder **)0x0);
                      }
                    }
                    if (*(long **)this != (long *)0x0) {
                      (**(code **)(**(long **)this + 8))();
                    }
                    ppvVar2 = *(void ***)(this + 0x88);
                    if (ppvVar2 != (void **)0x0) {
                      if (*ppvVar2 != (void *)0x0) {
                        operator_delete__(*ppvVar2);
                      }
                      operator_delete(ppvVar2);
                    }
                    pvVar10 = *ppvVar8;
                    while (pvVar10 != (void *)0x0) {
                      *ppvVar8 = *(void **)((long)pvVar10 + 0x10008);
                      operator_delete(pvVar10);
                      pvVar10 = *ppvVar8;
                    }
                    lVar6 = *(long *)(this + 0xd0);
                    while (lVar6 != 0) {
                      pvVar10 = *(void **)(this + 0xd0);
                      *(undefined8 *)(this + 0xd0) = *(undefined8 *)((long)pvVar10 + 0x10008);
                      operator_delete(pvVar10);
                      lVar6 = *(long *)(this + 0xd0);
                    }
                    while (ppvVar8 = (void **)*ppvVar13, ppvVar8 != (void **)0x0) {
                      pvVar10 = *ppvVar8;
                      *ppvVar13 = ppvVar8[1];
                      if (pvVar10 != (void *)0x0) {
                        operator_delete__(pvVar10);
                      }
                      operator_delete(ppvVar8);
                    }
                    while (*(long *)(this + 0xb0) != 0) {
                      ppvVar13 = *(void ***)(this + 0xb0);
                      *(void **)(this + 0xb0) = ppvVar13[1];
                      if (*ppvVar13 != (void *)0x0) {
                        operator_delete__(*ppvVar13);
                      }
                      operator_delete(ppvVar13);
                    }
                    while (ppvVar13 = (void **)*ppvVar11, ppvVar13 != (void **)0x0) {
                      pvVar10 = *ppvVar13;
                      *ppvVar11 = ppvVar13[1];
                      if (pvVar10 != (void *)0x0) {
                        operator_delete__(pvVar10);
                      }
                      operator_delete(ppvVar13);
                    }
                    while (*(long *)(this + 0x90) != 0) {
                      ppvVar13 = *(void ***)(this + 0x90);
                      *(void **)(this + 0x90) = ppvVar13[1];
                      if (*ppvVar13 != (void *)0x0) {
                        operator_delete__(*ppvVar13);
                      }
                      operator_delete(ppvVar13);
                    }
                    Semaphore::~Semaphore((Semaphore *)(this + 0x78));
                    Semaphore::~Semaphore((Semaphore *)(this + 0x60));
                    std::__ndk1::
                    __tree<std::__ndk1::__value_type<int,TheoraVideoDecoder::Stream*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,TheoraVideoDecoder::Stream*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,TheoraVideoDecoder::Stream*>>>
                    ::destroy((__tree<std::__ndk1::__value_type<int,TheoraVideoDecoder::Stream*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,TheoraVideoDecoder::Stream*>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,TheoraVideoDecoder::Stream*>>>
                               *)(this + 0x28),*(__tree_node **)(this + 0x30));
                    return;
                  }
                }
                do {
                  pvVar4 = pvVar10;
                  ppvVar3 = ppvVar2;
                  ppvVar2 = (void **)((long)pvVar4 + 0x10008);
                  pvVar10 = *ppvVar2;
                } while (pvVar10 != (void *)0x0);
                *ppvVar3 = (void *)0x0;
                FUN_00f27700(0xffffffff,*(long *)(this + 0xe0) + 8);
                operator_delete(pvVar4);
                pvVar10 = *ppvVar8;
              } while( true );
            }
          }
          do {
            ppvVar9 = ppvVar2;
            ppvVar3 = ppvVar8;
            ppvVar2 = (void **)ppvVar9[1];
            ppvVar8 = ppvVar9 + 1;
          } while (ppvVar2 != (void **)0x0);
          *ppvVar3 = (void *)0x0;
          FUN_00f27700(0xffffffff,*(long *)(this + 0xa0) + 8);
          if (*ppvVar9 != (void *)0x0) {
            operator_delete__(*ppvVar9);
          }
          operator_delete(ppvVar9);
        } while( true );
      }
    }
    do {
      ppvVar3 = ppvVar8;
      ppvVar2 = ppvVar11;
      ppvVar8 = (void **)ppvVar3[1];
      ppvVar11 = ppvVar3 + 1;
    } while (ppvVar8 != (void **)0x0);
    *ppvVar2 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(this + 0xc0) + 8);
    if (*ppvVar3 != (void *)0x0) {
      operator_delete__(*ppvVar3);
    }
    operator_delete(ppvVar3);
  } while( true );
}


