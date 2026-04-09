// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SimpleJobThread
// Entry Point: 00eac9a4
// Size: 180 bytes
// Signature: undefined __thiscall ~SimpleJobThread(SimpleJobThread * this)


/* simplejobsystem::SimpleJobThread::~SimpleJobThread() */

void __thiscall simplejobsystem::SimpleJobThread::~SimpleJobThread(SimpleJobThread *this)

{
  thread *this_00;
  
  if (*(long *)(this + 0x10) == 0) {
    if (*(long *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 8) = 1;
      std::__ndk1::condition_variable::notify_one();
      std::__ndk1::thread::join();
      this_00 = *(thread **)(this + 0x18);
      if (this_00 != (thread *)0x0) {
        std::__ndk1::thread::~thread(this_00);
        operator_delete(this_00);
      }
      *(undefined8 *)(this + 0x18) = 0;
      std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x48));
      std::__ndk1::mutex::~mutex((mutex *)(this + 0x20));
      return;
    }
  }
  else {
    *(undefined4 *)(this + 8) = 1;
    std::__ndk1::condition_variable::notify_one();
    (**(code **)(**(long **)(this + 0x78) + 0x18))
              (*(long **)(this + 0x78),*(undefined8 *)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x48));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x20));
  return;
}


