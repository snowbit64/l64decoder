// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00afd940
// Size: 88 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>&> * this)


/* std::__ndk1::__split_buffer<GiantsNotificationManager::Notification,
   std::__ndk1::allocator<GiantsNotificationManager::Notification>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>&>
::~__split_buffer(__split_buffer<GiantsNotificationManager::Notification,std::__ndk1::allocator<GiantsNotificationManager::Notification>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0x90;
    FUN_00afd540(*(undefined8 *)(this + 0x20));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


