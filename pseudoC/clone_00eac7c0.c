// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __clone
// Entry Point: 00eac7c0
// Size: 56 bytes
// Signature: undefined __clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::__function::__func<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,
   VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1},
   std::__ndk1::allocator<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,
   VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1}>, void ()>::__clone() const */

void std::__ndk1::__function::
     __func<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1},std::__ndk1::allocator<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1}>,void()>
     ::__clone(void)

{
  long in_x0;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(in_x0 + 8);
  *puVar1 = &PTR_FUN_01014478;
  puVar1[1] = uVar2;
  return;
}


