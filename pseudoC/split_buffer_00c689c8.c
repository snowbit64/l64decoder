// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00c689c8
// Size: 160 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>&> * this)


/* std::__ndk1::__split_buffer<UserBlockManager::UserDetails,
   std::__ndk1::allocator<UserBlockManager::UserDetails>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>&>
::~__split_buffer(__split_buffer<UserBlockManager::UserDetails,std::__ndk1::allocator<UserBlockManager::UserDetails>&>
                  *this)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  do {
    if (lVar3 == lVar1) {
      if (*(void **)this != (void *)0x0) {
        operator_delete(*(void **)this);
        return;
      }
      return;
    }
    pbVar4 = (byte *)(lVar3 + -0x50);
    *(byte **)(this + 0x10) = pbVar4;
    if ((*(byte *)(lVar3 + -0x18) & 1) == 0) {
      if ((*(byte *)(lVar3 + -0x38) & 1) == 0) goto LAB_00c68a08;
LAB_00c68a24:
      operator_delete(*(void **)(lVar3 + -0x28));
      bVar2 = *pbVar4;
    }
    else {
      operator_delete(*(void **)(lVar3 + -8));
      if ((*(byte *)(lVar3 + -0x38) & 1) != 0) goto LAB_00c68a24;
LAB_00c68a08:
      bVar2 = *pbVar4;
    }
    if ((bVar2 & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x40));
    }
    lVar3 = *(long *)(this + 0x10);
  } while( true );
}


