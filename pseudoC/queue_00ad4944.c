// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~queue
// Entry Point: 00ad4944
// Size: 124 bytes
// Signature: undefined __thiscall ~queue(queue<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::deque<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>> * this)


/* std::__ndk1::queue<VulkanRenderWindow::ReleasedSwapChain,
   std::__ndk1::deque<VulkanRenderWindow::ReleasedSwapChain,
   std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain> > >::~queue() */

void __thiscall
std::__ndk1::
queue<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::deque<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>>
::~queue(queue<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::deque<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>>
         *this)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  __deque_base<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>
  ::clear();
  ppvVar1 = *(void ***)(this + 0x10);
  ppvVar3 = *(void ***)(this + 8);
  if (*(void ***)(this + 8) != ppvVar1) {
    do {
      ppvVar4 = ppvVar3 + 1;
      operator_delete(*ppvVar3);
      ppvVar3 = ppvVar4;
    } while (ppvVar4 != ppvVar1);
    lVar2 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


