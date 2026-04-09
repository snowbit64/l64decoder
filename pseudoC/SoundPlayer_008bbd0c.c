// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoundPlayer
// Entry Point: 008bbd0c
// Size: 652 bytes
// Signature: undefined __thiscall ~SoundPlayer(SoundPlayer * this)


/* WARNING: Type propagation algorithm not settling */
/* SoundPlayer::~SoundPlayer() */

void __thiscall SoundPlayer::~SoundPlayer(SoundPlayer *this)

{
  long lVar1;
  void **ppvVar2;
  SoundPlayer SVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  Thread *this_00;
  ulong uVar9;
  void **ppvVar10;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  void **ppvVar11;
  
  *(undefined ***)this = &PTR__SoundPlayer_00fddca8;
                    /* try { // try from 008bbd38 to 008bbd4f has its CatchHandler @ 008bbf98 */
  Thread::cancel();
  Event::post();
  Thread::join();
  this_00 = *(Thread **)(this + 0xe0);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  lVar8 = *(long *)(this + 0xe8);
  lVar6 = *(long *)(this + 0xf0);
  if ((int)((ulong)(lVar6 - lVar8) >> 3) != 0) {
    uVar9 = 0;
    do {
      plVar4 = *(long **)(lVar8 + uVar9 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
        lVar8 = *(long *)(this + 0xe8);
        lVar6 = *(long *)(this + 0xf0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < ((ulong)(lVar6 - lVar8) >> 3 & 0xffffffff));
  }
  lVar6 = *(long *)(this + 0x28);
  for (lVar8 = *(long *)(this + 0x20); lVar8 != lVar6; lVar8 = lVar8 + 0x48) {
    lVar1 = *(long *)(lVar8 + 0x20);
    for (lVar14 = *(long *)(lVar8 + 0x18); lVar14 != lVar1; lVar14 = lVar14 + 0x68) {
      if (*(long **)(lVar14 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar14 + 0x18) + 8))();
      }
    }
  }
  Event::~Event((Event *)(this + 400));
  Mutex::~Mutex((Mutex *)(this + 0x168));
  std::__ndk1::
  __deque_base<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>::
  clear();
  ppvVar2 = *(void ***)(this + 0x148);
  ppvVar10 = *(void ***)(this + 0x140);
  if (*(void ***)(this + 0x140) != ppvVar2) {
    do {
      ppvVar11 = ppvVar10 + 1;
      operator_delete(*ppvVar10);
      ppvVar10 = ppvVar11;
    } while (ppvVar11 != ppvVar2);
    lVar8 = *(long *)(this + 0x148) - *(long *)(this + 0x140);
    if (lVar8 != 0) {
      *(ulong *)(this + 0x148) =
           *(long *)(this + 0x148) + (lVar8 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x138) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x138));
  }
  Mutex::~Mutex((Mutex *)(this + 0x110));
  pvVar5 = *(void **)(this + 0xe8);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0xc0);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 200) = pvVar5;
    operator_delete(pvVar5);
  }
  if (((byte)this[0xa0] & 1) == 0) {
    SVar3 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    SVar3 = this[0x88];
  }
  if (((byte)SVar3 & 1) == 0) {
    SVar3 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    SVar3 = this[0x70];
  }
  if (((byte)SVar3 & 1) == 0) {
    SVar3 = this[0x58];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    SVar3 = this[0x58];
  }
  if (((byte)SVar3 & 1) == 0) {
    SVar3 = this[0x40];
  }
  else {
    operator_delete(*(void **)(this + 0x68));
    SVar3 = this[0x40];
  }
  if (((byte)SVar3 & 1) == 0) {
    pvVar5 = *(void **)(this + 0x20);
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    pvVar5 = *(void **)(this + 0x20);
  }
  if (pvVar5 != (void *)0x0) {
    pvVar13 = pvVar5;
    pvVar12 = *(void **)(this + 0x28);
    if (*(void **)(this + 0x28) != pvVar5) {
      do {
        pbVar15 = *(byte **)((long)pvVar12 + -0x30);
        pvVar13 = (void *)((long)pvVar12 + -0x48);
        if (pbVar15 != (byte *)0x0) {
          pbVar7 = *(byte **)((long)pvVar12 + -0x28);
          pbVar16 = pbVar15;
          if (pbVar7 != pbVar15) {
            do {
              pbVar16 = pbVar7 + -0x68;
              if ((*pbVar16 & 1) != 0) {
                operator_delete(*(void **)(pbVar7 + -0x58));
              }
              pbVar7 = pbVar16;
            } while (pbVar16 != pbVar15);
            pbVar16 = *(byte **)((long)pvVar12 + -0x30);
          }
          *(byte **)((long)pvVar12 + -0x28) = pbVar15;
          operator_delete(pbVar16);
        }
        pvVar12 = pvVar13;
      } while (pvVar13 != pvVar5);
      pvVar13 = *(void **)(this + 0x20);
    }
    *(void **)(this + 0x28) = pvVar5;
    operator_delete(pvVar13);
  }
  Entity::~Entity((Entity *)this);
  return;
}


