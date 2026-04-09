// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~random_device
// Entry Point: 00f27430
// Size: 32 bytes
// Signature: undefined __thiscall ~random_device(random_device * this)


/* std::__ndk1::random_device::~random_device() */

int __thiscall std::__ndk1::random_device::~random_device(random_device *this)

{
  int iVar1;
  
                    /* try { // try from 00f27440 to 00f27443 has its CatchHandler @ 00f27450 */
  iVar1 = close(*(int *)this);
  return iVar1;
}


