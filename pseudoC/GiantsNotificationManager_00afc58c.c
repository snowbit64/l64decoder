// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GiantsNotificationManager
// Entry Point: 00afc58c
// Size: 292 bytes
// Signature: undefined __thiscall ~GiantsNotificationManager(GiantsNotificationManager * this)


/* WARNING: Type propagation algorithm not settling */
/* GiantsNotificationManager::~GiantsNotificationManager() */

void __thiscall
GiantsNotificationManager::~GiantsNotificationManager(GiantsNotificationManager *this)

{
  GiantsNotificationManager GVar1;
  void *pvVar2;
  Thread *this_00;
  void *pvVar3;
  void *pvVar4;
  
  this_00 = *(Thread **)(this + 0xf0);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  if (((byte)this[0xd0] & 1) == 0) {
    GVar1 = this[0xb8];
  }
  else {
    operator_delete(*(void **)(this + 0xe0));
    GVar1 = this[0xb8];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 200));
    GVar1 = this[0xa0];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    GVar1 = this[0x88];
  }
  if (((byte)GVar1 & 1) == 0) {
    GVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    GVar1 = this[0x70];
  }
  if (((byte)GVar1 & 1) == 0) {
    pvVar4 = *(void **)(this + 0x40);
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    pvVar4 = *(void **)(this + 0x40);
  }
  if (pvVar4 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x48);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x90);
        FUN_00afd540(this + 0x50,pvVar3);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(this + 0x40);
    }
    *(void **)(this + 0x48) = pvVar4;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


