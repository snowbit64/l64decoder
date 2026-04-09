// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~queue
// Entry Point: 00b11554
// Size: 4 bytes
// Signature: undefined __thiscall ~queue(queue<float*,std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>> * this)


/* std::__ndk1::queue<float*, std::__ndk1::deque<float*, std::__ndk1::allocator<float*> >
   >::~queue() */

void __thiscall
std::__ndk1::queue<float*,std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>>::~queue
          (queue<float*,std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>> *this)

{
  __deque_base<float*,std::__ndk1::allocator<float*>>::~__deque_base
            ((__deque_base<float*,std::__ndk1::allocator<float*>> *)this);
  return;
}


