// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0087ce30
// Size: 176 bytes
// Signature: undefined __thiscall init(ObstacleAvoidance * this, uint param_1, uint param_2, float param_3, float param_4)


/* ObstacleAvoidance::init(unsigned int, unsigned int, float, float) */

void __thiscall
ObstacleAvoidance::init
          (ObstacleAvoidance *this,uint param_1,uint param_2,float param_3,float param_4)

{
  void *__dest;
  void *__src;
  size_t __n;
  ulong uVar1;
  
  std::__ndk1::
  vector<ObstacleAvoidance::Obstacle,std::__ndk1::allocator<ObstacleAvoidance::Obstacle>>::reserve
            ((vector<ObstacleAvoidance::Obstacle,std::__ndk1::allocator<ObstacleAvoidance::Obstacle>>
              *)this,(ulong)param_1);
  __src = *(void **)(this + 0x18);
  if ((ulong)(*(long *)(this + 0x28) - (long)__src >> 3) < (ulong)param_2) {
    uVar1 = (ulong)param_2 * 8;
    __n = *(long *)(this + 0x20) - (long)__src;
    __dest = operator_new(uVar1);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x18) = __dest;
    *(size_t *)(this + 0x20) = (long)__dest + __n;
    *(void **)(this + 0x28) = (void *)((long)__dest + uVar1);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  *(float *)(this + 0x50) = param_3;
  *(float *)(this + 0x54) = param_4;
  return;
}


