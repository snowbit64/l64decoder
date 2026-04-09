// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 00877804
// Size: 84 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>&> * this)


/* std::__ndk1::__split_buffer<ObstacleWallDetector,
   std::__ndk1::allocator<ObstacleWallDetector>&>::~__split_buffer() */

void __thiscall
std::__ndk1::__split_buffer<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>&>::
~__split_buffer(__split_buffer<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>&>
                *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(ObstacleWallDetector **)(this + 0x10) = (ObstacleWallDetector *)(lVar2 + -0x3b0);
    ObstacleWallDetector::~ObstacleWallDetector((ObstacleWallDetector *)(lVar2 + -0x3b0));
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


