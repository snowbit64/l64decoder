// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00b1f2d4
// Size: 200 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>&> * this)


/* std::__ndk1::__split_buffer<DeviceMappingManager::ProductName,
   std::__ndk1::allocator<DeviceMappingManager::ProductName>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>&>
::~__split_buffer(__split_buffer<DeviceMappingManager::ProductName,std::__ndk1::allocator<DeviceMappingManager::ProductName>&>
                  *this)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar4 = lVar2, lVar4 != lVar1) {
    while( true ) {
      pbVar5 = *(byte **)(lVar4 + -0x18);
      *(long *)(this + 0x10) = lVar4 + -0x20;
      lVar2 = lVar4 + -0x20;
      if (pbVar5 == (byte *)0x0) break;
      pbVar3 = *(byte **)(lVar4 + -0x10);
      pbVar6 = pbVar5;
      if (pbVar3 != pbVar5) {
        do {
          pbVar6 = pbVar3 + -0x18;
          if ((*pbVar6 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
          pbVar3 = pbVar6;
        } while (pbVar6 != pbVar5);
        pbVar6 = *(byte **)(lVar4 + -0x18);
      }
      *(byte **)(lVar4 + -0x10) = pbVar5;
      operator_delete(pbVar6);
      lVar4 = *(long *)(this + 0x10);
      if (lVar4 == lVar1) goto LAB_00b1f36c;
    }
  }
LAB_00b1f36c:
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


