// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __clone
// Entry Point: 00eac7f8
// Size: 24 bytes
// Signature: undefined __thiscall __clone(__func<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1},std::__ndk1::allocator<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1}>,void()> * this, __base * param_1)


/* std::__ndk1::__function::__func<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,
   VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1},
   std::__ndk1::allocator<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,
   VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1}>, void
   ()>::__clone(std::__ndk1::__function::__base<void ()>*) const */

void __thiscall
std::__ndk1::__function::
__func<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1},std::__ndk1::allocator<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::{lambda()#1}>,void()>
::__clone(__func<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::_lambda()_1_,std::__ndk1::allocator<simplejobsystem::SimpleJobThread::start(simplejobsystem::FindJobs*,VHACD::IVHACD::IUserTaskRunner*)::_lambda()_1_>,void()>
          *this,__base *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined ***)param_1 = &PTR_FUN_01014478;
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}


